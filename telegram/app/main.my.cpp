/*
 * Copyright 2014 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtGui/QGuiApplication>
#include <QtQml/QtQml>
#include <QtQml/QQmlDebuggingEnabler>
#include <QtQuick/QQuickView>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QDir>
#include <QDateTime>
#include <QDebug>
#include <QLibrary>
#include <QLoggingCategory>
#include <QString>

//static QQmlDebuggingEnabler debuggingEnabler(false);

bool debugLog = QFile("/home/phablet/.config/com.ubuntu.telegram/.debug").exists();

void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    const char* time = QDateTime::currentDateTimeUtc().toString("HH:mm:ss").toStdString().c_str();

    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
    case QtDebugMsg:
        if (debugLog) {
            fprintf(stderr, "DEBUG %s %s %s\n", time, context.category, localMsg.constData());
        }
        break;
    case QtWarningMsg:
        fprintf(stderr, "WARN %s %s %s in %s\n", time, context.category,
                localMsg.constData(), context.function);
        break;
    case QtCriticalMsg:
        fprintf(stderr, "CRIT %s %s %s in\n%s:%u, %s\n", time, context.category,
                localMsg.constData(), context.file, context.line, context.function);
        break;
    case QtFatalMsg:
        fprintf(stderr, "FATAL %s %s %s in\n%s:%u, %s\n", time, context.category,
                localMsg.constData(), context.file, context.line, context.function);
        abort();
    }
}

int main(int argc, char *argv[]) {
    qInstallMessageHandler(messageHandler);
    QGuiApplication app(argc, argv);
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);

    QCommandLineParser parser;
    parser.setSingleDashWordOptionMode(QCommandLineParser::ParseAsLongOptions);
    QCommandLineOption testabilityOption(
            "testability",
            "Load the testability driver.");
    parser.addOption(testabilityOption);
    parser.addPositionalArgument(
            "uri",
            "Uri to allow launching chat window directly, etc.");
    parser.addHelpOption();

    parser.process(app);

    if (parser.isSet(testabilityOption) || getenv("QT_LOAD_TESTABILITY")) {
        QLibrary testLib(QLatin1String("qttestability"));
        if (testLib.load()) {
            typedef void (*TasInitialize)(void);
            TasInitialize initFunction = (TasInitialize)testLib.resolve("qt_testability_init");
            if (initFunction) {
                initFunction();
            } else {
                qCritical("Could not resovle qttestabiltiy library!");
            }
        } else {
            qCritical("Failed to load qttestability!");
        }
    }

    view.engine()->rootContext()->setContextProperty("uriArgs",
            parser.positionalArguments());
/*
    QString qmlFile;
    const QString filePath = QLatin1String("telegram.qml");
    QStringList paths = QStandardPaths::standardLocations(
            QStandardPaths::DataLocation);
    paths.prepend(QDir::currentPath());
    paths.prepend(QCoreApplication::applicationDirPath());
    Q_FOREACH(const QString &path, paths) {
        QString p = path + QLatin1Char('/') + filePath;
        if (QFile::exists(p)) {
            qmlFile = p;
            break;
        }
    }

    if (qmlFile.isEmpty()) {
        qFatal("Could not find %s!", qPrintable(filePath));
    }
*/
    QGuiApplication::setApplicationName("Telegram");
    QGuiApplication::setOrganizationName("com.ubuntu.telegram");

    const QString cachePath = QStandardPaths::standardLocations(
            QStandardPaths::CacheLocation).first();
    QDir cache(cachePath);
    if (!cache.exists()) {
        qDebug() << "creating cache dir: " << cache.absolutePath();
        cache.mkpath(cache.absolutePath());
    }

//    qDebug() << "launching " << qmlFile;
    //view.setSource(QUrl::fromLocalFile(qmlFile));
    view.setSource(QUrl(QStringLiteral("qrc:///qml/telegram.qml")));
    view.show();

    return app.exec();
}
