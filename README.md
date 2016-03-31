# Telegram for Ubuntu

### TLDR;
    "./setup.sh -t mobile -dbc"  for a full mobile build
OR  "./setup.sh -t desktop -db" for a full desktop build

### How to build

This build setup has been tested on:
- Ubuntu Vivid 15.04 with Overlay PPA enabled

The following instructions assume you downloaded Telegram for Ubuntu source and changed ("cd") to the project's root directory.

1)  Install build dependencies
    If you're building for mobile devices:
        If you don't have a 15.04 click chroot yet:
            click chroot --arch armhf --framework ubuntu-sdk-15.04 create
        In the above click chroot, install:
            libthumbnailer-qt-dev:armhf libthumbnailer-qt1.0:armhf thumbnailer-service:armhf
    Else if you're building for desktop, install:
        libthumbnailer-qt-dev libthumbnailer-qt1.0 thumbnailer-service libqt5xmlpatterns5-dev qtdeclarative5-dev qtmultimedia5-dev libssl-dev

2)  Download and build the source of libqtelegram-aseman-edition library and TelegramQML plugin:
    - Run ./setup.sh -t <build_type> -d
    
    The help command will show the available values for <build_type>.
    It'll git clone both projects to the deps directory and build them (inside the click chroot, if
    the build type chosen was "mobile").
    You can use same command to re-build, if you have changed them, too.
    NOTE: it may be required to modify some environment variables that drive the build process, such
    as the path to qmake or make, the path to system libraries, the name of the chroot, etc.
    The env variables are grouped at the beginning of setup.sh, to make the customization easier.
    
3)  Build Telegram for Ubuntu
    - Run ./setup.sh -t <build_type> -b
    
    This will build the app in the build path defined by setup.sh 
    and prepare everything in a directory named click in the project's root directory.
    NOTE: it may be required to modify some environment variables that drive the build process, such
    as the path to qmake or make, the path to system libraries, the name of the chroot, etc.
    The env variables are grouped at the beginning of setup.sh, to make the customization easier.
    
4)  (Optional) Build the click package and install it using adb (requires an Ubuntu Touch 
    mobile device connected via USB with developer mode enabled):
    - Run ./setup.sh -t mobile -c
    
    
### How to run (DESKTOP VERSION only)

- cd to the path holding the binary we have just build, e.g. "cd build_desktop/lib/x86_64-linux-gnu/bin/"
- run "LD_LIBRARY_PATH=../../../:$LD_LIBRARY_PATH ./telegram"

### How to delete the build files

- Run ./setup -t <build_type> -e

### How to get help

- Run ./setup -h
