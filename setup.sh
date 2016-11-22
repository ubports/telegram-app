#!/bin/bash
# Authors: Andrea Bernabei <andrea.bernabei@canonical.com>
#	       Roberto Mier Escandón <roberto.escandon@canonical.com>

##################CUSTOMIZABLE SECTION#########################
# Modify the env variables inside the functions if needed.
# VARIABLES DOCUMENTATION
# QMAKE_BIN is the path of the qmake binary that will be used to generate the makefiles
# MAKE_BIN is the path of the make binary
# SYSTEM_LIB_PATH is the path to the system libraries (e.g. /usr/lib/<arch>)
# SYSTEM_INCLUDE_PATH the path of the Qt5 modules headers, where libqtelegram-ae and TelegramQML libs headers are installed
# BUILD_DIR_BASENAME is the name of the directory the build files will be written to
# TG_DIR is the path of the Telegram app sources
# TG_LIBS is the path where the auxiliary libraries will be copied to
# TG_INCLS is the path holding the headers of the auxiliary libraries
# TH_LIBS is the path holding the .so of the new thumbnailer
# TH_INCS is the path holding the headers of the new thumbnailer

#Env vars for the "desktop" build
function setDesktopBuildEnvVars() {
    echo "Setting up env for a build for desktop..."
    export QT_SELECT=qt5
    export QMAKE_BIN=qmake
    export MAKE_BIN=make
    #TODO: we're assuming Qt will be in the default libs path
    export SYSTEM_LIB_PATH=`$QMAKE_BIN -query QT_HOST_LIBS`
    export SYSTEM_INCLUDE_PATH=/usr/include
#`$QMAKE_BIN -query QT_INSTALL_HEADERS`
    export BUILD_DIR_BASENAME=build_desktop
}
#Env vars for the "mobile" build
function setMobileBuildEnvVars() {
    #TODO: get rid of hardcoded paths
    echo "Setting up env for a build for mobile devices..."
    export LXD_IMAGE_ALIAS=$(askForLXD)
    export QMAKE_BIN=~/.config/QtProject/qtcreator/ubuntu-sdk/$LXD_IMAGE_ALIAS/qt5-qmake-arm-linux-gnueabihf
    export MAKE_BIN=~/.config/QtProject/qtcreator/ubuntu-sdk/$LXD_IMAGE_ALIAS/make
    #can't use qmake to get system lib paths here because the SDK qmake-script above  maps dirs to be relative to the chroot dir
    export SYSTEM_LIB_PATH=/usr/lib/arm-linux-gnueabihf
    export SYSTEM_INCLUDE_PATH=/usr/include/
    export BUILD_DIR_BASENAME=build_mobile
    export AUTOPILOT_DIR=autopilot
    export AUTOPILOT_APP_DIR=/telegram
    export AUTOPILOT_DIR_BASENAME=$AUTOPILOT_DIR/$AUTOPILOT_APP_DIR
    export AUTOPILOT_PATH=telegram/$AUTOPILOT_DIR_BASENAME
}
#Generic env vars
function setTelegramEnvVars() {
    export TG_DIR=`pwd`
    export TG_LIBS=$TG_DIR/$BUILD_DIR_BASENAME$SYSTEM_LIB_PATH
    export TG_INCS=$TG_DIR/$BUILD_DIR_BASENAME$SYSTEM_INCLUDE_PATH

    # new thumbnailer lib paths
    export TH_LIBS=$SYSTEM_LIB_PATH
    export TH_INCS=/usr/include/thumbnailer-qt-1.0/unity/thumbnailer/qt
}
##################END OF CUSTOMIZABLE SECTION##################







##################DO NOT TOUCH FROM THIS POINT ON##############

function askForLXD() {
    #ask using cli for the lxd alias to use, as that name can be selected by the user when downloaded the image
    if [ -z "$LXD_IMAGE_ALIAS" ]; then
        LXD_IMAGE_ALIAS=ubuntu-sdk-15.04-armhf
    fi
    read -p "LXD image to use [$LXD_IMAGE_ALIAS]: " RESPONSE
    RESPONSE="${RESPONSE:-$LXD_IMAGE_ALIAS}"
    echo "$RESPONSE"
}

export BUILD_TYPE=mobile

#The build system is separated in 3 steps which can be enabled or disabled as needed
DEPS_STEP=n
APP_STEP=n
CLICK_STEP=n
ERASE_STEP=n
export TEST_STEP=n
RESET_ENV_VARS=n

function usage() {
    echo "Build environment setup script."
    echo "Options:"
    echo "-t <type> To specify the build type. Possible values: mobile, desktop. Default value: mobile."
    echo "-d        To download and build the sourcecode of the dependencies."
    echo "-b        To build the telegram app."
    echo "-c        To create and install the click package (only valid if mobile build type has been selected)"
    echo "-e        To erase all build files relative to the specified build type."
    echo "-u        To include all autopilot unit test cases in the click package (only valid if -c has been selected)."
}

while getopts "t:dbceuh" opt; do
    case $opt in
    t)
        case $OPTARG in
        mobile)
            BUILD_TYPE=mobile
            ;;
        desktop)
            BUILD_TYPE=desktop
            ;;
        \?) 
            echo "Invalid build type specified."
            usage
            exit 1
            ;;
        esac
        ;;
    d)
        DEPS_STEP=y
        ;;
    b)
        APP_STEP=y
        ;;
    c)
        CLICK_STEP=y
        ;;
    e)
        ERASE_STEP=y
        ;;
    u)
        TEST_STEP=y
        ;;
    v)
        RESET_ENV_VARS=y
        ;;
    h)
        usage
        exit 0
        ;;
    \?)
        echo "Invalid option. Use option -h to see the help."
        exit 1
        ;;
    esac
done

if [ "$DEPS_STEP" = "n" ] && [ "$APP_STEP" = "n" ] && [ "$CLICK_STEP" = "n" ] && [ "$ERASE_STEP" = "n" ]; then
    usage
    exit 1
fi

if [ "$CLICK_STEP" = "n" ] && [ "$TEST_STEP" = "y" ]; then
    echo "The inclusion of autopilot test cases requires the -c flag."
    usage
    exit 1
fi

if [ "$BUILD_TYPE" = "desktop" ]; then
    setDesktopBuildEnvVars
else 
    setMobileBuildEnvVars
fi

setTelegramEnvVars

echo "The script relies on knowing the path to the root of the downloaded sourcecode. The path to the root of the sources will now be printed. If the path is not correct, please cd to the root of the sources before running the setup script again."
echo $TG_DIR
read -p "Do you confirm the path is correct? [y/N]" -n 1 -r
echo    # (optional) move to a new line
if [[ $REPLY =~ ^[Yy]$ ]]
then
    echo "Thanks. The setup process will now continue..."
else 
    echo "Aborting..."
    exit 1
fi


if [ "$DEPS_STEP" = "y" ]; then
    ./buildScripts/bootstrap.sh || exit 1
fi

if [ "$APP_STEP" = "y" ]; then
    ./buildScripts/build.sh || exit 1
fi

if [ "$CLICK_STEP" = "y" ]; then
    echo "test"
    if [ "$BUILD_TYPE" = "mobile" ]; then
        ./buildScripts/click.sh || exit 1
    else
        echo "The creation and installation of the click package requires the \"mobile\" build type. See -h for more info."
        exit 1
    fi
fi

if [ "$ERASE_STEP" = "y" ]; then
    source ./buildScripts/clean.sh || exit 1
fi

