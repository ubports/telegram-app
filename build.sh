#!/bin/bash
set -e
ARM_QMAKE=~/.config/ubuntu-sdk/ubuntu-sdk-15.04-armhf/qt5-qmake-arm-linux-gnueabihf
ARM_MAKE=~/.config/ubuntu-sdk/ubuntu-sdk-15.04-armhf/make

TG_DIR=`pwd`
TG_LIBS=$TG_DIR/usr/lib/arm-linux-gnueabihf
TG_INCS=$TG_DIR/usr/include/arm-linux-gnueabihf

# new thumbnailer
TH_LIBS=/usr/lib/arm-linux-gnueabihf
TH_INCS=/usr/include/thumbnailer-qt-1.0/unity/thumbnailer/qt

#echo "Remember to build the scope FIRST!"
echo "Building scope first..."
cd telegram/scope
./build.sh

echo "Building app..."

cd $TG_DIR/telegram
mkdir -p build && cd build
mkdir -p po
$ARM_QMAKE LIBS+=-L$TH_LIBS LIBS+=-L$TG_LIBS INCLUDEPATH+=$TH_INCS INCLUDEPATH+=$TG_INCS/qt5/libqtelegram-ae INCLUDEPATH+=$TG_INCS/qt5/telegramqml PREFIX=/ -r ..
#LIBS+=-lunity-scopes INCLUDEPATH+=/usr/include/unity-scopes-0 -r ..
$ARM_MAKE
$ARM_MAKE INSTALL_ROOT=$TG_DIR/click install

cd $TG_DIR/telegram
#mv po/template.pot po/com.ubuntu.telegram.pot

cd $TG_DIR
echo "Copying libs to click directory..."

mkdir -p click/lib/arm-linux-gnueabihf/
cp -P usr/lib/arm-linux-gnueabihf/* click/lib/arm-linux-gnueabihf/

echo "Done."
