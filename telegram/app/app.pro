TEMPLATE = app
CONFIG += c++11 console
TARGET = telegram
QT += qml quick sql xml multimedia
# QT += webkitwidgets webkit

MOC_DIR = mocs
OBJECTS_DIR = objs

load(ubuntu-click)

UBUNTU_TRANSLATION_DOMAIN="com.ubuntu.telegram"

isEmpty(OPENSSL_INCLUDE_PATH): OPENSSL_INCLUDE_PATH = /usr/include/openssl /usr/local/include/openssl

LIBS += -lssl -lcrypto -lz -lqtelegram-ae -ltelegramqml -lthumbnailer-qt

INCLUDEPATH += $${OPENSSL_INCLUDE_PATH} 

SOURCES += main.cpp \
    telegram.cpp \
    emojis.cpp \
    unitysystemtray.cpp \
    cutegramenums.cpp \
    textemojiwrapper.cpp \
    emoticonsmodel.cpp \
    stickerfilemanager.cpp

include(qmake/qtcAddDeployment.pri)
include(asemantools/asemantools.pri)
qtcAddDeployment()

HEADERS += \
    telegram.h \
    cutegram_macros.h \
    emojis.h \
    unitysystemtray.h \
    cutegramenums.h \
    themeitem.h \
    textemojiwrapper.h \
    emoticonsmodel.h \
    stickerfilemanager.h

RESOURCES += telegram.qrc

OTHER_FILES += \
    apparmor-telegram.json \
    content-hub.json \
    urls.json \
    telegram.application \
    database \
    js

SCOPE_DATA += \
    icons/telegram.png \
    images/plane.png \
    qml/files/user_aqua.png \
    qml/files/user_blue.png \
    qml/files/user_green.png \
    qml/files/user_orange.png \
    qml/files/user_pink.png \
    qml/files/user_placeholder.png \
    qml/files/user_red.png \
    qml/files/user_violet.png \
    qml/files/user_yellow.png

target.path = $${UBUNTU_CLICK_BINARY_PATH}

serverPub.files = tg-server.pub
serverPub.path = $${target.path}

configs.files = $${OTHER_FILES}
configs.path = /

scopeData.files = $${SCOPE_DATA}
scopeData.path = /scope/

icons.files = \
    icons/telegram.png \
    images/telegram_symbolic.svg
icons.path = /icons/

emojis.files = emojis
emojis.path = /

stickerFiles.files = stickers
stickerFiles.path = /

INSTALLS += target configs icons scopeData emojis stickerFiles serverPub

