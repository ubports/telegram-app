#include <unity/scopes/Annotation.h>
#include <unity/scopes/CategoryRenderer.h>
#include <unity/scopes/QueryBase.h>
#include <unity/scopes/SearchReply.h>
#include <unity/scopes/VariantBuilder.h>

#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QSqlQuery>
#include <QSqlRecord>

#include "i18n.h"
#include "query.h"
#include "templates.h"

using unity::scopes::Variant;
using unity::scopes::VariantBuilder;

TelegramQuery::TelegramQuery(CannedQuery const &query, SearchMetadata const &metadata, QString const &scopeDir)
        : SearchQueryBase(query, metadata), mMetadata(metadata), mScopeDir(scopeDir) {
    setlocale(LC_ALL, "");
    textdomain(GETTEXT_DOMAIN.toStdString().c_str());
}

TelegramQuery::~TelegramQuery() {
}

void TelegramQuery::cancelled() {
}

void TelegramQuery::run(SearchReplyProxy const &reply) {
    if (mMetadata.is_aggregated()) {
        mInRecent = aggregated(KEYWORD_RECENT);
        mInPhotos = aggregated(KEYWORD_PHOTOS_TELEGRAM);
        mIsAggregated = mInRecent || mInPhotos;
    }
    qDebug().noquote() << TAG << "in recent" << mInRecent << ", in photos" << mInPhotos;

    const QString searchQuery = QString::fromStdString(query().query_string());
    const bool isSearch = !searchQuery.isEmpty();

    mOwnNumber = getPrimaryPhoneNumber();
    if (mOwnNumber.isEmpty()) {
        pushLogin(reply);
        return;
    }
    bool opened = openDatabase(mOwnNumber);
    if (!opened) {
        pushLogin(reply);
        return;
    }

    mOwnId = getPrimaryUserId();
    if (mOwnId == 0) {
        if (mIsAggregated) return; // No results.

        QString title = N_("Failed to get Telegram data");
        QString subtitle = N_("Touch here to open app");
        pushError(reply, title, subtitle);
        return;
    }

    if (isSearch && mIsAggregated) return;

    if (isSearch) {
        // TODO: Should we allow Telegram messages search when aggregated?
        if (DEBUG) qDebug().noquote() << TAG << "search with limit:" << LIMIT_SEARCH;
        processSearch(reply, searchQuery, LIMIT_SEARCH);
    } else {
        int limit = LIMIT_SURFACE;
        if (mInRecent) limit = 1;
        if (mInPhotos) limit = LIMIT_MEDIA;

        if (DEBUG) qDebug().noquote() << TAG << "surfacing with limit:" << limit;
        processDialogs(reply, searchQuery, limit);
    }
}

inline bool TelegramQuery::aggregated(std::string keyword) {
    auto keywords = mMetadata.aggregated_keywords();
    return keywords.find(keyword) != keywords.end();
}

bool TelegramQuery::openDatabase(QString const &number) {
    const QString dbPath = DATABASE_PATH_FMT.arg(number);

    QFile db(dbPath);
    if (!db.exists()) {
        qCritical() << "telegram db: file not found";
        return false;
    }

    mDatabase = QSqlDatabase::addDatabase("QSQLITE", "tg-data");
    mDatabase.setDatabaseName(dbPath);

    return mDatabase.open();
}

QString TelegramQuery::getDate(qint64 time) {
    QDateTime date = QDateTime::fromMSecsSinceEpoch(time);
    return date.toString(TIME_FORMAT);
}

QString TelegramQuery::getAvatar(QString scopePath, qint64 userId) {
    QString images[] = { "violet", "pink", "green", "yellow", "blue", "aqua", "orange", "red" }; // no-i18n
    QString image = images[userId % 8];
    return QString("file://%1/user_%2.png").arg(scopePath).arg(image); // no-i18n
}

