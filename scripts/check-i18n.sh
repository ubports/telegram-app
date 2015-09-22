#!/bin/bash

working_dir=`pwd`
cd telegram/

lines=`grep -ir '\"' --include '*.qml' --include '*.h' --include '*.cpp' \
    --exclude-dir=build \
    --exclude-dir=asemantools \
    --exclude-dir=ubuntu_component_store \
    --exclude-from="$working_dir/i18n-files.ignore" \
    | egrep -iv -f "$working_dir/i18n.ignore" | wc -l`
if [ $lines -eq 0 ]; then
#    echo -e "\033[1;32mCaught no untranslated strings.\033[0m"
    echo "Caught no untranslated strings."
    exit 0
else
    echo -e "\033[0;31mFound untranslated strings: $lines\033[0m"
    grep -ir '\"' --include '*.qml' --include '*.h' --include '*.cpp' \
    --exclude-dir=build \
    --exclude-dir=asemantools \
    --exclude-dir=ubuntu_component_store \
    --exclude-from="$working_dir/i18n-files.ignore" \
    | egrep -iv -f "$working_dir/i18n.ignore"
    exit 1
fi

