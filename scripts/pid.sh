#!/bin/bash

adb shell "ps aux|grep telegra[m]|grep qmlscene|tr -s ' '|cut -d' ' -f2"