QString TelegramQuery::getPrimaryPhoneNumber() {
    QString number;

    QFile db(PROFILES_PATH);
    if (!db.exists()) {
        qCritical() << "profiles db: file not found";
        return number;
    }

    QSqlDatabase profiles = QSqlDatabase::addDatabase("QSQLITE", "tg-profiles");
    profiles.setDatabaseName(PROFILES_PATH);

    if (!profiles.open()) {
        qCritical() << "profiles db: failed to open";
        return number;
    }

    QSqlQuery query(profiles);
    query.prepare("SELECT number FROM Profiles ORDER BY rowid LIMIT 1");
    if (!query.exec() || !query.first()) {
        qCritical() << "profiles db: failed to query phone number";
        return number;
    }

    int numberIndex = query.record().indexOf("number");
    number = query.value(numberIndex).toString();
    profiles.close();

    if (DEBUG) qDebug() << QString("primary profile: *%1").arg(number.mid(number.length() - 3, 3));

    return number;
}

qint64 TelegramQuery::getPrimaryUserId() {
    qint64 userId = 0;
    QString trimmedPhone = (mOwnNumber.at(0) == '+') ? mOwnNumber.mid(1) : mOwnNumber;

    QSqlQuery query(mDatabase);
    query.prepare("SELECT id FROM Users WHERE phone = :phone");
    query.bindValue(":phone", trimmedPhone);
    if (query.exec() && query.first()) {
        userId = query.value(query.record().indexOf("id")).toInt();
    }

    return userId;
}

void TelegramQuery::processSearch(SearchReplyProxy const &reply, const QString &searchQuery, int limit) {
    UserMap users;
    ChatMap chats;
    ResultList results;

    searchUsers(searchQuery, users);
    searchChats(searchQuery, chats);

    CategoryRenderer contactsRenderer(CONTACTS_SEARCH_TEMPLATE);
    auto usersCategory = reply->register_category("users", N_("Results in: Contacts & Chats"), "", contactsRenderer);
    for (auto &user: users) {
        if (user.first == mOwnId) continue;

        auto result = userToResult(usersCategory, user.second);
        results.push_back(result);
    }
    for (auto &chat: chats) {
        auto result = chatToResult(usersCategory, chat.second);
        results.push_back(result);
    }

    UserMap relatedUsers;
    ChatMap relatedChats;
    MessageList messages;

    CategoryRenderer messagesRenderer(MESSAGES_SEARCH_TEMPLATE);
    auto messagesCategory = reply->register_category("messages", N_("Results in: Messages"), "", messagesRenderer);
    QString relatedUids;
    QString relatedCids;
    searchMessages(searchQuery, limit, messages, relatedUids, relatedCids);

    getUsers(relatedUids, relatedUsers);
    getChats(relatedCids, relatedChats);
    // Merge related users and chats with found messages.
    for (auto &message: messages) {
        if (message.isChat && relatedChats.find(message.chat.id) != relatedChats.end()) {
            message.chat = relatedChats.at(message.chat.id);
        } else if (relatedUsers.find(message.user.id) != relatedUsers.end()) {
            message.user = relatedUsers.at(message.user.id);
        }
        results.push_back(messageToResult(messagesCategory, message));
    }

    for (auto &result: results) {
        if (result["type"].get_string() != "unknown") { // no-i18n
            if (!reply->push(result)) return;
        }
    }
}

