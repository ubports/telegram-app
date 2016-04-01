QT -= gui
QT += sql
CONFIG += plugin no_plugin_name_prefix
TEMPLATE = lib
TARGET = com.ubuntu.telegram_sctelegram
VERSION = 2.0.0

load(ubuntu-click)

#NOTE (by faenil): this is a workaround to a qmake configuration bug. 
#It is needed for cross-compiled builds (such as the mobile armhf chroot build).
#I'm quite sure (although not 100%) that this will be fixed by 
#https://github.com/qtproject/qtbase/commit/6e6f27b6ec4455bf42343bac575109ed1de20c3a
#FIXME: remove this line once Ubuntu ships the patch above (or Qt5.7)
#Details: qmake was not using cross pkg-config until that patch, so when building in the arm chroot
#pkg-config was looking for .pc files in the host arch folder (e.g x64 pkgconfig dir) instead 
#of the target arch folder (armhf pkgconfig dir)
PKG_CONFIG_LIBDIR=$$[QT_INSTALL_LIBS]/pkgconfig

CONFIG += link_pkgconfig c++11
PKGCONFIG += libunity-scopes
LIBS += -lunity-scopes

MOC_DIR = mocs
OBJECTS_DIR = objs

SOURCES += \
    scope.cpp \
    query.cpp \
    preview.cpp

HEADERS += \
    scope.h \
    query.h \
    preview.h

target = $$TARGET
target.path = /scope

SCOPE_FILES += com.ubuntu.telegram_sctelegram.ini

OTHER_FILES += apparmor-scope.json

*-g++* {
   QMAKE_CXXFLAGS += -pedantic -Wextra
}

scope_files.files = $${SCOPE_FILES}
scope_files.path = /scope

other.files = $${OTHER_FILES}
other.path = /

INSTALLS += target scope_files other
