#!/bin/bash

adb shell "cp -a /etc/xdg/ubuntu-push-client ~/.config && sed -i -e 's/info/debug/' ~/.config/ubuntu-push-client/config.json"
