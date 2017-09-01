#include <stdlib.h>

#include <QDir>
#include <QFileInfo>
#include <QMainWindow>
#include <QPalette>
#include <QNetworkProxy>
#include <QCommandLineParser>

#include <telegram.h>

#include "asemantools/asemanapplication.h"
#include "telegram.h"
#include "i18n.h"
#include "telegramqmlinitializer.h"

int main(int argc, char *argv[])
{
    // set pattern for loggin messages adding date to message text
    qSetMessagePattern("[%{time yyyyMMdd h:mm:ss.zzz t} %{if-category}%{category}: %{endif}%{message}");

    setlocale(LC_ALL, "");
    textdomain(GETTEXT_DOMAIN.toStdString().c_str());

    TelegramQmlInitializer::init("TelegramQML");

    AsemanApplication app(argc, argv);
    app.setApplicationName("Telegram");
    app.setApplicationDisplayName("Telegram");
    app.setApplicationVersion("2.4.42.0");
    app.setOrganizationDomain("com.ubuntu.telegram");
    app.setOrganizationName("com.ubuntu.telegram");
    app.setWindowIcon(QIcon(":/qml/icons/telegram.png"));
    app.setQuitOnLastWindowClosed(false);

    QDir appPath = QDir(QCoreApplication::applicationDirPath());
    appPath.cdUp();
    QString libsPath = appPath.absolutePath();
    setenv("TN_UTILDIR", libsPath.toStdString().c_str(), 1);

    QCommandLineOption verboseOption(QStringList() << "V" << "verbose",
            QCoreApplication::translate("main", "Verbose Mode."));
    QCommandLineOption forceOption(QStringList() << "f" << "force",
            QCoreApplication::translate("main", "Force to run multiple instance of Cutegram."));
    QCommandLineOption dcIdOption(QStringList() << "dc-id",
            QCoreApplication::translate("main", "Sets default DC ID to <id>"), "id");
    QCommandLineOption ipAdrsOption(QStringList() << "ip-address",
            QCoreApplication::translate("main", "Sets default IP Address to <ip>"), "ip");

    QCommandLineParser parser;
    // TRANSLATORS: Application description.
    parser.setApplicationDescription("Telegram for Ubuntu is a freen and open source Telegram client.");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addOption(forceOption);
    parser.addOption(verboseOption);
    parser.addOption(dcIdOption);
    parser.addOption(ipAdrsOption);
    parser.process(app);

    if(!parser.isSet(verboseOption))
        qputenv("QT_LOGGING_RULES", "tg.*=false");
    else
        qputenv("QT_LOGGING_RULES", "tg.core.settings=false\n"
                                    "tg.core.outboundpkt=false\n"
                                    "tg.core.inboundpkt=false");

    if(app.readSetting("Proxy/enable",false).toBool())
    {
        const int type = app.readSetting("Proxy/type",QNetworkProxy::HttpProxy).toInt();
        const QString host = app.readSetting("Proxy/host").toString();
        const quint16 port = app.readSetting("Proxy/port").toInt();
        const QString user = app.readSetting("Proxy/user").toString();
        const QString pass = app.readSetting("Proxy/pass").toString();

        QNetworkProxy proxy;
        proxy.setType( static_cast<QNetworkProxy::ProxyType>(type) );
        proxy.setHostName(host);
        proxy.setPort(port);
        proxy.setUser(user);
        proxy.setPassword(pass);
        QNetworkProxy::setApplicationProxy(proxy);
    }

#ifdef Q_OS_MAC
    QPalette palette;
    palette.setColor(QPalette::Highlight, "#0d80ec");
    palette.setColor(QPalette::HighlightedText, "#ffffff");
    app.setPalette(palette);
#endif

#ifdef DESKTOP_DEVICE
    if( !parser.isSet(forceOption) && app.isRunning() )
    {
        app.sendMessage("show");
        return 0;
    }
#endif

    Cutegram cutegram;
    if (parser.isSet(dcIdOption))
        cutegram.setDefaultHostDcId(parser.value(dcIdOption).toInt());
    if (parser.isSet(ipAdrsOption))
        cutegram.setDefaultHostAddress(parser.value(ipAdrsOption));
    if (parser.positionalArguments().size() > 0) {
        cutegram.setArgs(parser.positionalArguments());
    }
    cutegram.start( parser.isSet(forceOption) );

#ifdef DESKTOP_DEVICE
    QObject::connect( &app, SIGNAL(messageReceived(QString)), &cutegram, SLOT(incomingAppMessage(QString)) );
    QObject::connect( &app, SIGNAL(clickedOnDock())         , &cutegram, SLOT(incomingAppMessage())        );
#endif

    return app.exec();
}