void TelegramQuery::processDialogs(SearchReplyProxy const &reply, const QString &searchQuery, uint limit) {
    const bool isSearch = !searchQuery.isEmpty();

    QString dialogQuerySql = QString(
        "SELECT peer, peerType, topMessage, unreadCount, "                           // no-i18n
        "   (SELECT date FROM Messages WHERE messages.id = topMessage) AS date, "    // no-i18n
        "   (SELECT id FROM Users WHERE users.id = peer) AS uid, "                   // no-i18n
        "   (SELECT id FROM Chats WHERE chats.id = peer) AS cid "                    // no-i18n
        "FROM dialogs WHERE encrypted = 0 ORDER BY date DESC LIMIT %1"               // no-i18n
    ).arg(limit);

    QSqlQuery query(mDatabase);
    query.prepare(dialogQuerySql);
    if (!query.exec()) {
        qCritical() << "could not get top message data";
        return;
    }

    QSqlRecord record = query.record();
    QString uids;
    QString cids;
    QString unreadIds;
    QString readIds;
    int unreadTotal = 0;
    while (query.next()) {
        QString peer = query.value(record.indexOf("peer")).toString();
        qint32 type = (unsigned) query.value(record.indexOf("peerType")).toInt();
        
        if (PeerType::typePeerUser == static_cast<PeerType>(type)) {
            // user
            if (!uids.isEmpty()) uids += ",";
            uids += peer;
        } else {
            // chat
            if (!cids.isEmpty()) cids += ",";
            cids += peer;
        }

        QString mid = query.value(record.indexOf("topMessage")).toString();
        int unreadCount = query.value(record.indexOf("unreadCount")).toInt();

        if (unreadCount > 0) {
            if (!unreadIds.isEmpty()) unreadIds += ",";
            unreadIds += mid;
            unreadTotal += unreadCount;
        } else {
            if (!readIds.isEmpty()) readIds += ",";
            readIds += mid;
        }
    }

    UserMap users;
    ChatMap chats;
    MessageList messages;
    ResultList results;

    CategoryRenderer photosRenderer(PHOTO_MESSAGES_TEMPLATE);

    getUsers(uids, users);
    getChats(cids, chats);

    if (mInPhotos) {
        // TODO Should photo aggregator respect the category title provided here? It currently does not.
        auto photoCategory = reply->register_category("photos", "Telegram", "", photosRenderer); // no-i18n

        getMessages(users, chats, "", messages, true);
        unsigned int messageCount = messages.size();
        if (DEBUG) qDebug().noquote() << TAG << "returning" << messageCount << "results";

        for (uint i = 0, resultCount = 0; i < messageCount && resultCount < limit; i++) {
            auto result = messageToResult(photoCategory, messages[i]);
            if (result["type"].get_string() != "unknown") {
                if (!reply->push(result)) break;
                resultCount++;
            }
        }
        return;
    }

    CategoryRenderer contactsRenderer(isSearch ? CONTACTS_SEARCH_TEMPLATE : CONTATS_TEMPLATE);
    CategoryRenderer unreadRenderer(UNREAD_MESSAGES_TEMPLATE);
    CategoryRenderer recentRenderer(isSearch ? MESSAGES_SEARCH_TEMPLATE : RECENT_MESSAGES_TEMPLATE);

    auto usersCategory = reply->register_category("users", N_("People You Talk To"), "", contactsRenderer);
    auto recentCategory = reply->register_category("recent", N_("Recent Chats"), "", recentRenderer);
    auto photoCategory = reply->register_category("photos", N_("Recent Photos"), "", photosRenderer);

    if (unreadTotal > 0) {
        // lists unread chats (not messages, as in v1), shows total unread count
        // TRANSLATORS: Unread message count shown in the scope unread category.
        QString newMessagesFormat = unreadTotal == 1 ? N_("%1 new message") : N_("%1 new messages");
        // TRANSLATORS: The argument is a string saying how many new messages are there, like '5 new messages'.
        QString newMessages = newMessagesFormat.arg(unreadTotal);
        QString unreadTitle = QString(N_("Unread Chats (%1)")).arg(newMessages);
        auto unreadCategory = reply->register_category("unread", unreadTitle.toStdString(), "", unreadRenderer);

        getMessages(users, chats, unreadIds, messages);
        for (uint i = 0, resultCount = 0; i < messages.size() && resultCount < limit; i++) {
            auto result = messageToResult(unreadCategory, messages[i]);
            results.push_back(result);
            resultCount++;
        }
        messages.clear();
    }

    if (mInRecent && results.size() > 0) {
        pushAggregatedResult(reply, results[0]);
        return;
    }

    // recent read chats
    getMessages(users, chats, readIds, messages);
    for (uint i = 0, resultCount = 0; i < messages.size() && resultCount < limit; i++) {
        auto result = messageToResult(recentCategory, messages[i]);
        results.push_back(result);
        resultCount++;
    }
    messages.clear();

    if (mInRecent) {
        if (results.size() > 0) {
            pushAggregatedResult(reply, results[0]);
        } else {
            pushNoMessagesToday(reply);
        }
        return;
    }

    // last photos
    getMessages(users, chats, "", messages, true);
    for (uint i = 0, resultCount = 0; i < messages.size() && resultCount < limit; i++) {
        auto result = messageToResult(photoCategory, messages[i]);
        results.push_back(result);
        resultCount++;
    }
    messages.clear();

    // recent users
    for (auto &user: users) {
        if (user.first == mOwnId) continue;

        auto result = userToResult(usersCategory, user.second);
        results.insert(results.begin(), result);
    }
    qDebug().noquote() << TAG << "returning" << results.size() << "results";
    push(reply, results);
}

