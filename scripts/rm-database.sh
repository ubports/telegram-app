#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 phone_number"
    exit -1
fi

adb shell "rm -f /home/phablet/.config/com.ubuntu.telegram/$1/database.db"
