#!/bin/bash
set -e
ARM_QMAKE=~/.config/QtProject/qtcreator/ubuntu-sdk/ubuntu-sdk-15.04-armhf/qt5-qmake-arm-linux-gnueabihf
ARM_MAKE=~/.config/QtProject/qtcreator/ubuntu-sdk/ubuntu-sdk-15.04-armhf/make

TG_DIR=$(echo `cd ../..; pwd`)
#TG_LIBS=$TG_DIR/usr/lib/arm-linux-gnueabihf
#TG_INCS=$TG_DIR/usr/include/arm-linux-gnueabihf

echo "Building scope..."

mkdir -p build && cd build

$ARM_QMAKE PREFIX=/ ..
$ARM_MAKE
$ARM_MAKE INSTALL_ROOT=$TG_DIR/click install

echo "Done."
