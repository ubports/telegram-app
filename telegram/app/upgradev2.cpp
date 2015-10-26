#include "upgradev2.h"

#include <QDebug>
#include <QCoreApplication>
#include <QFileInfo>
#include <QFile>
#include <QIODevice>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextStream>

UpgradeV2::UpgradeV2(QObject *parent) : QObject(parent) {
    phone = "";
    configPath = QDir::homePath() + "/.config/" + QCoreApplication::organizationDomain().toLower();
    cachePath  = QDir::homePath() + "/.cache/" + QCoreApplication::organizationDomain().toLower();
    configFilePath = configPath + "/com.ubuntu.telegram.conf";

    config.setPath(configPath);
}

UpgradeV2::~UpgradeV2() {
}

void UpgradeV2::upgrade() {
    getPhoneNumber();
    if (phone.isEmpty()) {
        qDebug() << TAG << "not logged in, nothing to do";
        return;
    }

    setUpPhonePaths();

    copyDatabaseFiles();

    createConfig();

    copySecretChats();

    renameConfigDirectory();

    insertProfile();

    deleteFiles();

    qDebug() << TAG << "now at v2.";
}

void UpgradeV2::getPhoneNumber() {
    QDir dir(configPath);
    dir.setFilter(QDir::Dirs);
    dir.setSorting(QDir::Name);
    QRegExp re("^\\+\\d{1,2}\\d+$");

    QStringList entries = dir.entryList();
    for (QString entry: entries) {
        if (re.indexIn(entry) == 0) {
            phone = entry.mid(1);
            break;
        }
    }
}

void UpgradeV2::setUpPhonePaths() {
    configPhonePath = configPath + "/+" + phone;
    cachePhonePath  = cachePath + "/+" + phone;

    databaseFilePath = cachePhonePath + "/telegram.sqlite";

    QDir configPhoneDir(configPhonePath);

    newProfilesPath = config.absoluteFilePath("profiles.sqlite");
    newUserdataPath = configPhoneDir.absoluteFilePath("userdata.db");
    newDatabasePath = configPhoneDir.absoluteFilePath("database.db");
}

void UpgradeV2::copyFromResource(QString resource, QString path) {
    QFile dest(path);
    if (!dest.exists()) {
        QFile::copy(resource, path);
        dest.setPermissions(QFileDevice::WriteOwner|QFileDevice::WriteGroup|QFileDevice::ReadUser|QFileDevice::ReadGroup);
    }
}

void UpgradeV2::copyDatabaseFiles() {
    copyFromResource(DATABASE_DB_PATH, newDatabasePath);
    copyFromResource(USERDATA_DB_PATH, newUserdataPath);
    copyFromResource(PROFILES_DB_PATH, newProfilesPath);
}

void UpgradeV2::createConfig() {
    /*
    // This is optional, as default config values are re-created.
    QString newConfigFilePath(config.absoluteFilePath("config.ini"));
    qDebug() << "upgrade0: " << newConfigFilePath;
    QFile configFile(newConfigFilePath);
    if (configFile.open(QIODevice::WriteOnly)) {
        QTextStream out(&configFile);
        out << "[%General]" << endl;
        out << "pushNotifications=true" << endl;
        out << "pushNumber=" << phone << endl;
        out.flush();
    }
    */
}

