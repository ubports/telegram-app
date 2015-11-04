#!/bin/bash

if [ -z ${BUILD_DIR_BASENAME+x} ] || [ -z ${TG_DIR+x} ]; then
    echo "This script is not meant to be run directly. Please run \"./setup.sh -h\"."
    exit 1
fi

paths_to_remove=( $TG_DIR/$BUILD_DIR_BASENAME
                  $TG_DIR/telegram/$BUILD_DIR_BASENAME 
                  $TG_DIR/telegram/scope/$BUILD_DIR_BASENAME 
                  $TG_DIR/deps/libqtelegram-ae/$BUILD_DIR_BASENAME 
                  $TG_DIR/deps/TelegramQML/$BUILD_DIR_BASENAME )

echo "About to remove paths: "
for i in "${paths_to_remove[@]}"
do
    echo $i
done

read -p "Are you sure? [y/N]" -n 1 -r
echo    # (optional) move to a new line
if [[ $REPLY =~ ^[Yy]$ ]]
then
    echo "Deleting build files..."
else 
    echo "Aborting..."
    exit 1
fi


for path in "${paths_to_remove[@]}"
do
    rm -rf $path
done

echo "DONE"