void TelegramQuery::queryUsers(const QString &sql, UserMap &users) {
    QSqlQuery query(mDatabase);
    query.prepare(sql);
    if (!query.exec()) {
        qCritical() << "Could not get users";
        return;
    }

    QSqlRecord record = query.record();
    while (query.next()) {
        User user;
        user.id = query.value(record.indexOf("id")).toInt();
        if (user.id == 0) {
            user.id = mOwnId;
        }
        user.phone = query.value(record.indexOf("phone")).toString();
        user.firstName = query.value(record.indexOf("firstName")).toString();
        user.lastName = query.value(record.indexOf("lastName")).toString();

        qint64 volumeId = query.value(record.indexOf("photoSmallVolumeId")).toInt();
        qint64 localId = query.value(record.indexOf("photoSmallLocalId")).toInt();
        if (volumeId == 0 && localId == 0) {
            user.avatar = getAvatar(mScopeDir, user.id);
        } else {
            QString userThumb = QString("%1_%2").arg(volumeId).arg(localId); // no-i18n
            user.avatar = QString(PROFILE_PATH_FMT).arg(mOwnNumber).arg(user.id).arg(userThumb);
        }
        if (DEBUG) qDebug() << user.avatar;

        users[user.id] = user;
    }
}

void TelegramQuery::getUsers(const QString &ids, UserMap &users) {
    QString sql = QString(
        "SELECT id, phone, firstName, lastName, photoSmallVolumeId, photoSmallLocalId FROM Users WHERE id IN (%1)" // no-i18n
    ).arg(ids);
    queryUsers(sql, users);
}

void TelegramQuery::searchUsers(const QString &searchQuery, UserMap &users) {
    QString sql = QString(
        "SELECT id, phone, firstName, lastName, photoSmallVolumeId, photoSmallLocalId "  // no-i18n
        "FROM Users WHERE firstName || ' ' || lastName LIKE '%%1%'"                      // no-i18n
    ).arg(searchQuery);
    queryUsers(sql, users);
}

void TelegramQuery::queryChats(const QString &sql, ChatMap &chats) {
    QSqlQuery query(mDatabase);
    query.prepare(sql);
    if (!query.exec()) {
        qCritical() << "Could not get chats";
        return;
    }

    QSqlRecord record = query.record();
    while (query.next()) {
        Chat chat;
        chat.id = query.value(record.indexOf("id")).toInt();
        chat.title = query.value(record.indexOf("title")).toString();

        qint64 volumeId = query.value(record.indexOf("photoSmallVolumeId")).toInt();
        qint64 localId = query.value(record.indexOf("photoSmallLocalId")).toInt();
        if (volumeId == 0 && localId == 0) {
            chat.avatar = getAvatar(mScopeDir, chat.id);
        } else {
            QString chatThumb = QString("%1_%2").arg(volumeId).arg(localId); // no-i18n
            chat.avatar = QString(PROFILE_PATH_FMT).arg(mOwnNumber).arg(chat.id).arg(chatThumb);
        }

        chats[chat.id] = chat;
    }
}