inline void UpgradeV2::copySecretMessage(qint64 peer, const QSqlRecord &message, QSqlDatabase &newDb) {
    QSqlQuery insert(newDb);
    insert.prepare("INSERT INTO Messages (id, toId, toPeerType, unread, fromId, out, date, fwdDate, fwdFromId, message, "
            "actionUserId, actionPhoto, actionType, mediaAudio, mediaPhoneNumber, mediaDocument, mediaGeo, mediaPhoto, mediaUserId, mediaVideo, mediaType) "
            "VALUES (:id, :toId, :toPeerType, :unread, :fromId, :out, :date, :fwdDate, :fwdFromId, :message, "
            "0, 0, :actionType, 0, 0, 0, 0, :mediaPhoto, 0, :mediaVideo, :mediaType)");
    // TODO actions and media attachments
    bool out = message.value("out").toInt();
    qint64 actionType = message.value("actionType").toLongLong();
    if (actionType == 0) {
        actionType = 0xb6aef7b0; // MessageAction::typeMessageActionEmpty
    }
    qint64 mediaType = message.value("mediaType").toLongLong();
    qint64 mediaId = message.value("mediaId").toLongLong();

    const qint64 typeMessageMediaVideo = 0xa2d24290;
    const qint64 typeMessageMediaPhoto = 0xc8c45a2a;

    insert.bindValue(":id", message.value("id").toLongLong());
    insert.bindValue(":toId", peer); // messages.value("toId").toLongLong()
    insert.bindValue(":fromId", message.value("fromId").toLongLong());
    insert.bindValue(":toPeerType", 0xbad0e5bb); // Peer::typePeerChat
    insert.bindValue(":unread", message.value("unread").toLongLong());
    insert.bindValue(":out", out);
    insert.bindValue(":date", message.value("date").toLongLong());
    insert.bindValue(":fwdFromId", message.value("fwdFromId").toLongLong());
    insert.bindValue(":fwdDate", message.value("fwdDate").toLongLong());
    insert.bindValue(":message", message.value("message").toString());
    insert.bindValue(":actionType", actionType);
    insert.bindValue(":mediaPhoto", mediaType == typeMessageMediaPhoto ? mediaId : 0);
    insert.bindValue(":mediaVideo", mediaType == typeMessageMediaVideo ? mediaId : 0);
    insert.bindValue(":mediaType", message.value("mediaType").toLongLong());

    // qDebug() << "upgrade: action" << messages.value("actionType").toLongLong();
    // qDebug() << "upgrade: media" << messages.value("mediaType").toLongLong();
    // qDebug() << "upgrade: from: " << messages.value("fromId").toLongLong() << "to:" << messages.value("toId").toLongLong();

    if (!insert.exec()) {
        qDebug() << TAG << "failed to copy secret message" << insert.lastError();
        return;
    }

    if (mediaType == typeMessageMediaPhoto) {
        // insert photo size
        // insert photo?

        QSqlQuery query(db);
        query.prepare("SELECT photoId, type, size, width, height, dcId, localId, secret, volumeId, localPath "
                "FROM photoSizes JOIN fileLocations ON photoSizes.fileLocationId = fileLocations.rowid "
                "WHERE photoId = :photoId");
        query.bindValue(":photoId", mediaId);
        if (!query.exec()) {
            qCritical() << "upgrade: could not get photo sizes for attachment" << query.lastError();
            return;
        }
        QSqlQuery insert(newDb);

        while (query.next()) {
            qint64 pid      = query.value("photoId").toLongLong();
            QString type    = query.value("type").toString();
            qint64 size     = query.value("size").toLongLong();
            qint64 w        = query.value("width").toLongLong();
            qint64 h        = query.value("height").toLongLong();
            // qint64 localId  = query.value("localId").toLongLong();
            qint64 secret   = query.value("secret").toLongLong();
            qint64 dcId     = query.value("dcId").toLongLong();
            qint64 volumeId = query.value("volumeId").toLongLong();

            const QString oldPath = query.value("localPath").toString();
            qDebug() << TAG << "found attachment:" << oldPath;

            insert.prepare("INSERT INTO PhotoSizes (pid, type, size, w, h, "
                    "locationLocalId, locationSecret, locationDcId, locationVolumeId) "
                    "VALUES (:pid, :type, :size, :w, :h, :localId, :secret, :dcId, :volumeId)");

            insert.bindValue(":pid", pid);
            insert.bindValue(":type", type);
            insert.bindValue(":size", size);
            insert.bindValue(":w", w);
            insert.bindValue(":h", h);

            // WARNING: Turns out, old library did not store these values for secret chats...
            // so now exploiting TelegramQML to store elsewhere the absolute paths for us.
            QString pathFmt("`%1.jpg`");
            insert.bindValue(":localId", pathFmt.arg(oldPath));
            // insert.bindValue(":localId", localId);
            insert.bindValue(":secret", secret);
            insert.bindValue(":dcId", dcId);
            insert.bindValue(":volumeId", volumeId);
            if (!insert.exec()) {
                qCritical() << "upgrade: could not insert photo size" << insert.lastError();
                return;
            }

            // copy photo file with appropriate name
            // oldPath -> newPath
        }
    } else if (mediaType == typeMessageMediaVideo) {
        // insert video
        // copy video file
    }
}

