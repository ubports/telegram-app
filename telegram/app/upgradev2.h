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
    void copySecretPhoto(qint64 peer, bool out, qint64 mediaId, QSqlDatabase &newDb);
    void copySecretVideo(qint64 peer, bool out, qint64 mediaId, QSqlDatabase &newDb);
    void copySecretDocument(qint64 peer, bool out, qint64 mediaId, QSqlDatabase &newDb);

    void renameConfigDirectory();
    void insertProfile();
    void deleteFiles();

private:
    const QString TAG = "UpgradeV2";
    const bool DEBUG = false;

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
