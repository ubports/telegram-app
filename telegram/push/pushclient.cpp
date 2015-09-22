/*
Copyright 2014 Canonical Ltd.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License, version 3
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this program.  If not, see
<http://www.gnu.org/licenses/>.
*/

#include "pushclient.h"
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusMessage>
#include <QtDBus/QDBusPendingCall>
#include <QtDBus/QDBusPendingReply>
#include <QTimer>

#define PUSH_SERVICE "com.ubuntu.PushNotifications"
#define POSTAL_SERVICE "com.ubuntu.Postal"
#define PUSH_PATH "/com/ubuntu/PushNotifications"
#define POSTAL_PATH "/com/ubuntu/Postal"
#define PUSH_IFACE "com.ubuntu.PushNotifications"
#define POSTAL_IFACE "com.ubuntu.Postal"

PushClient::PushClient(QObject *parent) : QObject(parent) {
}

void PushClient::registerApp(const QString &appId) {
    pkgname = appId.split("_").at(0);
    pkgname = pkgname.replace(".","_2e").replace("-","_2d");
    Q_EMIT appIdChanged(appId);
}

QString PushClient::getAppId() {
    return appId;
}

QString PushClient::getToken() {
    return token;
}

void PushClient::emitError() {
    Q_EMIT error(status);
}

void PushClient::clearPersistent(const QStringList &tags) {
    QDBusConnection bus = QDBusConnection::sessionBus();
    QString path(POSTAL_PATH);
    path += "/" + pkgname;
    QDBusMessage message = QDBusMessage::createMethodCall(
                POSTAL_SERVICE, path, POSTAL_IFACE, "ClearPersistent"); // no-i18n
    message << this->appId;
    for (int i = 0; i < tags.size(); ++i) {
		message << tags.at(i);
	}
    bus.send(message);

    QDBusPendingCall pcall = bus.asyncCall(message);
    QDBusPendingCallWatcher *watcher = new QDBusPendingCallWatcher(pcall, this);
    connect(watcher, SIGNAL(finished(QDBusPendingCallWatcher*)),
                  this, SLOT(clearPersistentFinished(QDBusPendingCallWatcher*)));
}

void PushClient::clearPersistentFinished(QDBusPendingCallWatcher *watcher) {
    QDBusPendingReply<void> reply = *watcher;

    if (reply.isError()) {
        Q_EMIT error(reply.error().message());
    } else {
        Q_EMIT persistentCleared();
    }
    watcher->deleteLater();
}

void PushClient::setCount(int count) {
    QDBusConnection bus = QDBusConnection::sessionBus();
    QString path(POSTAL_PATH);
    bool visible = count != 0;
    counter = count;
    path += "/" + pkgname;
    QDBusMessage message = QDBusMessage::createMethodCall(POSTAL_SERVICE, path, POSTAL_IFACE, "setCounter"); // no-i18n
    message << this->appId << count << visible;
    QDBusPendingCall pcall = bus.asyncCall(message);
    QDBusPendingCallWatcher *watcher = new QDBusPendingCallWatcher(pcall, this);
    connect(watcher, SIGNAL(finished(QDBusPendingCallWatcher*)),
                  this, SLOT(setCounterFinished(QDBusPendingCallWatcher*)));
}

void PushClient::setCounterFinished(QDBusPendingCallWatcher *watcher) {
    QDBusPendingReply<void> reply = *watcher;
    if (reply.isError()) {
        Q_EMIT error(reply.error().message());
    }
    else {
        Q_EMIT countChanged(counter);
    }
    watcher->deleteLater();
}

int PushClient::getCount() {
    return counter;
}

void PushClient::setAppId(const QString &appId) {
    this->appId = appId;
}