inline void UpgradeV2::copySecretMessages(qint64 peer, QSqlDatabase &newDb) {
    QSqlQuery messages(db);
    messages.prepare("SELECT id, toId, fromId, unread, out, date, fwdFromId, fwdDate, text as message, mediaId, mediaType, "
            "(SELECT type FROM messageActions WHERE messageId = id) AS actionType, "
            "(SELECT type FROM users WHERE users.id = toId) as toPeerType "
            "FROM messages WHERE dialogId = :dialogId");
    qDebug() << TAG << "peer is: " << peer;
    messages.bindValue(":dialogId", peer);
    if (!messages.exec()) {
        qDebug() << TAG << "failed to get messages for secret chat" << peer << messages.lastError();
        return;
    }

    while (messages.next()) {
        const QSqlRecord &message = messages.record();

        copySecretMessage(peer, message, newDb);
    }
}

inline void UpgradeV2::copySecretChat(const QSqlRecord &record, QSqlDatabase &newDb) {
    // copying into dialogs may be unnecessary, TelegramQML refreshes 
    // secret chats from the secrets file, and the db doesn't enforce relations

    qint64 peer = record.value("id").toLongLong();
    qint64 peerType = 0L;
    qint64 topMessage = 0L;
    qint64 unreadCount = record.value("unreadCount").toLongLong();
    bool encrypted = true;

    QSqlQuery insert(newDb);
    insert.prepare("INSERT INTO Dialogs (peer, peerType, topMessage, unreadCount, encrypted) "
            "VALUES (:peer, :peerType, :topMessage, :unreadCount, :encrypted)");
    insert.bindValue(":peer", peer);
    insert.bindValue(":peerType", peerType);
    insert.bindValue(":topMessage", topMessage);
    insert.bindValue(":unreadCount", unreadCount);
    insert.bindValue(":encrypted", encrypted);

    if (!insert.exec()) {
        qDebug() << TAG << "failed to insert secret chat to dialogs" << insert.lastError();
    } else {
        qDebug() << TAG << "inserted secret chat" << peer << topMessage << unreadCount;

        copySecretMessages(peer, newDb);
    }
}

void UpgradeV2::copySecretChats() {

    db = QSqlDatabase::addDatabase("QSQLITE", "upgrade");
    db.setDatabaseName(databaseFilePath);
    db.open();

    QSqlDatabase newDb = QSqlDatabase::addDatabase("QSQLITE", "upgrade_new");
    newDb.setDatabaseName(newDatabasePath);
    newDb.open();

    QSqlQuery secretChats(db);
    secretChats.prepare("SELECT id, unreadCount FROM dialogs WHERE isSecret = 1");
    if (!secretChats.exec()) {
        qCritical() << TAG << "failed to get secret chats" << secretChats.lastError();
        return;
    }

    while (secretChats.next()) {
        const QSqlRecord &record = secretChats.record();
        copySecretChat(record, newDb);
    }

    db.close();
    newDb.close();
}

void UpgradeV2::renameConfigDirectory() {
    const QString & newConfigPhonePath = configPath + "/" + phone;
    QDir dir;
    dir.rename(configPhonePath, newConfigPhonePath);
}

void UpgradeV2::insertProfile() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "upgrade_profiles");
    db.setDatabaseName(newProfilesPath);
    db.open();

    QSqlQuery query(db);
    // profile 'AA' name comes from Cutegram source. unrelevant as long as not used in UI.
    query.prepare("INSERT OR REPLACE INTO Profiles VALUES (:phone, 'AA', '', 0)");
    query.bindValue(":phone", phone);
    if (!query.exec()) {
        qCritical() << TAG << "failed to insert profile" << query.lastError();
    } else {
        qDebug() << TAG << "profile inserted";
    }
    db.close();
}

void UpgradeV2::deleteFiles() {
    QFile::remove(configFilePath);
    QFile::remove(databaseFilePath);
}
