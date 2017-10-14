#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

#echo "Remember to build the scope FIRST!"
echo "Building scope first..."
cd $TG_DIR/telegram/scope
./build.sh || exit 1

echo "Building app..."

cd $TG_DIR/telegram
mkdir -p $BUILD_DIR_BASENAME/po && cd $BUILD_DIR_BASENAME || exit 1
$QMAKE_BIN LIBS+=-L$TH_LIBS LIBS+=-L$TG_LIBS INCLUDEPATH+=$TH_INCS INCLUDEPATH+=$TG_INCS/libqtelegram-ae INCLUDEPATH+=$TG_INCS/telegramqml PREFIX=/usr -r .. CONFIG+=debug || exit 1
#LIBS+=-lunity-scopes INCLUDEPATH+=/usr/include/unity-scopes-0 -r ..
$MAKE_BIN -j4 || exit 1

if [ $BUILD_TYPE != "desktop" ]; then
    $MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME/click install || exit 1
    echo "Copying libs to click directory..."

    mkdir -p $TG_DIR/$BUILD_DIR_BASENAME/click/lib/arm-linux-gnueabihf/ || exit 1
    cp -P $TG_DIR/$BUILD_DIR_BASENAME$SYSTEM_LIB_PATH/* $TG_DIR/$BUILD_DIR_BASENAME/click/lib/arm-linux-gnueabihf/ || exit 1
else
    $MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
    #Trying not to use Ubuntu-specific stuff
    TELEGRAM_BIN_PATH=`find $TG_DIR/$BUILD_DIR_BASENAME/lib -iname "telegram"`
    if [ -z "$TELEGRAM_BIN_PATH" ]; then
        echo "No telegram binary found inside $TG_DIR/$BUILD_DIR_BASENAME/lib"
        exit 1
    fi

    #FIXME: just a temporary hack to make it easier for people to run the desktop binary
    ln -sfr $TG_DIR/$BUILD_DIR_BASENAME$SYSTEM_LIB_PATH/*.so.1 $TG_DIR/$BUILD_DIR_BASENAME/ || exit 1
fi

cd $TG_DIR/telegram
#mv po/template.pot po/com.ubuntu.telegram.pot

echo "Done."
