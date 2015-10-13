#ifndef PUSH_HELPER_H
#define PUSH_HELPER_H

#include <QObject>
#include <QString>
#include <QJsonObject>
#include <string>

#include "config.h"
#include "pushclient.h"

// See: https://core.telegram.org/api/push-updates

class PushHelper : public QObject {
    Q_OBJECT

public:
    PushHelper(QString appId, QString infile, QString outfile, QObject *parent = 0);
    ~PushHelper();
    void process();

Q_SIGNALS:
    void done();

public Q_SLOTS:
    void notificationDismissed();

protected:
    QJsonObject readPushMessage(const QString &filename);
    void writePostalMessage(const QJsonObject &postalMessage, const QString &filename);
    void dismissNotification(const QString &tag);
    QJsonObject pushToPostalMessage(const QJsonObject &push, QString &tag);

    QString getPrimaryPhoneNumber();
    QString getAvatar(qint64 peerId);

private:
    PushClient mPushClient;
    QString mInfile;
    QString mOutfile;

    QJsonObject mPostalMessage;
};

#endif
