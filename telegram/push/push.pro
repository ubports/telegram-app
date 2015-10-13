TEMPLATE = app
TARGET = push
QT -= gui
QT += sql dbus widgets
INCLUDEPATH += .

MOC_DIR = mocs
OBJECTS_DIR = objs

#load(ubuntu-click)

HEADERS += pushclient.h pushhelper.h
SOURCES += push.cpp pushclient.cpp pushhelper.cpp
OTHER += apparmor-push.json push-helper.json

other.files += $$OTHER
other.path = /

target.path = /

INSTALLS += target other
