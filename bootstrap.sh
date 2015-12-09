#!/bin/bash

set -e
ARM_QMAKE=~/.config/QtProject/qtcreator/ubuntu-sdk/ubuntu-sdk-15.04-armhf/qt5-qmake-arm-linux-gnueabihf
ARM_MAKE=~/.config/QtProject/qtcreator/ubuntu-sdk/ubuntu-sdk-15.04-armhf/make

TG_DIR=`pwd`

TH_LIBS=/usr/lib/arm-linux-gnueabihf
TH_INCS=/usr/include/thumbnailer-qt-1.0/unity/thumbnailer/qt

cd deps

if [ ! -d "libqtelegram-ae" ]; then
    git clone https://github.com/Aseman-Land/libqtelegram-aseman-edition.git libqtelegram-ae
fi

if [ ! -d "TelegramQML" ]; then
    git clone https://github.com/Aseman-Land/TelegramQML.git
fi

echo "Building libqtelegram"

cd libqtelegram-ae
mkdir -p build && cd build
$ARM_QMAKE PREFIX=/usr -r ..
$ARM_MAKE
$ARM_MAKE INSTALL_ROOT=$TG_DIR install
cd $TG_DIR/deps

echo "Buidling TelegramQML"

cd TelegramQML
mkdir -p build && cd build
$ARM_QMAKE \
    LIBS+=-L$TG_DIR/usr/lib/arm-linux-gnueabihf LIBS+=-lqtelegram-ae \
    LIBQTELEGRAM_INCLUDE_PATH=$TG_DIR/usr/include/libqtelegram-ae \
    INCLUDEPATH+=$TH_INCS \
    LIBS+=-L$TH_LIBS LIBS+=-lthumbnailer-qt \
    TELEGRAMQML_INCLUDE_PATH=$TG_DIR/usr/include/telegramqml \
    PREFIX=/usr BUILD_MODE+=lib \
    DEFINES+=UBUNTU_PHONE -r ..
$ARM_MAKE
$ARM_MAKE INSTALL_ROOT=$TG_DIR install
cd $TG_DIR

echo "Done."
