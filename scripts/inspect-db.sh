#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 phone_number"
    exit -1
fi

cd /tmp
rm -f telegram.sqlite
adb pull "/home/phablet/.config/com.ubuntu.telegram/$1/database.db"
sqlite3 telegram.sqlite
