#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

TG_DIR=$(echo `cd ../..; pwd`)

echo "Building scope..."

mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1

$QMAKE_BIN PREFIX=/ .. || exit 1
$MAKE_BIN || exit 1
if [ "$BUILD_TYPE" = "desktop" ]; then
    $MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME install || exit 1
else
    $MAKE_BIN INSTALL_ROOT=$TG_DIR/$BUILD_DIR_BASENAME/click install || exit 1
fi

echo "Done."
