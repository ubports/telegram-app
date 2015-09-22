#!/bin/bash

if [ "$1" == "clean" ]; then
    adb shell "rm -f /home/phablet/.cache/upstart/application-click-com.ubuntu.telegram*.log"
    shift
fi

version="*"
if [ "$#" -gt 0 ]; then
    version=$1
    shift
fi

log="/home/phablet/.cache/upstart/application-click-com.ubuntu.telegram_telegram_"$version".log"

adb shell "tail -n 200 --follow $log|grep -v lttng"
