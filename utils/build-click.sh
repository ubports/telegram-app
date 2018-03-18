#!/bin/bash -e

TELEGRAM_SOURCES=$(dirname "$(readlink -f "${0}")")/..
CLICK_TARGET_DIR="$TELEGRAM_SOURCES/bin/ubuntu-touch/tmp" # tmp is hard-coded into clickable
BUILD_DIR_BASENAME=build_mobile
# modifications to g++.conf
export QMAKE_CC=arm-linux-gnueabihf-gcc
export QMAKE_CXX=arm-linux-gnueabihf-g++
export QMAKE_LINK=arm-linux-gnueabihf-g++
export QMAKE_LINK_SHLIB=arm-linux-gnueabihf-g++
export QMAKE_BIN="/usr/lib/qt5/bin/qmake"
QT_SELECT=qt5
MAKE_BIN=make

mkdir -p $CLICK_TARGET_DIR

build_libqtelegram() {

echo "*****************************************"
echo "Building libqtelegram-ae"
echo "*****************************************"

cd $TELEGRAM_SOURCES/deps/libqtelegram-ae
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN -Wall PREFIX=/ -r .. QMAKE_CFLAGS_ISYSTEM= || exit 1
# $QMAKE_BIN PREFIX=/ -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1 //for debugging
echo "Calling make"
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1
}

build_TelegramQML() {

echo "*****************************************"
echo "Building TelegramQML"
echo "*****************************************"

cd $TELEGRAM_SOURCES/deps/TelegramQML
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN \
    LIBS+=-L$CLICK_TARGET_DIR/lib/x86_64-linux-gnu LIBS+=-lqtelegram-ae \
    LIBQTELEGRAM_INCLUDE_PATH+=$CLICK_TARGET_DIR/include/libqtelegram-ae \
    LIBS+=-lthumbnailer-qt \
    INCLUDEPATH+=/usr/include/thumbnailer-qt-1.0/unity/thumbnailer/qt \
    TELEGRAMQML_INCLUDE_PATH=$TG_INCS/telegramqml \
    PREFIX=/ BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. QMAKE_CFLAGS_ISYSTEM= || exit 1
#    PREFIX=/ BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1 //for debugging
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1

}

build_telegram() {

echo "*****************************************"
echo "Building Telegram App"
echo "*****************************************"

cd $TELEGRAM_SOURCES/telegram
mkdir -p $BUILD_DIR_BASENAME/po && cd $BUILD_DIR_BASENAME || exit 1
$QMAKE_BIN LIBS+=-L$CLICK_TARGET_DIR/lib/x86_64-linux-gnu INCLUDEPATH+=/include/thumbnailer-qt-1.0/unity/thumbnailer/qt INCLUDEPATH+=$CLICK_TARGET_DIR/include/libqtelegram-ae INCLUDEPATH+=$CLICK_TARGET_DIR/include/telegramqml PREFIX=/ -r .. || exit 1
# $QMAKE_BIN LIBS+=-L$TH_LIBS LIBS+=-L$TG_LIBS INCLUDEPATH+=$TH_INCS INCLUDEPATH+=$TG_INCS/libqtelegram-ae INCLUDEPATH+=$TG_INCS/telegramqml PREFIX=/ -r .. CONFIG+=debug || exit 1 //for debugging
#LIBS+=-lunity-scopes INCLUDEPATH+=/usr/include/unity-scopes-0 -r ..
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1

}

cleanup_click_dir() {

echo "*****************************************"
echo "Cleaning up"
echo "*****************************************"

	# Strip out documentation and includes
	rm -r $CLICK_TARGET_DIR/include
}

build_libqtelegram && build_TelegramQML && build_telegram && cleanup_click_dir

echo "*****************************************"
echo "Build script finished, now leaving work to 'click build'"
echo "******************************************"

