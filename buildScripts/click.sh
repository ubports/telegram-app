#!/bin/bash
set -e

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

if [ "$TEST_STEP" = "y" ]; then
    # Copy autopilot tests into click directory
    echo "Removing old autopilot tests..."
    rm -rf $TG_DIR/$BUILD_DIR_BASENAME/click/$AUTOPILOT_DIR || exit 1
    echo "Adding autopilot tests to the click package..."
    mkdir $TG_DIR/$BUILD_DIR_BASENAME/click/$AUTOPILOT_DIR || exit 1
    # mkdir $TG_DIR/$BUILD_DIR_BASENAME/click/$AUTOPILOT_DIR_BASENAME || exit 1
    cp -avr $TG_DIR/$AUTOPILOT_PATH $TG_DIR/$BUILD_DIR_BASENAME/click/$AUTOPILOT_DIR_BASENAME || exit 1
fi

cd $TG_DIR/$BUILD_DIR_BASENAME/ || exit 1
click build click || exit 1

PACKAGE=`ls com.ubuntu.telegram*|tail -n1`

adb push $PACKAGE /home/phablet || exit 1
adb shell pkcon install-local --allow-untrusted $PACKAGE || exit 1

echo "Done."
