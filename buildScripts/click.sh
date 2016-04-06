#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

cd $TG_DIR/$BUILD_DIR_BASENAME/ || exit 1
click build click || exit 1

PACKAGE=`ls com.ubuntu.telegram*|tail -n1`

adb push $PACKAGE /home/phablet || exit 1
adb shell pkcon install-local --allow-untrusted $PACKAGE || exit 1

echo "Done."
