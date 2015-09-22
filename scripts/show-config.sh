#!/bin/bash

cd /tmp
rm "com.ubuntu.telegram.conf"
adb pull "/home/phablet/.config/com.ubuntu.telegram/com.ubuntu.telegram.conf"
cat "com.ubuntu.telegram.conf"
