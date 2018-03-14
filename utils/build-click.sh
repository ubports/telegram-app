#!/bin/bash -e

TELEGRAM_SOURCES=$(dirname "$(readlink -f "${0}")")/..
CLICK_TARGET_DIR="$TELEGRAM_SOURCES/bin/ubuntu-touch/tmp" # tmp is hard-coded into clickable
BUILD_DIR_BASENAME=build_mobile
QMAKE_BIN=/usr/bin/qt5-qmake-arm-linux-gnueabihf

mkdir -p $CLICK_TARGET_DIR

ARCH=$(dpkg-architecture -qDEB_HOST_ARCH)
DEB_HOST_MULTIARCH=$(dpkg-architecture -qDEB_HOST_MULTIARCH)

install_deb() {
	BASE_URL="${1}"; PKG="${2}"; VERSION="${3}"
	DEB_NAME="${PKG}_${VERSION}_${ARCH}.deb"

	# download deb using curl with a nice progress bar
	curl -L --progress-bar ${BASE_URL}/${DEB_NAME} -o "/tmp/${DEB_NAME}"
	# install to click
	dpkg-deb -x "/tmp/${DEB_NAME}" ${CLICK_TARGET_DIR}
	# clean up
	rm "/tmp/${DEB_NAME}"
}

install_dependencies() {

echo "nothing do be done currently..."

}

build_libqtelegram() {
echo "Building libqtelegram"

cd $TELEGRAM_SOURCES/deps/libqtelegram-ae
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN PREFIX=/usr -r .. QMAKE_CFLAGS_ISYSTEM= || exit 1
# $QMAKE_BIN PREFIX=/usr -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1 //for debugging
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1
cd $TG_DIR/deps


}

build_TelegramQML() {

echo "Building TelegramQML"

cd $TELEGRAM_SOURCES/deps/TelegramQML
mkdir -p $BUILD_DIR_BASENAME && cd $BUILD_DIR_BASENAME || exit 1
# FIXME (rmescandon): workaround for letting yakkety desktop version compile. Seems that leaving
# QMAKE_CFLAGS_ISYSTEM to default /usr/include yields stdlib.h error. Instead it is set to nothing
$QMAKE_BIN \
    LIBS+=-L$TG_LIBS LIBS+=-lqtelegram-ae \
    LIBQTELEGRAM_INCLUDE_PATH+=$TG_INCS/libqtelegram-ae \
    LIBS+=-L$TH_LIBS LIBS+=-lthumbnailer-qt \
    INCLUDEPATH+=$TH_INCS \
    TELEGRAMQML_INCLUDE_PATH=$TG_INCS/telegramqml \
    PREFIX=/usr BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. QMAKE_CFLAGS_ISYSTEM= || exit 1
#    PREFIX=/usr BUILD_MODE+=lib DEFINES+=UBUNTU_PHONE -r .. QMAKE_CFLAGS_ISYSTEM= CONFIG+=debug || exit 1 //for debugging
$MAKE_BIN -j4 || exit 1
$MAKE_BIN INSTALL_ROOT=$CLICK_TARGET_DIR install || exit 1
cd $TG_DIR
}

build_telegram() {
	mkdir -p $TELEGRAM_SOURCES/build
	cd $TELEGRAM_SOURCES/build
	cmake .. \
	      -GNinja \
	      -DCMAKE_MAKE_PROGRAM=/usr/bin/ninja \
	      -DCMAKE_PREFIX_PATH="${CLICK_TARGET_DIR}" \
	      -DCMAKE_INSTALL_PREFIX="${CLICK_TARGET_DIR}" \
	      -DI18N=0 \
	      -DUBUNTU_TOUCH=1 \
	      -DCLICK_ARCH="${ARCH}"

	ninja install
}

cleanup_click_dir() {
	# Strip out documentation and includes
	rm -r \
		$CLICK_TARGET_DIR/usr \
		$CLICK_TARGET_DIR/include \
		$CLICK_TARGET_DIR/share/doc \
		$CLICK_TARGET_DIR/share/locale \
		$CLICK_TARGET_DIR/lib/$DEB_HOST_MULTIARCH/cmake \
		$CLICK_TARGET_DIR/lib/$DEB_HOST_MULTIARCH/pkgconfig \
		$CLICK_TARGET_DIR/lib/$DEB_HOST_MULTIARCH/qt5/mkspecs
}

echo "*****************************************"
echo "Downloading Debian packages"
echo "*****************************************"

install_dependencies


echo "*****************************************"
echo "Building Telegram"
echo "*****************************************"

/usr/bin/qt5-qmake-arm-linux-gnueabihf -version
build_libqtelegram && build_TelegramQML && build_telegram

cleanup_click_dir

echo "*****************************************"
echo "Build script finished, now leaving work to 'click build'"
echo "******************************************"

