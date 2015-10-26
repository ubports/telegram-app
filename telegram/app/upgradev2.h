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

    void copySecretMessage(qint64 peer, const QSqlRecord &message, QSqlDatabase &newDb);
    void copySecretMessages(qint64 peer, QSqlDatabase &newDb);
    void copySecretChat(const QSqlRecord &record, QSqlDatabase &newDb);
    void copySecretChats();

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

    QSqlDatabase db;
};
