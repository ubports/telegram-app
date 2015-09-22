#!/bin/bash
set -e

click build ./click

PACKAGE=`ls com.ubuntu.telegram*|tail -n1`

adb push $PACKAGE /home/phablet
adb shell pkcon install-local --allow-untrusted $PACKAGE

echo "Done."
