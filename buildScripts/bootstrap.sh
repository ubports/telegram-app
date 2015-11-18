#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

cd $TG_DIR/deps

if [ ! -d "libqtelegram-ae" ]; then
    git clone -b fix-lib-paths https://github.com/Aseman-Land/libqtelegram-aseman-edition.git libqtelegram-ae
fi

if [ ! -d "TelegramQML" ]; then
    git clone -b fix-lib-paths https://github.com/Aseman-Land/TelegramQML.git
fi

echo "Building libqtelegram"

cd libqtelegram-ae
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
$QMAKE_BIN PREFIX=/usr -r .. || exit 1
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
cd $TG_DIR/deps

echo "Building TelegramQML"

cd TelegramQML
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
$QMAKE_BIN \
    LIBS+=-L$TG_LIBS LIBS+=-lqtelegram-ae \
    LIBQTELEGRAM_INCLUDE_PATH+=$TG_INCS/libqtelegram-ae \
    LIBS+=-L$TH_LIBS LIBS+=-lthumbnailer-qt \
    INCLUDEPATH+=$TH_INCS \
    TELEGRAMQML_INCLUDE_PATH=$TG_INCS/telegramqml \
    PREFIX=/usr BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. || exit 1
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
cd $TG_DIR

echo "Done."
