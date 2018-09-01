#!/bin/bash -e

TELEGRAM_SOURCES=$(dirname "$(readlink -f "${0}")")/..
CLICK_TARGET_DIR="$TELEGRAM_SOURCES/target/tmp" # tmp is hard-coded into clickable
LSB_RELEASE=$(lsb_release -cs)
DEB_HOST_MULTIARCH=$(dpkg-architecture -q DEB_HOST_MULTIARCH)
BUILD_DIR_BASENAME=build_clickable_${LSB_RELEASE}_${DEB_HOST_MULTIARCH}
# modifications to g++.conf

MAKE_BIN=make

mkdir -p $CLICK_TARGET_DIR

make_step() {

	echo "Calling make"
	$MAKE_BIN -j4 || exit 1
	$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1
}

build_libqtelegram() {

	echo "************************"
	echo "Building libqtelegram-ae"
	echo "************************"

	cd $TELEGRAM_SOURCES/deps/libqtelegram-ae
	mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1

	# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
	# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
	$QMAKE_BIN \
		PREFIX=/ QMAKE_CFLAGS_ISYSTEM= -r .. || exit 1
	#    PREFIX=/ QMAKE_CFLAGS_ISYSTEM= -r .. CONFIG+=debug || exit 1 //for debugging
	make_step
}

build_TelegramQML() {

	echo "********************"
	echo "Building TelegramQML"
	echo "********************"

	cd $TELEGRAM_SOURCES/deps/TelegramQML
	mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
	# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
	# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
	$QMAKE_BIN \
		LIBS+=-L$CLICK_TARGET_DIR/lib/$DEB_HOST_MULTIARCH LIBS+=-lqtelegram-ae \
		LIBQTELEGRAM_INCLUDE_PATH+=$CLICK_TARGET_DIR/include/libqtelegram-ae \
		LIBS+=-lthumbnailer-qt \
		INCLUDEPATH+=/usr/include/thumbnailer-qt-1.0/unity/thumbnailer/qt \
		TELEGRAMQML_INCLUDE_PATH=$TG_INCS/telegramqml \
		PREFIX=/ BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE QMAKE_CFLAGS_ISYSTEM= -r .. || exit 1
	#    PREFIX=/ BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug -r .. || exit 1 //for debugging
	make_step
}

build_telegram() {

	echo "*********************"
	echo "Building Telegram App"
	echo "*********************"

	cd $TELEGRAM_SOURCES/telegram
	mkdir -p $BUILD_DIR_BASENAME/po && cd $BUILD_DIR_BASENAME || exit 1
	$QMAKE_BIN \
		LIBS+=-L$CLICK_TARGET_DIR/lib/$DEB_HOST_MULTIARCH \
		INCLUDEPATH+=/include/thumbnailer-qt-1.0/unity/thumbnailer/qt \
		INCLUDEPATH+=$CLICK_TARGET_DIR/include/libqtelegram-ae \
		INCLUDEPATH+=$CLICK_TARGET_DIR/include/telegramqml PREFIX=/ -r .. || exit 1
	#    INCLUDEPATH+=$CLICK_TARGET_DIR/include/telegramqml PREFIX=/ CONFIG+=debug -r .. || exit 1 //for debugging
	make_step
}

cleanup_click_dir() {

	echo "***********"
	echo "Cleaning up"
	echo "***********"

	# Strip out documentation and includes
	rm -r $CLICK_TARGET_DIR/include
}

case $DEB_HOST_MULTIARCH in
"arm-linux-gnueabihf")
	QMAKE_BIN="qt5-qmake-arm-linux-gnueabihf"
	;;
*)
	QMAKE_BIN="qmake"
	;;
esac

echo "Building telegram app on $LSB_RELEASE for $DEB_HOST_MULTIARCH... (target directory is $BUILD_DIR_BASENAME)"

build_libqtelegram && build_TelegramQML && build_telegram && cleanup_click_dir

echo "********************************************************"
echo "Build script finished, now leaving work to 'click build'"
echo "********************************************************"
