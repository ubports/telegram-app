#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

cd $TG_DIR/deps

if [ ! -d "libqtelegram-ae" ]; then
    git clone -b ubports-API41 https://github.com/ubports/libqtelegram-aseman-edition.git libqtelegram-ae
else
    git -C libqtelegram-ae pull 
fi

if [ ! -d "TelegramQML" ]; then
    git clone -b ubports-API41 https://github.com/ubports/TelegramQML.git TelegramQML
else
    git -C TelegramQML pull
fi

echo "Building libqtelegram"

cd libqtelegram-ae
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN PREFIX=/usr -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
cd $TG_DIR/deps

echo "Building TelegramQML"

cd TelegramQML
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN \
    LIBS+=-L$TG_LIBS LIBS+=-lqtelegram-ae \
    LIBQTELEGRAM_INCLUDE_PATH+=$TG_INCS/libqtelegram-ae \
    LIBS+=-L$TH_LIBS LIBS+=-lthumbnailer-qt \
    INCLUDEPATH+=$TH_INCS \
    TELEGRAMQML_INCLUDE_PATH=$TG_INCS/telegramqml \
    PREFIX=/usr BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
cd $TG_DIR

echo "Done."
