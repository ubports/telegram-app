#include <QApplication>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QSqlDatabase>
#include <QStringList>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QTextStream>

#include "i18n.h"
#include "pushhelper.h"

PushHelper::PushHelper(QString appId, QString infile, QString outfile,
                       QObject *parent) : QObject(parent) {
    setlocale(LC_ALL, "");
    textdomain(GETTEXT_DOMAIN.toStdString().c_str());

    connect(&mPushClient, SIGNAL(persistentCleared()),
                    this, SLOT(notificationDismissed()));

    mPushClient.setAppId(appId);
    mPushClient.registerApp(appId);
    mInfile = infile;
    mOutfile = outfile;
}

PushHelper::~PushHelper() {
}

void PushHelper::process() {
    QString tag = "";

    QJsonObject pushMessage = readPushMessage(mInfile);
    mPostalMessage = pushToPostalMessage(pushMessage, tag);
    if (!tag.isEmpty()) {
        dismissNotification(tag);
    }
    
    // persistentCleared not called!
    notificationDismissed();
}

void PushHelper::notificationDismissed() {
    writePostalMessage(mPostalMessage, mOutfile);
    Q_EMIT done(); // Why does this not work?
}

QJsonObject PushHelper::readPushMessage(const QString &filename) {
    QFile file(filename);
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString val = file.readAll();
    file.close();
    return QJsonDocument::fromJson(val.toUtf8()).object();
}

void PushHelper::writePostalMessage(const QJsonObject &postalMessage, const QString &filename) {
    QFile out;
    out.setFileName(filename);
    out.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);

    QTextStream(&out) << QJsonDocument(postalMessage).toJson();
    out.close();
}

void PushHelper::dismissNotification(const QString &tag) {
    QStringList tags;
    tags << tag;
    mPushClient.clearPersistent(tags);
}