void TelegramQuery::getChats(const QString &ids, ChatMap &chats) {
    QString sql = QString(
        "SELECT id, title, photoSmallVolumeId, photoSmallLocalId FROM Chats WHERE id IN (%1)" // no-i18n
    ).arg(ids);
    queryChats(sql, chats);
}

void TelegramQuery::searchChats(const QString &searchQuery, ChatMap &chats) {
    QString sql = QString(
        "SELECT id, title, photoSmallVolumeId, photoSmallLocalId FROM Chats WHERE title LIKE '%%1%'" // no-i18n
    ).arg(searchQuery);
    queryChats(sql, chats);
}

void TelegramQuery::getMessages(const UserMap &users, const ChatMap &chats, const QString mids, MessageList &messages, bool hasMedia) {
    QString whereSql = " WHERE "; // no-i18n
    int limit = 0;

    if (mInRecent) {
        // clam date column to results from today and LIMIT 1
        const QDate today = QDate::currentDate();//QDateTime::currentDateTime().toLocalTime().date();
        const QDateTime todayStart(today, QTime(0, 0, 0));
        const QDateTime todayEnd(today, QTime(23, 59, 59));
        whereSql += QString("mdate BETWEEN %1 AND %2 ").arg(todayStart.toTime_t()).arg(todayEnd.toTime_t()); // no-i18n
        limit = 1;
    } else {
        whereSql += "1=1 "; // no-i18n
    }

    if (!mids.isEmpty()) {
        whereSql += QString("AND mid IN (%1)").arg(mids); // no-i18n
    } else if (hasMedia) {
        whereSql += QString("AND mediaType IN (%1)") // no-i18n
                .arg((unsigned int)MessageMedia::typeMessageMediaPhoto);

        /*
        whereSql += QString("WHERE mediaType IN (%1,%2)") // no-i18n
        .arg((unsigned int)MessageMedia::typeMessageMediaPhoto)
        .arg((unsigned int)MessageMedia::typeMessageMediaVideo);
        */
        if (!mInPhotos) {
            limit = LIMIT_MEDIA;
        }
    }

    QString limitSql = (limit > 0) ? QString("LIMIT %1").arg(limit) : " ";

    QString sql = QString(
        "SELECT messages.id as mid, messages.date as mdate, out, unread, toPeerType, mediaType, mediaVideo as vid, message, fromId, toId, " // no-i18n
        "   (SELECT locationVolumeId || '_' || locationLocalId FROM photoSizes WHERE mediaPhoto = pid LIMIT 1) AS photo, "                  // no-i18n
        "   (SELECT locationVolumeId || '_' || locationLocalId FROM photoSizes WHERE mediaVideo = pid LIMIT 1) AS video "                   // no-i18n
        "FROM Messages %1 ORDER BY mdate DESC %2"                                                                                           // no-i18n
    ).arg(whereSql).arg(limitSql);

    QSqlQuery query(mDatabase);
    query.prepare(sql);
    if (!query.exec()) {
        qCritical() << "Could not get messages";
    }

    while (query.next()) {
        const QSqlRecord &record = query.record();

        Message msg;
        msg.id = query.value(record.indexOf("mid")).toInt();

        qint32 toPeerType = (unsigned int) query.value(record.indexOf("toPeerType")).toInt();
        msg.isChat = (PeerType::typePeerChat == static_cast<PeerType>(toPeerType));
        qint64 toId = query.value(record.indexOf("toId")).toInt();;
        if (msg.isChat) {
            if (chats.find(toId) != chats.end()) {
                msg.chat = chats.at(toId);
            } else if (!mIsAggregated) {
                qCritical() << "chat not found: " << toId;
            }
        }
        qint64 fromId = query.value(record.indexOf("fromId")).toInt();;
        qint64 userId = (fromId == mOwnId) ? toId : fromId;
        if (users.find(userId) != users.end()) {
            msg.user = users.at(userId);
        } else if (!mIsAggregated) {
            qCritical().noquote() << TAG << "user not found" << fromId;
        }

        msg.date = query.value(record.indexOf("mdate")).toInt();
        msg.isOut = query.value(record.indexOf("out")).toBool();
        msg.isUnread = query.value(record.indexOf("unread")).toBool();

        msg.text = query.value(record.indexOf("message")).toString();
        msg.mediaType = static_cast<MessageMedia>(query.value(record.indexOf("mediaType")).toInt());

        qint64 dialogId = msg.isChat ? msg.chat.id : msg.user.id;

        switch (msg.mediaType) {
        case MessageMedia::typeMessageMediaPhoto: {
            QString photo = query.value(record.indexOf("photo")).toString();
            msg.mediaUrl = QString(PHOTO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(photo);
            msg.mediaThumb = msg.mediaUrl;
            if (DEBUG) qDebug() << "photo:" << msg.mediaUrl;
            break;
        }
        case MessageMedia::typeMessageMediaVideo: {
            QString video = query.value(record.indexOf("vid")).toString();
            msg.mediaUrl = QString(VIDEO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(video);
            msg.mediaThumb = QString(msg.mediaUrl) + ".jpg"; // no-i18n
            if (DEBUG) qDebug() << "video:" << msg.mediaUrl;
            if (DEBUG) qDebug() << "video thumb:" << msg.mediaThumb;
            break;
        }
        case MessageMedia::typeMessageMediaEmpty: 
            break;
        default:
            qCritical() << "Unhandled media type!";
            break;
        }

        messages.push_back(msg);
    }
}

void TelegramQuery::searchMessages(const QString searchQuery, int limit, MessageList &messages, QString &relatedUids, QString &relatedCids) {
    QString sql = QString(
        "SELECT messages.id as mid, messages.date as mdate, out, unread, toPeerType, mediaType, mediaVideo as vid, message, fromId, toId, " // no-i18n
        "   (SELECT locationVolumeId || '_' || locationLocalId FROM photoSizes WHERE mediaPhoto = pid LIMIT 1) AS photo, "                  // no-i18n
        "   (SELECT locationVolumeId || '_' || locationLocalId FROM photoSizes WHERE mediaVideo = pid LIMIT 1) AS video "                   // no-i18n
        "FROM Messages WHERE message LIKE '%%1%' ORDER BY mdate DESC LIMIT %2"                                                              // no-i18n
    ).arg(searchQuery).arg(limit);

    QSqlQuery query(mDatabase);
    query.prepare(sql);
    if (!query.exec()) {
        qCritical() << "Could not get messages";
    }

    while (query.next()) {
        const QSqlRecord &record = query.record();

        Message msg;
        msg.id = query.value(record.indexOf("mid")).toInt();

        qint32 toPeerType = (unsigned int) query.value(record.indexOf("toPeerType")).toInt();
        msg.isChat = (PeerType::typePeerChat == static_cast<PeerType>(toPeerType));
        qint64 toId = query.value(record.indexOf("toId")).toInt();;
        if (msg.isChat) {
            msg.chat.id = toId;
            if (!relatedCids.isEmpty()) relatedCids += ",";
            relatedCids += QString::number(toId);
        }
        qint64 fromId = query.value(record.indexOf("fromId")).toInt();;
        qint64 userId = (fromId == mOwnId) ? toId : fromId;
        if (!relatedUids.isEmpty()) relatedUids += ",";
        relatedUids += QString::number(userId);
        msg.user.id = userId;

        msg.date = query.value(record.indexOf("mdate")).toInt();
        msg.isOut = query.value(record.indexOf("out")).toBool();
        msg.isUnread = query.value(record.indexOf("unread")).toBool();

        msg.text = query.value(record.indexOf("message")).toString();
        msg.mediaType = static_cast<MessageMedia>(query.value(record.indexOf("mediaType")).toInt());

        qint64 dialogId = msg.isChat ? msg.chat.id : msg.user.id;

        switch (msg.mediaType) {
        case MessageMedia::typeMessageMediaPhoto: {
            QString photo = query.value(record.indexOf("photo")).toString();
            msg.mediaUrl = QString(PHOTO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(photo);
            msg.mediaThumb = msg.mediaUrl;
            if (DEBUG) qDebug() << "photo:" << msg.mediaUrl;
            break;
        }
        case MessageMedia::typeMessageMediaVideo: {
            QString video = query.value(record.indexOf("vid")).toString();
            msg.mediaUrl = QString(VIDEO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(video);

            // TODO verify this works for non-downloaded

            // msg.mediaThumb = QString(PHOTO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(videoThumb);
            msg.mediaThumb = QString(VIDEO_PATH_FMT).arg(mOwnNumber).arg(dialogId).arg(video) + ".jpg";
            if (DEBUG) qDebug() << "video:" << msg.mediaUrl;
            if (DEBUG) qDebug() << "video thumb:" << msg.mediaThumb;
            break;
        }
        case MessageMedia::typeMessageMediaEmpty: 
            break;
        default:
            qCritical() << "Unhandled media type!";
            break;
        }

        messages.push_back(msg);
    }
}

CategorisedResult TelegramQuery::messageToResult(Category::SCPtr category, const Message &message) {
    CategorisedResult result(category);

    qint64 dialogId = message.isChat ? message.chat.id : message.user.id;
    QString uri = QString("telegram://chat/%1").arg(dialogId);

    result.set_uri(uri.toStdString());
    switch (message.mediaType) {
    case MessageMedia::typeMessageMediaEmpty:
        result["type"] = "text"; // no-i18n
        result["title"] = message.text.toStdString(); // no-i18n
        if (message.text.isEmpty()) {
            result["type"] = "unknown"; // no-i18n
        }
        break;
    case MessageMedia::typeMessageMediaAudio:
        result["type"] = "audio"; // no-i18n
        result["title"] = N_("Audio message");
        break;
    case MessageMedia::typeMessageMediaContact:
        result["type"] = "contact"; // no-i18n
        result["title"] = N_("Contact received");
        break;
    case MessageMedia::typeMessageMediaDocument:
        result["type"] = "document"; // no-i18n
        result["title"] = N_("Document received");
        break;
    case MessageMedia::typeMessageMediaPhoto:
        result["type"] = "photo"; // no-i18n
        result["title"] = N_("Photo received");

        if (QFile(message.mediaUrl.mid(7)).exists()) {
            result["mediaUrl"] = message.mediaUrl.toStdString(); // no-i18n
            result["mediaThumb"] = message.mediaUrl.toStdString(); // no-i18n
/*
            if (mInPhotos) {
                result["art"] = result["mediaThumb"];
            }
*/
            result["art"] = result["mediaThumb"];
        } else {
            result["type"] = "unknown"; // no-i18n
        }
        break;
    case MessageMedia::typeMessageMediaVideo:
        result["type"] = "video"; // no-i18n
        result["title"] = N_("Video received");

        if (QFile(message.mediaUrl.mid(7)).exists()) {
            result["mediaUrl"] = message.mediaUrl.toStdString(); // no-i18n
            result["mediaThumb"] = message.mediaThumb.toStdString(); // no-i18n
        } else {
            result["type"] = "unknown"; // no-i18n
        }
        break;
    default:
        result["title"] = N_("Unhandled media type");
        result["type"] = "unknown"; // no-i18n
        break;
    }

    QString from;
    if (message.isChat) {
        from = message.chat.title;
    } else {
        from = message.user.firstName;
        if (!message.user.lastName.isEmpty()) {
            from += " " + message.user.lastName;
        }
    }

    QString date = getDate(message.date * 1000);
    result["subtitle"] = (from + " | " + date).toStdString(); // no-i18n
    result["from"] = from.toStdString(); // no-i18n
    result["date"] = date.toStdString(); // no-i18n
    result["avatar"] = (message.isChat ? message.chat.avatar : message.user.avatar).toStdString(); // no-i18n

    return result;
}

CategorisedResult TelegramQuery::userToResult(Category::SCPtr category, const User &user) {
    CategorisedResult result(category);
    QString uri = QString("telegram://chat/%1").arg(user.id);
    result.set_uri(uri.toStdString());
    result["avatar"] = user.avatar.toStdString(); // no-i18n
    result["title"] = user.lastName.isEmpty() // no-i18n
            ? user.firstName.toStdString()
            : (user.firstName + " " + user.lastName).toStdString();
    result["phone"] = user.phone.isEmpty() ? "" : QString("+").append(user.phone).toStdString(); // no-i18n
    result["type"] = "user"; // no-i18n

    return result;
}

CategorisedResult TelegramQuery::chatToResult(Category::SCPtr category, const Chat &chat) {
    CategorisedResult result(category);
    QString uri = QString("telegram://chat/%1").arg(chat.id);
    result.set_uri(uri.toStdString());
    result["avatar"] = chat.avatar.toStdString(); // no-i18n
    result["title"] = chat.title.toStdString(); // no-i18n
    result["type"] = "chat"; // no-i18n

    return result;
}

void TelegramQuery::push(SearchReplyProxy const &reply, ResultList &results) {
    for (auto result : results) {
        if (result["type"].get_string() != "unknown") {
            if (!reply->push(result)) break;
        }
    }
}

void TelegramQuery::pushError(SearchReplyProxy const &reply, QString const &title, QString const &subtitle) {
     CategoryRenderer renderer(ERROR_TEMPLATE);
     auto category = reply->register_category("error", "", "", renderer);
     CategorisedResult result(category);
     result.set_uri("telegram://launch");
     result["title"] = title.toStdString().c_str(); // no-i18n
     if (!subtitle.isEmpty()) {
        result["subtitle"] = subtitle.toStdString().c_str(); // no-i18n
     }
     result["error"] = true; // no-i18n
     reply->push(result);
}

void TelegramQuery::pushLogin(SearchReplyProxy const &reply) {
     CategoryRenderer renderer(LOGIN_TEMPLATE);
     auto category = reply->register_category("login", mIsAggregated ? "Telegram" : "", "", renderer);
     CategorisedResult result(category);
     result.set_uri("telegram://launch");
     result["title"] = N_("Login to Telegram"); // We should really use a verb..
     result["mascot"] =  QString("file://%1/telegram.png").arg(mScopeDir).toStdString();
     result["type"] = "error"; // no-i18n
     reply->push(result);
}

void TelegramQuery::pushAggregatedResult(SearchReplyProxy const &reply, CategorisedResult const &aggregatedResult) {
    CategorisedResult result = aggregatedResult;
    result.set_uri("scope://com.ubuntu.telegram_sctelegram");

    std::string title = result["title"].get_string(); // no-i18n
    result["title"] = result["from"]; // no-i18n
    VariantBuilder attrs;
    attrs.add_tuple({
        {"value", Variant(title)} // no-i18n
    });
    attrs.add_tuple({
        {"value", Variant("")} // no-i18n
    });
    attrs.add_tuple({
        {"value", Variant(result["date"])} // no-i18n
    });
    attrs.add_tuple({
        {"value", Variant("")} // no-i18n
    });
    result["attributes"] = attrs.end(); // no-i18n
    std::string icon = QString("file://%1/telegram.png").arg(mScopeDir).toStdString();
    result["mascot"] = icon; // no-i18n
    reply->push(result);
}

void TelegramQuery::pushNoMessagesToday(SearchReplyProxy const &reply) {
    CategoryRenderer renderer(LOGIN_TEMPLATE);
    auto category = reply->register_category("empty", "", "", renderer);
    CategorisedResult result(category);
    result.set_uri("scope://com.ubuntu.telegram_sctelegram");
    result["title"] = QString(N_("No messages received Today.")).toStdString();
    result["mascot"] = QString("file://%1/telegram.png").arg(mScopeDir).toStdString();
    reply->push(result);
}
