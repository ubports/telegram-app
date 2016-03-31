QT -= gui
QT += sql
CONFIG += plugin no_plugin_name_prefix
TEMPLATE = lib
TARGET = com.ubuntu.telegram_sctelegram
VERSION = 2.0.0

load(ubuntu-click)

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
