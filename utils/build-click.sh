#!/bin/bash -e

TELEGRAM_SOURCES=$(dirname "$(readlink -f "${0}")")/..
CLICK_TARGET_DIR="$TELEGRAM_SOURCES/bin/ubuntu-touch/tmp" # tmp is hard-coded into clickable

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

	echo "I: Installing QML modules"
	mv $CLICK_TARGET_DIR/usr/lib/$DEB_HOST_MULTIARCH/qt5/qml/* $CLICK_TARGET_DIR/usr/lib/$DEB_HOST_MULTIARCH
	echo "I: Installing libraries"
	mv $CLICK_TARGET_DIR/usr/* $CLICK_TARGET_DIR/
}

build_telegram() {
	mkdir -p $TELEGRAM_SOURCES/build
	cd $TELEGRAM_SOURCES/build
	cmake .. \
	      -GNinja \
	      -DCMAKE_MAKE_PROGRAM=/usr/bin/ninja \
	      -DCMAKE_PREFIX_PATH="${CLICK_TARGET_DIR}" \
	      -DCMAKE_INSTALL_PREFIX="${CLICK_TARGET_DIR}" \
	      -DI18N=1 \
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

build_telegram

cleanup_click_dir

echo "*****************************************"
echo "Build script finished, now leaving work to 'click build'"
echo "******************************************"

