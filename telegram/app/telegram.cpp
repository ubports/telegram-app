/*
    Copyright (C) 2014 Aseman
    http://aseman.co

    This project is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This project is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define UNITY_LIGHT (p->desktop->desktopSession()==AsemanDesktopTools::Unity && !p->desktop->titleBarIsDark())
#define UNITY_ICON_PATH(NUM) "/tmp/aseman-telegram-client-trayicon" + QString::number(NUM) + (lowLevelDarkSystemTray()?"-dark":"-light") + ".png"
#define SYSTRAY_ICON (lowLevelDarkSystemTray()?":/qml/Cutegram/files/systray-dark.png":":/qml/Cutegram/files/systray.png")

#include "telegram.h"
#include "asemantools/asemanquickview.h"
#include "asemantools/asemancalendarconverter.h"
#include "asemantools/asemandesktoptools.h"
#include "asemantools/asemandevices.h"
#include "asemantools/asemanapplication.h"
#include "emoticonsmodel.h"
#include "stickerfilemanager.h"
#include "themeitem.h"
#include "textemojiwrapper.h"
#include "emojis.h"
#include "unitysystemtray.h"
#include "cutegramenums.h"
#include <userdata.h>

#include <QPointer>
#include <QQmlContext>
#include <QQmlEngine>
#include <QtQml>
#include <QDebug>
#include <QImageWriter>
#include <QTextDocument>
#include <QImageReader>
#include <QSystemTrayIcon>
#include <QGuiApplication>
#include <QMenu>
#include <QAction>
#include <QPainter>
#include <QPainterPath>
#include <QDesktopServices>
#include <QMimeDatabase>

#include <telegramqml.h>

#include "i18n.h"

#ifdef Q_OS_WIN
#include <QtWin>
#endif

class CutegramPrivate
{
public:
    QString defaultHostAddress;
    int defaultHostPort;
    int defaultHostDcId;
    int appId;
    QString appHash;

    QStringList args;

    QPointer<AsemanQuickView> viewer;
    bool close_blocker;
    int sysTrayCounter;
    int startupOption;
    int statusIconStyle;
    bool notification;
    bool minimumDialogs;
    bool showLastMessage;
    bool darkSystemTray;
    bool closingState;
    bool cutegramSubscribe;
    bool autoEmojis;
    bool sendWithEnter;
    bool promptForPush;
    bool pushNotifications;
    QString pushNumber;
    bool smoothScroll;

    QTextDocument *doc;

    QSystemTrayIcon *sysTray;
    UnitySystemTray *unityTray;

    AsemanDesktopTools *desktop;

    QTranslator *translator;
    QString translationsPath;
    QString themesPath;

    QHash<QString,QVariant> languages;
    QHash<QString,QLocale> locales;
    QString language;

    QString background;
    QString messageAudio;
    QString masterColor;
    QFont font;

    QPalette mainPalette;
    QColor highlightColor;

    QMimeDatabase mdb;

    QStringList themes;
    QString theme;
    QPointer<QQmlComponent> currentThemeComponent;
    QPointer<ThemeItem> currentTheme;

    QStringList searchEngines;
    QString searchEngine;
};

Cutegram::Cutegram(QObject *parent) :
    QObject(parent)
{
    QFont default_font;
#ifdef Q_OS_MAC
    default_font.setPointSize(9);
#endif
#ifdef Q_OS_WIN
    default_font.setPointSize(10);
#endif
    p = new CutegramPrivate;
    p->defaultHostAddress = "149.154.167.91";
    p->defaultHostPort = 443;
    p->defaultHostDcId = 4;
    p->appId = 12433;
    p->appHash = "c68fd5e560aa84dd4b6ad6f489164790";
    p->doc = new QTextDocument(this);
    p->desktop = new AsemanDesktopTools(this);
    p->sysTray = 0;
    p->unityTray = 0;
    p->sysTrayCounter = 0;
    p->closingState = false;
    p->highlightColor = AsemanApplication::settings()->value("General/lastHighlightColor", p->mainPalette.highlight().color().name() ).toString();
    p->startupOption = AsemanApplication::settings()->value("General/startupOption", static_cast<int>(StartupAutomatic) ).toInt();
    p->statusIconStyle = AsemanApplication::settings()->value("General/statusIconStyle", static_cast<int>(StatusIconAutomatic) ).toInt();
    p->notification = AsemanApplication::settings()->value("General/notification", true ).toBool();
    p->minimumDialogs = AsemanApplication::settings()->value("General/minimumDialogs", false ).toBool();
    p->showLastMessage = AsemanApplication::settings()->value("General/showLastMessage", false ).toBool();
    p->cutegramSubscribe = AsemanApplication::settings()->value("General/cutegramSubscribe", true ).toBool();
    p->autoEmojis = AsemanApplication::settings()->value("General/autoEmojis", true ).toBool();
    p->sendWithEnter = AsemanApplication::settings()->value("General/sendWithEnter", true ).toBool();
    p->promptForPush = AsemanApplication::settings()->value("General/promptForPush", true ).toBool();
    p->pushNotifications = AsemanApplication::settings()->value("General/pushNotifications", true ).toBool();
    p->pushNumber = AsemanApplication::settings()->value("General/pushNumber").toString();
    p->smoothScroll = AsemanApplication::settings()->value("General/smoothScroll", true ).toBool();
    p->darkSystemTray = AsemanApplication::settings()->value("General/darkSystemTray", UNITY_LIGHT ).toBool();
    p->background = AsemanApplication::settings()->value("General/background").toString();
    p->masterColor = AsemanApplication::settings()->value("General/masterColor").toString();
    p->messageAudio = AsemanApplication::settings()->value("General/messageAudio","files/new_msg.ogg").toString();
    p->font = AsemanApplication::settings()->value("General/font", default_font).value<QFont>();
    p->translator = new QTranslator(this);
    p->theme = AsemanApplication::settings()->value("General/theme","Abrisham.qml").toString();
    p->searchEngine = AsemanApplication::settings()->value("General/searchEngine","https://duckduckgo.com/?q=").toString();

    p->searchEngines = QStringList() << "https://duckduckgo.com/?q=" << "https://google.com/?q=" << "https://bing.com/?q=";

#ifdef Q_OS_ANDROID
    p->close_blocker = true;
    p->translationsPath = "assets:/files/translations";
    p->themesPath = "assets:/themes";
#else
    p->close_blocker = false;
    p->translationsPath = AsemanDevices::resourcePath() + "/files/translations/";
    p->themesPath = AsemanDevices::resourcePath() + "/themes/";
#endif

    p->themes = QDir(p->themesPath).entryList( QStringList()<<"*.qml" ,QDir::Files, QDir::Name);

    QDir().mkpath(personalStickerDirectory());

    qmlRegisterType<CutegramEnums>("Cutegram", 1, 0, "CutegramEnums");
    qmlRegisterType<ThemeItem>("Cutegram", 1, 0, "CutegramTheme");
    qmlRegisterType<TextEmojiWrapper>("Cutegram", 1, 0, "TextEmojiWrapper");
    qmlRegisterType<Emojis>("Cutegram", 1, 0, "Emojis");
    qmlRegisterType<EmoticonsModel>("Cutegram", 1, 0, "EmoticonsModel");
    qmlRegisterType<StickerFileManager>("Cutegram", 1, 0, "StickerFileManager");

}

QSize Cutegram::imageSize(const QString &pt)
{
    QString path = pt;
    if(path.left(AsemanDevices::localFilesPrePath().length()) == AsemanDevices::localFilesPrePath())
        path = path.mid(AsemanDevices::localFilesPrePath().length());
    if(path.isEmpty())
        return QSize();

    QImage img(path);
    return img.size();
}

bool Cutegram::fileIsImage(const QString &pt)
{
    QString path = pt;
    if(path.left(AsemanDevices::localFilesPrePath().length()) == AsemanDevices::localFilesPrePath())
        path = path.mid(AsemanDevices::localFilesPrePath().length());
    if(path.isEmpty())
        return false;

    return p->mdb.mimeTypeForFile(path).name().toLower().contains("image");
}

bool Cutegram::fileIsAudio(const QString &pt)
{
    QString path = pt;
    if(path.left(AsemanDevices::localFilesPrePath().length()) == AsemanDevices::localFilesPrePath())
        path = path.mid(AsemanDevices::localFilesPrePath().length());
    if(path.isEmpty())
        return false;

    return p->mdb.mimeTypeForFile(path).name().toLower().contains("audio");
}

qreal Cutegram::htmlWidth(const QString &txt)
{
    p->doc->setHtml(txt);
    return p->doc->size().width() + 10;
}

void Cutegram::deleteFile(const QString &pt)
{
    QString path = pt;
    if(path.left(AsemanDevices::localFilesPrePath().length()) == AsemanDevices::localFilesPrePath())
        path = path.mid(AsemanDevices::localFilesPrePath().length());
    if(path.isEmpty())
        return;

    QFile::remove(path);
}

QString Cutegram::storeMessage(const QString &msg)
{
    const QString &path = AsemanApplication::tempPath() + "/" + QDateTime::currentDateTime().toString("ddd MMMM d yy - hh mm") + ".txt";
    QFile file(path);
    if(!file.open(QFile::WriteOnly))
        return QString();

    file.write(msg.toUtf8());
    file.close();

    return path;
}

QString Cutegram::createTemporaryFile(const QString &phone, const QString &prefix, const QString &ext)
{
    // Create temporary file, e.g. recorded audio
    QDir dataLocation(cacheDirectory() + "/" + phone + "/temp/" + prefix);
    if (!dataLocation.exists()) {
        dataLocation.mkpath(".");
    }
    QTemporaryFile outputFile(dataLocation.absoluteFilePath("XXXXXX%1").arg(ext));
    outputFile.setAutoRemove(false);
    outputFile.open();
    outputFile.close();

    return QUrl::fromLocalFile(outputFile.fileName()).toString();
}

void Cutegram::deleteTemporaryFiles(const QString &phone, const QString &prefix)
{
    // Delete temporary file
    QDir dir(cacheDirectory() + "/" + phone + "/temp/" + prefix);
    qDebug() << "deleting" << dir.absolutePath();
    dir.removeRecursively();
}

QString Cutegram::getTimeString(const QDateTime &dt)
{
    if( QDate::currentDate() == dt.date() ) // TODAY
        // TRANSLATORS: Format string: time.
        return dt.toString(tr("HH:mm"));
    else
    if( dt.date().daysTo(QDate::currentDate()) < 7 )
        // TRANSLATORS: Format string: day and time (ex. Tue 21:30)
        return dt.toString(tr("ddd HH:mm"));
    else
    if( dt.date().year() == QDate::currentDate().year() )
        // TRANSLATORS: Format string: day and month (ex. 28 Feb)
        return dt.toString(tr("dd MMM"));
    else
        // TRANSLATORS: Format string: full date
        return dt.toString(tr("dd MMM yy"));
}

int Cutegram::showMenu(const QStringList &actions, QPoint point)
{
    if( point.isNull() )
        point = QCursor::pos();

    QMenu menu;
    QList<QAction*> pointers;
    for( int i=0; i<actions.count(); i++ )
        pointers << menu.addAction(actions.value(i));

    QAction *res = menu.exec(point);
    return pointers.indexOf(res);
}

void Cutegram::setDefaultHostAddress(const QString &host)
{
    if(p->defaultHostAddress == host)
        return;

    p->defaultHostAddress = host;
    emit defaultHostAddressChanged();
}

QString Cutegram::defaultHostAddress() const
{
    return p->defaultHostAddress;
}

void Cutegram::setDefaultHostPort(int port)
{
    if(p->defaultHostPort == port)
        return;

    p->defaultHostPort = port;
    emit defaultHostPortChanged();
}

int Cutegram::defaultHostPort() const
{
    return p->defaultHostPort;
}

void Cutegram::setDefaultHostDcId(int dcId)
{
    if(p->defaultHostDcId == dcId)
        return;

    p->defaultHostDcId = dcId;
    emit defaultHostDcIdChanged();
}

int Cutegram::defaultHostDcId() const
{
    return p->defaultHostDcId;
}

void Cutegram::setAppId(int appId)
{
    if(p->appId == appId)
        return;

    p->appId = appId;
    emit appIdChanged();
}

int Cutegram::appId() const
{
    return p->appId;
}

void Cutegram::setAppHash(const QString &appHash)
{
    if(p->appHash == appHash)
        return;

    p->appHash = appHash;
    emit appHashChanged();
}

void Cutegram::setArgs(const QStringList &args)
{
    p->args = args;
    emit argsChanged();
}

QStringList Cutegram::getArgs() const
{
    return p->args;
}

bool Cutegram::hasArgs() const
{
    return p->args.count() > 0;
}

QString Cutegram::appHash() const
{
    return p->appHash;
}

void Cutegram::start(bool forceVisible)
{
    if( p->viewer )
        return;

    p->viewer = new AsemanQuickView( AsemanQuickView::AllExceptLogger );
    p->viewer->engine()->rootContext()->setContextProperty( "Cutegram", this );
    init_theme();


    p->viewer->setSource(QUrl(QStringLiteral("qrc:/qml/telegram.qml")));
#ifdef Q_OS_WIN
    QtWin::extendFrameIntoClientArea(p->viewer,-1,-1,-1,-1);
#endif

    switch(startupOption())
    {
    case StartupAutomatic:
        if(AsemanApplication::settings()->value("General/lastWindowState",true).toBool())
            p->viewer->show();
        break;

    case StartupVisible:
        p->viewer->show();
        break;

    case StartupHide:
        break;
    }

    if(forceVisible)
        p->viewer->show();

    init_systray();
}

void Cutegram::logout(const QString &phone)
{
    QDir cache = QDir(QDir::homePath() + "/.cache/" + QCoreApplication::organizationDomain() + "/" + phone);
    QDir config = QDir(QDir::homePath() + "/.config/" + QCoreApplication::organizationDomain() + "/" + phone);

    qDebug() << "deleting" << cache.absolutePath();
    qDebug() << "deleting" << config.absolutePath();

    cache.removeRecursively();
    config.removeRecursively();

    emit loggedOut(phone);
}

void Cutegram::close()
{
    p->close_blocker = false;
    p->viewer->close();
}

void Cutegram::quit()
{
    p->closingState = true;
    emit closingStateChanged();

    QGuiApplication::quit();
}

void Cutegram::contact()
{
    QDesktopServices::openUrl(QUrl("http://aseman.co/en/contact-us/cutegram/"));
}

void Cutegram::aboutAseman()
{
    emit aboutAsemanRequest();
    active();
}

void Cutegram::about()
{
    p->viewer->root()->setProperty("aboutMode", true);
    active();
}

void Cutegram::configure()
{
    emit configureRequest();
    active();
}

void Cutegram::incomingAppMessage(const QString &msg)
{
    if( msg == "show" )
    {
        active();
    }
}

void Cutegram::active()
{
#ifdef Q_OS_WIN
    QtWin::extendFrameIntoClientArea(p->viewer,-1,-1,-1,-1);
#endif
    p->viewer->show();
    p->viewer->requestActivate();
}

void Cutegram::addToPersonal(const QString &src)
{
    QString file = src;
    if( file.left(AsemanDevices::localFilesPrePath().length()) == AsemanDevices::localFilesPrePath() )
        file = file.mid(AsemanDevices::localFilesPrePath().length());

    QFile::copy(file, personalStickerDirectory() + "/" + QFileInfo(src).baseName() + ".webp");
}

void Cutegram::setSysTrayCounter(int count, bool force)
{
    if( count == p->sysTrayCounter && !force )
        return;

    const QImage & img = generateIcon( QImage(SYSTRAY_ICON), count );
    if( p->sysTray )
    {
        p->sysTray->setIcon( QPixmap::fromImage(img) );
    }
    else
    if( p->unityTray )
    {
        QString path = UNITY_ICON_PATH(count);
        QFile::remove(path);
        QImageWriter writer(path);
        writer.write(img);
        p->unityTray->setIcon(path);
    }

    p->sysTrayCounter = count;
    emit sysTrayCounterChanged();
}

int Cutegram::sysTrayCounter() const
{
    return p->sysTrayCounter;
}

bool Cutegram::eventFilter(QObject *o, QEvent *e)
{
    if( o == p->viewer )
    {
        switch( static_cast<int>(e->type()) )
        {
        case QEvent::Close:
            if( p->close_blocker )
            {
                static_cast<QCloseEvent*>(e)->ignore();
                emit backRequest();
            }
            else
            {
                static_cast<QCloseEvent*>(e)->accept();
            }

            return false;
            break;
        }
    }

    return QObject::eventFilter(o,e);
}

void Cutegram::systray_action(QSystemTrayIcon::ActivationReason act)
{
    switch( static_cast<int>(act) )
    {
    case QSystemTrayIcon::Trigger:
        if( p->viewer->isVisible() && p->viewer->isActive() )
            p->viewer->hide();
        else
        {
            active();
        }
        break;
    }
}

void Cutegram::init_systray()
{
    if( p->desktop->desktopSession() == AsemanDesktopTools::Unity || p->desktop->desktopSession() == AsemanDesktopTools::GnomeFallBack )
    {
        QFile::remove(UNITY_ICON_PATH(0));
        QFile::copy(SYSTRAY_ICON,UNITY_ICON_PATH(0));

        p->unityTray = new UnitySystemTray( QCoreApplication::applicationName(), UNITY_ICON_PATH(0) );
        if( !p->unityTray->pntr() )
            QGuiApplication::setQuitOnLastWindowClosed(true);

        // p->unityTray->addMenu( tr("Show"), this, "active" );
        // p->unityTray->addMenu( tr("Configure"), this, "configure" );
        // p->unityTray->addMenu( tr("Contact"), this, "contact" );
        // p->unityTray->addMenu( tr("About"), this, "about" );
        // p->unityTray->addMenu( tr("Quit"), this, "quit" );
    }
    if( !p->unityTray || !p->unityTray->pntr() )
    {
        p->sysTray = new QSystemTrayIcon( QIcon(SYSTRAY_ICON), this );
        p->sysTray->setContextMenu(contextMenu());
#if (QT_VERSION >= QT_VERSION_CHECK(5, 5, 0))
        p->sysTray->setToolTip(tr("Telegram"));
#endif
#ifndef Q_OS_MAC
        p->sysTray->show();
#endif

        connect( p->sysTray, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), SLOT(systray_action(QSystemTrayIcon::ActivationReason)) );
    }
}

QMenu *Cutegram::contextMenu()
{
    QMenu *menu = new QMenu();
    menu->move( QCursor::pos() );

    // menu->addAction( tr("Show"), this, SLOT(active()) );
    // menu->addSeparator();
    // menu->addAction( tr("Configure"), this, SLOT(configure()) );
    // menu->addAction( tr("Contact"), this, SLOT(contact()) );
    // menu->addSeparator();
    // menu->addAction( tr("About"), this, SLOT(about()) );
    // menu->addSeparator();
    // menu->addAction( tr("Exit"), this, SLOT(quit()) );

    return menu;
}

QImage Cutegram::generateIcon(const QImage &img, int count)
{
    QImage res = img;
    if( count == 0 )
        return img;

    QRect rct;
    rct.setX( img.width()/5 );
    rct.setWidth( 4*img.width()/5 );
    rct.setY( img.height()-rct.width() );
    rct.setHeight( rct.width() );

    QPainterPath path;
    path.addEllipse(rct);

    QPainter painter(&res);
    painter.setRenderHint( QPainter::Antialiasing , true );
    painter.fillPath( path, QColor("#ff0000") );
    painter.setPen("#333333");
    painter.drawPath( path );
    painter.setPen("#ffffff");
    painter.drawText( rct, Qt::AlignCenter | Qt::AlignHCenter, QString::number(count) );

    return res;
}

QStringList Cutegram::languages()
{
    QStringList res = p->languages.keys();
    res.sort();
    return res;
}

void Cutegram::setLanguage(const QString &lang)
{
    if( p->language == lang )
        return;

    QGuiApplication::removeTranslator(p->translator);
    p->translator->load(p->languages.value(lang).toString(),"languages");
    QGuiApplication::installTranslator(p->translator);
    p->language = lang;

    AsemanApplication::settings()->setValue("General/Language",lang);

    emit languageChanged();
    emit languageDirectionChanged();
}

QString Cutegram::language() const
{
    return p->language;
}

bool Cutegram::closingState() const
{
    return p->closingState;
}

void Cutegram::setStartupOption(int opt)
{
    if(opt == p->startupOption)
        return;

    p->startupOption = opt;
    AsemanApplication::settings()->setValue("General/startupOption", opt);
    emit startupOptionChanged();
}

int Cutegram::startupOption() const
{
    return p->startupOption;
}

void Cutegram::setNotification(bool stt)
{
    if(p->notification == stt)
        return;

    p->notification = stt;
    AsemanApplication::settings()->setValue("General/notification", stt);
    emit notificationChanged();
}

bool Cutegram::notification() const
{
    return p->notification;
}

void Cutegram::setMinimumDialogs(bool stt)
{
    if(p->minimumDialogs == stt)
        return;

    p->minimumDialogs = stt;
    AsemanApplication::settings()->setValue("General/minimumDialogs", stt);
    emit minimumDialogsChanged();
}

bool Cutegram::minimumDialogs() const
{
    return p->minimumDialogs;
}

void Cutegram::setShowLastMessage(bool stt)
{
    if(p->showLastMessage == stt)
        return;

    p->showLastMessage = stt;
    AsemanApplication::settings()->setValue("General/showLastMessage", stt);
    emit showLastMessageChanged();
}

bool Cutegram::showLastMessage() const
{
    return p->showLastMessage;
}

void Cutegram::setDarkSystemTray(bool stt)
{
    if(p->darkSystemTray == stt)
        return;

    p->darkSystemTray = stt;
    AsemanApplication::settings()->setValue("General/darkSystemTray", stt);

    setSysTrayCounter(sysTrayCounter(), true);
    emit darkSystemTrayChanged();
}

bool Cutegram::darkSystemTray() const
{
    return p->darkSystemTray;
}

void Cutegram::setSmoothScroll(bool stt)
{
    if(p->smoothScroll == stt)
        return;

    p->smoothScroll = stt;
    AsemanApplication::settings()->setValue("General/smoothScroll", stt);

    emit smoothScrollChanged();
}

bool Cutegram::smoothScroll() const
{
    return p->smoothScroll;
}

void Cutegram::setBackground(const QString &background)
{
    if(p->background == background)
        return;

    p->background = background;
    AsemanApplication::settings()->setValue("General/background", background);
    emit backgroundChanged();
}

QString Cutegram::background() const
{
    return p->background;
}

void Cutegram::setMessageAudio(const QString &file)
{
    if(p->messageAudio == file)
        return;

    p->messageAudio = file;
    AsemanApplication::settings()->setValue("General/messageAudio", file);
    emit messageAudioChanged();
}

QString Cutegram::messageAudio() const
{
    return p->messageAudio;
}

void Cutegram::setMasterColor(const QString &color)
{
    if(p->masterColor == color)
        return;

    p->masterColor = color;
    AsemanApplication::settings()->setValue("General/masterColor", color);

    emit masterColorChanged();
    emit highlightColorChanged();
}

QString Cutegram::masterColor() const
{
    return p->masterColor;
}

QColor Cutegram::highlightColor() const
{
    return p->masterColor.isEmpty()? p->highlightColor : QColor(p->masterColor);
}

void Cutegram::setHighlightColor(const QColor &color)
{
    if(p->highlightColor == color)
        return;

    p->highlightColor = color;
    AsemanApplication::settings()->setValue("General/lastHighlightColor", color.name());

    emit highlightColorChanged();
}

void Cutegram::setFont(const QFont &font)
{
    if(p->font == font)
        return;

    p->font = font;
    AsemanApplication::settings()->setValue("General/font", font);
    emit fontChanged();
}

QFont Cutegram::font() const
{
    return p->font;
}

void Cutegram::setAsemanSubscribe(bool stt)
{
    if(p->cutegramSubscribe == stt)
        return;

    p->cutegramSubscribe = stt;
    AsemanApplication::settings()->setValue("General/cutegramSubscribe", stt);

    emit cutegramSubscribeChanged();
}

bool Cutegram::cutegramSubscribe() const
{
    return p->cutegramSubscribe;
}

void Cutegram::setAutoEmojis(bool stt)
{
    if(p->autoEmojis == stt)
        return;

    p->autoEmojis = stt;
    AsemanApplication::settings()->setValue("General/autoEmojis", stt);

    emit autoEmojisChanged();
}

bool Cutegram::autoEmojis() const
{
    return p->autoEmojis;
}

void Cutegram::setSendWithEnter(bool stt)
{
    if (p->sendWithEnter == stt)
        return;
    p->sendWithEnter = stt;
    AsemanApplication::settings()->setValue("General/sendWithEnter", stt);

    emit sendWithEnterChanged();
}

bool Cutegram::sendWithEnter() const
{
    return p->sendWithEnter;
}

void Cutegram::setPromptForPush(bool value)
{
    if (p->promptForPush == value)
        return;
    p->promptForPush = value;
    AsemanApplication::settings()->setValue("General/promptForPush", value);

    emit promptForPushChanged();
}

bool Cutegram::promptForPush() const
{
    return p->promptForPush;
}

void Cutegram::setPushNotifications(bool stt)
{
    p->pushNotifications = stt;
    AsemanApplication::settings()->setValue("General/pushNotifications", stt);

    emit pushNotificationsChanged();
}

bool Cutegram::pushNotifications() const
{
    return p->pushNotifications;
}

void Cutegram::setPushNumber(const QString &number)
{
    if (p->pushNumber == number)
        return;
    p->pushNumber = number;
    AsemanApplication::settings()->setValue("General/pushNumber", number);

    emit pushNumberChanged();
}

QString Cutegram::pushNumber() const
{
    return p->pushNumber;
}

void Cutegram::setStatusIconStyle(int style)
{
    if(p->statusIconStyle == style)
        return;

    p->statusIconStyle = style;
    AsemanApplication::settings()->setValue("General/statusIconStyle", style);

    emit cutegramSubscribeChanged();

    setSysTrayCounter(sysTrayCounter(), true);
}

int Cutegram::statusIconStyle()
{
    return p->statusIconStyle;
}

QStringList Cutegram::themes() const
{
    return p->themes;
}

void Cutegram::setTheme(const QString &theme)
{
    if(p->theme == theme)
        return;

    p->theme = theme;
    AsemanApplication::settings()->setValue("General/theme",p->theme);
    init_theme();

    emit themeChanged();
}

QString Cutegram::theme() const
{
    return p->theme;
}

ThemeItem *Cutegram::currentTheme()
{
    return p->currentTheme;
}

QStringList Cutegram::searchEngines() const
{
    return p->searchEngines;
}

void Cutegram::setSearchEngine(const QString &se)
{
    if(p->searchEngine == se)
        return;

    p->searchEngine = se;
    AsemanApplication::settings()->setValue("General/searchEngine",p->searchEngine);
    init_theme();

    emit searchEngineChanged();
}

QString Cutegram::searchEngine() const
{
    return p->searchEngine;
}

QString Cutegram::cacheDirectory() const
{
    return QDir::homePath() + "/.cache/" + QCoreApplication::organizationDomain();
}

QString Cutegram::configDirectory() const
{
    return QDir::homePath() + "/.config/" + QCoreApplication::organizationDomain();
}

QString Cutegram::personalStickerDirectory() const
{
    return configDirectory() + "/stickers/Personal";
}

bool Cutegram::isLoggedIn(const QString &phone) const
{
    const QString &ppath = configDirectory() + "/" + phone;
    return QFile::exists(ppath + "/auth");
}

QString Cutegram::normalizeText(const QString &text) const
{
    if(text.isEmpty())
        return text;

    return text[0].toUpper() + text.mid(1);
}

void Cutegram::init_theme()
{
    if(p->currentThemeComponent)
        p->currentThemeComponent->deleteLater();
    if(p->currentTheme)
        p->currentTheme->deleteLater();

    p->currentThemeComponent = new QQmlComponent(p->viewer->engine(), p->themesPath + "/" + p->theme);
    p->currentTheme = static_cast<ThemeItem*>(p->currentThemeComponent->create());
    if(!p->currentTheme)
        qDebug() << p->currentThemeComponent->errorString();

    emit currentThemeChanged();
}

bool Cutegram::lowLevelDarkSystemTray()
{
    switch(p->statusIconStyle)
    {
    case StatusIconAutomatic:
        return darkSystemTray();
        break;

    case StatusIconDark:
        return true;
        break;

    case StatusIconLight:
        return false;
        break;
    }

    return darkSystemTray();
}

QVariantList Cutegram::intListToVariantList(const QList<qint32> &list)
{
    QVariantList res;
    foreach(const qint32 u, list)
        res << u;

    return res;
}

QList<qint32> Cutegram::variantListToIntList(const QVariantList &list)
{
    QList<qint32> res;
    foreach(const QVariant &l, list)
        res << l.toInt();

    return res;
}

Cutegram::~Cutegram()
{
    delete p;
}
