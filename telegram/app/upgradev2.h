#pragma once

#include <QDir>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlRecord>

#include "telegramqml_macros.h"

class UpgradeV2 : public QObject
{
    Q_OBJECT

public:
    UpgradeV2(QObject *parent = 0);
    ~UpgradeV2();

    void upgrade();

    const qint64 typePeerChat = 0xbad0e5bb;

    const qint64 typeMessageActionEmpty = 0xb6aef7b0;

    const qint64 typeMessageMediaVideo = 0xa2d24290;
    const qint64 typeMessageMediaPhoto = 0xc8c45a2a;
    const qint64 typeMessageMediaDocument = 0x2fda2204;

private:
    void getPhoneNumber();
    void setUpPhonePaths();
    void copyFromResource(QString resource, QString path);
    void copyDatabaseFiles();
    void createConfig();

    void copySecretChats();
    void copySecretChat(const QSqlRecord &record, QSqlDatabase &newDb);
    void copySecretMessages(qint64 peer, QSqlDatabase &newDb);
    void copySecretMessage(qint64 peer, const QSqlRecord &message, QSqlDatabase &newDb);
    void copySecretPhoto(qint64 peer, qint64 mediaId, QSqlDatabase &newDb);
    void copySecretVideo(qint64 peer, qint64 mediaId, QSqlDatabase &newDb);
    void copySecretDocument(qint64 peer, qint64 mediaId, QSqlDatabase &newDb);

    void renameConfigDirectory();
    void insertProfile();
    void deleteFiles();

private:
    const QString TAG = "UpgradeV2";

    QString phone;
    QString configPath;
    QString cachePath;
    QString configPhonePath;
    QString cachePhonePath;

    QString configFilePath;
    QString databaseFilePath;

    QString newProfilesPath;
    QString newUserdataPath;
    QString newDatabasePath;

    QDir config;

    qint64 localId;

    QSqlDatabase db;
};