QJsonObject PushHelper::pushToPostalMessage(const QJsonObject &push, QString &tag) {
    QString summary = "";
    QString body = "";
    qint32 count = 0;

    QJsonObject message = push["message"].toObject();
    QJsonObject custom = message["custom"].toObject();

    QString key = "";
    if (message.keys().contains("loc_key")) {
        key = message["loc_key"].toString();    // no-i18n
    }
    QJsonArray args;
    if (message.keys().contains("loc_args")) {
        args = message["loc_args"].toArray();   // no-i18n
    }

    if (custom.keys().contains("from_id")) {
        tag = custom["from_id"].toString();
    }
    if (custom.keys().contains("chat_id")) {
        tag = custom["chat_id"].toString();
    }
    qint64 chatId = tag.toInt();

    // TRANSLATORS: Application name.
    QString tg = QString(N_("Telegram")); // no-i18n
    summary = args[0].toString();

    if (key == "MESSAGE_TEXT") { // no-i18n

        body = args[1].toString();

    } else if (key == "MESSAGE_NOTEXT") { // no-i18n

        body = N_("sent you a message");

    } else if (key == "MESSAGE_PHOTO") { // no-i18n

        body = N_("sent you a photo");

    } else if (key == "MESSAGE_VIDEO") { // no-i18n

        body = N_("sent you a video");

    } else if (key == "MESSAGE_DOC") { // no-i18n

        body = N_("sent you a document");

    } else if (key == "MESSAGE_AUDIO") { // no-i18n

        body = N_("sent you a voice message");

    } else if (key == "MESSAGE_CONTACT") { // no-i18n

        body = N_("shared a contact with you");

    } else if (key == "MESSAGE_GEO") { // no-i18n

        body = N_("sent you a map");

    } else if (key == "CHAT_MESSAGE_TEXT") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1: %2")).arg(args[0].toString()).arg(args[2].toString()); // no-i18n

    } else if (key == "CHAT_MESSAGE_NOTEXT") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a message to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_PHOTO") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a photo to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_VIDEO") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a video to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_DOC") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a document to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_AUDIO") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a voice message to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_CONTACT") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a contact to the group")).arg(args[0].toString());

    } else if (key == "CHAT_MESSAGE_GEO") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 sent a map to the group")).arg(args[0].toString());

    } else if (key == "CHAT_CREATED") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 invited you to the group")).arg(args[0].toString());

    } else if (key == "CHAT_TITLE_EDITED") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 changed group name")).arg(args[0].toString());

    } else if (key == "CHAT_PHOTO_EDITED") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 changed group photo")).arg(args[0].toString());

    } else if (key == "CHAT_ADD_MEMBER") { // no-i18n

        summary = args[1].toString();
        // TRANSLATORS: Notification message saying: person A invited person B (to a group)
        body = QString(N_("%1 invited %2")).arg(args[0].toString()).arg(args[2].toString());

    } else if (key == "CHAT_ADD_YOU") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 invited you to the group")).arg(args[0].toString());

    } else if (key == "CHAT_DELETE_MEMBER") { // no-i18n

        summary = args[1].toString();
        // TRANSLATORS: Notification message saying: person A removed person B (from a group)
        body = QString(N_("%1 removed %2")).arg(args[0].toString()).arg(args[2].toString());

    } else if (key == "CHAT_DELETE_YOU") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 removed you from the group")).arg(args[0].toString());

    } else if (key == "CHAT_LEFT") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 has left the group")).arg(args[0].toString());

    } else if (key == "CHAT_RETURNED") { // no-i18n

        summary = args[1].toString();
        body = QString(N_("%1 has returned to the group")).arg(args[0].toString());

    } else if (key == "GEOCHAT_CHECKIN") { // no-i18n

        // TRANSLATORS: This format string tells location, like: @ McDonals, New York
        summary = QString(N_("@ %1")).arg(args[1].toString());
        // TRANSLATORS: This format string tells who has checked in (in a geographical location).
        body = QString(N_("%1 has checked-in")).arg(args[0].toString());

    } else if (key == "CONTACT_JOINED") { // no-i18n

        summary = tg;
        // TRANSLATORS: This format string tells who has just joined Telegram.
        body = QString(N_("%1 joined Telegram!")).arg(args[0].toString());

    } else if (key == "AUTH_UNKNOWN") { // no-i18n

        summary = args[0].toString();
        body = N_("New login from unrecognized device");

    } else if (key == "AUTH_REGION") { // no-i18n

        // TRANSLATORS: This format string indicates new login of: (device name) at (location).
        summary = QString(N_("%1 @ %2")).arg(args[0].toString()).arg(args[1].toString());
        body = N_("New login from unrecognized device");

    } else if (key == "CONTACT_PHOTO") { // no-i18n

        body = N_("updated profile photo");

    } else if (key == "ENCRYPTION_REQUEST") { // no-i18n

        summary = tg;
        body = N_("You have a new message");

    } else if (key == "ENCRYPTION_ACCEPT") { // no-i18n

        summary = tg;
        body = N_("You have a new message");

    } else if (key == "ENCRYPTED_MESSAGE") { // no-i18n

        summary = tg;
        body = N_("You have a new message");

    } else {
        qDebug() << "Unhandled push type: " << key; // no-i18n
        return QJsonObject();
    }

    QJsonArray actions = QJsonArray();
    QString actionUri = QString("telegram://chat/%1").arg(chatId);
    actions.append(actionUri);

    if (message.keys().contains("badge")) {
        count = message["badge"].toInt();       // no-i18n
    } else if (push.keys().contains("notification")) {
        // Legacy. Notification section is only used to retrieve the unread count.
        count = push["notification"]            // no-i18n
                .toObject()["emblem-counter"]   // no-i18n
                .toObject()["count"]            // no-i18n
                .toInt();
    }

    QJsonObject card;
    card["icon"] = getAvatar(chatId);
    card["summary"] = summary;  // no-i18n
    card["body"]    = body;     // no-i18n
    card["actions"] = actions;  // no-i18n
    card["popup"]   = true;     // no-i18n // TODO make setting
    card["persist"] = true;     // no-i18n // TODO make setting

    QJsonObject emblem;
    emblem["count"] = count;                    // no-i18n
    emblem["visible"] = count > 0;              // no-i18n

    QJsonObject notification;
    notification["tag"] = tag;                  // no-i18n
    notification["card"] = card;                // no-i18n
    notification["emblem-counter"] = emblem;    // no-i18n
    notification["sound"] = true;               // no-i18n // TODO make setting
    notification["vibrate"] = true;             // no-i18n // TODO make setting

    QJsonObject postalMessage = QJsonObject();
    postalMessage["notification"] = notification; // no-i18n

    return postalMessage;
}

// TODO: This should be placed in a class shared between app, scope, push.

QString PushHelper::getPrimaryPhoneNumber() {
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

    return number;
}

QString PushHelper::getAvatar(qint64 peerId) {
    QString avatar = "";
    QString phone = getPrimaryPhoneNumber();
    if (!phone.isEmpty()) {
        QStringList nameFilters;
        nameFilters << "*.jpeg" << "*.jpeg";

        QDir profilesDir(PROFILE_DIR_FMT.arg(phone).arg(peerId));
        profilesDir.setNameFilters(nameFilters);
        profilesDir.setSorting( QDir::Time );

        QStringList fileNames = profilesDir.entryList();
        if (fileNames.length() > 0) {
            avatar = PROFILE_FILE_FMT.arg(phone).arg(peerId).arg(fileNames[0]);
        } // TODO else: generic avatar
    }
    return avatar;
}
