# Telegram for Ubuntu

### How to build

The following instructions assume you have gotten Telegram for Ubunt source and changed to the project's root directory.

If you don't have a 15.04 click chroot yet:

    click chroot --arch armhf --framework ubuntu-sdk-15.04 create

#### Get and build dependencies.

This app requires:
- libqtelegram-aseman-edition library and
- TelegramQML plugin

Simply run:

./bootstrap.sh

It'll git clone both projects to the deps directory and build them.
You can use same command to re-build, if you have changed them, too.

#### Build Telegram for Ubuntu

Simply run:

./build.sh

This will build the app and prepare everything in a directory named click
in the project's root directory.

To build the click package and install, run:

./click.sh

This step uses your armhf click chroot.

