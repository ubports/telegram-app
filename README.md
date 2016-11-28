# **Telegram for Ubuntu**

## **TL;DR**
    "./setup.sh -t mobile -dbc" for a full mobile build
    "./setup.sh -t desktop -db" for a full desktop build

This build setup has been tested on:
    - Ubuntu Vivid   15.04 with Overlay PPA enabled
    - Ubuntu Wily    15.10
    - Ubuntu Xenial  16.04
    - Ubuntu Yakkety 16.10


The following instructions assume you downloaded Telegram for Ubuntu source and changed ("cd") to the project's root directory.

##  **How to build**
1)  Install build dependencies.
### case Device:
    If you don't have a 15.04 click chroot yet:
    
        $ sudo click chroot --arch armhf --framework ubuntu-sdk-15.04 create

    To install the build dependencies in the chroot:

        $ sudo click chroot --arch armhf --framework ubuntu-sdk-15.04 maint
        $ apt-get install libthumbnailer-qt-dev:armhf
            
### case Desktop:
    Install the build dependencies using the following command:

        $ sudo apt-get install intltool ubuntu-sdk-ide ubuntu-sdk-libs ubuntu-sdk-qmake-extras
        $ sudo apt-get install libthumbnailer-qt-dev libunity-scopes-dev qtdeclarative5-dev qtmultimedia5-dev 
        $ sudo apt-get install qml-module-ubuntu-connectivity qtcreator-plugin-ubuntu qtdeclarative5-ubuntu-contacts0.1

2)  Environment setup
    Change your directory into below:

        $ cd ~/.config/QtProject/qtcreator/ubuntu-sdk/ubuntu-sdk-15.04-armhf

    then make a symbolic link bewteen qtc_chroot_wrapper and the make:

        $ ln -s /usr/share/qtcreator/ubuntu/scripts/qtc_chroot_wrapper.py make

3)  Download and build the source of libqtelegram-aseman-edition library and TelegramQML plugin:

        $ ./setup.sh -t <build_type> -d

    The help command will show the available values for <build_type>.
    It'll git clone both projects to the deps directory and build them (inside the click chroot, if the build type chosen was "mobile").
    You can use same command to re-build, if you have changed them, too.
    
    NOTE: it may be required to modify some environment variables that drive the build process, such
    as the path to qmake or make, the path to system libraries, the name of the chroot, etc.
    The env variables are grouped at the beginning of setup.sh, to make the customization easier.
    
4)  Build Telegram for Ubuntu

        $ ./setup.sh -t <build_type> -b
    
    This will build the app in the build path defined by setup.sh 
    and prepare everything in a directory named click in the project's root directory.
    NOTE: it may be required to modify some environment variables that drive the build process, such
    as the path to qmake or make, the path to system libraries, the name of the chroot, etc.
    The env variables are grouped at the beginning of setup.sh, to make the customization easier.
    
5)  (Optional) Build the click package and install it using adb (requires an Ubuntu Touch 
    mobile device connected via USB with developer mode enabled):
    
        $ ./setup.sh -t mobile -c
    
## **How to run (DESKTOP VERSION only)**

    $ cd build_desktop/lib/x86_64-linux-gnu/bin/
    $ LD_LIBRARY_PATH=../../../:$LD_LIBRARY_PATH ./telegram

(Optional for Unity7) To be able to send messages, run indicator-network-service,
or edit AccountSendMessage.qml as suggested in this README.

## **How to delete the build files**

    $ ./setup -t <build_type> -e

## **How to get help**

    $ ./setup -h

----------

# **Autopilot**

### Install On Desktop
To install Autopilot on a Ubuntu Desktop follow [this tutorial](https://developer.ubuntu.com/api/autopilot/python/1.5.0/guides-installation/).

### Install on Device
To install on a Ubuntu device you will need to first connect to the device via SSH:

    $ adb shell

Then execute the following commands:

    $ sudo mount -o remount,rw /

    $ sudo apt-get update

    $ sudo apt-get install python3-autopilot ubuntu-ui-toolkit-autopilot -yq

## **Telegram-App code changes**
Download the following telegram-app sample project which contains the autopilot test cases and and supporting documentation such as, **Telegram-App_Code_Changes.pdf**:

    $ bzr branch lp:~cellsoftware/telegram-app/autopilotTest-3

**Telegram-App_Code_Changes.pdf** lists the components which need to be updated, on your on version of the telegram-app code, with the *objectName* attribute in order for them to become visible to autopilot. This document also describes certain code changes which need to be made in order for desktop tests to pass. These are mainly to do with simulating an online device.  

Once downloaded, you will have created and autopilotTest-3 directory on your computer. The autopilot test scripts for **telegram-app** can be found in the following relative directory path: 

> autopilotTest-3/telegram/autopilot/telegram

**This directory structure must be maintained when copying the autopilot test cases to your own version of the app.**

##**Test Environment**

###Telegram-CLI
All tests involving the sending and receiving of messages will involve the Telegram CLI. This can be downloaded from [GitHub](https://github.com/vysheng/tg). Follow the instructions to install and build. The Telegram CLI scripts are written in Lua and can be found in the following relative directory path:

> autopilotTest-3/telegram/autopilot/CLI

**This directory structure must be maintained when copying the autopilot test cases to your own version of the app.**

#### Telegram CLI Launch

Once downloaded cd, to the '**tg**' folder. Then execute the following command:

    $ bin/telegram-cli -k tg-server.pub -W -s <location of the test script>

###Test Data
The following are prerequisites to executing the autopilot test cases:

> - A Telegram user must be logged into the app
> - The Telegram user must be signed into their Ubuntu One account
> - The app must not be launched
> - The device must not be screen or SIM locked
> - The device must be on the screen displaying the apps
> - The user must have 2 Telegram contacts defined, one of which must be the phone number used to set up the Telegram CLI 
> - The Telegram CLI must be online
> - The status of the first contact must be online during all the tests execution
> - There shouldn't be a conversation with the first contact or, in case there is, that should be empty
> - Ideally, there shouldn't be any conversation (conversations list empty). If that's not possible, it would be nice having the less possible
> - Device where testing must be in English
> - Camera app must be allowed to be used from Telegram app before starting the tests.

## **Execution**

### Desktop

Before running, the **telegram-app** and its dependencies have to be built. 
From the autopilotTest-3 directory execute the following command:

    $ ./setup.sh -t desktop -db

To execute the entire test suite perform the following command from the `autopilotTest-3/telegram/autopilot/` directory:

    $ autopilot3 run telegram/

To get a list of all individual test cases execute the following command:

    $ autopilot3 list telegram/

You will see an output similar to this:

> *2 telegram.tests.test_Messaging.SecretMessaging.test_SecretMessage
>     telegram.tests.test_Profile.ProfileTests.test_check_group_to_verify_members
>     telegram.tests.test_Profile.ProfileDetails.test_verify_profile_details
>     telegram.tests.test_Profile.ProfileTests.test_check_blocked_user

The *2 next to a test case refers to the number of scenarios within that test case. Therefore executing test_SecretMessage will run the same Secret Message test case but for 2 scenarios, e.g. sending a Secret Message containing text only and sending a Secret Message containing images only.

To execute all Profile tests execute the following:

    $ autopilot3 run telegram.tests.test_Profile

To execute all Profile Detail tests, execute the following:

    $ autopilot3 run  telegram.tests.test_Profile.ProfileDetails

To execute individual tests choose a test from the list, for example *telegram.tests.test_Login.Login.test_sign_in* then execute the following command:

    $ autopilot3 run telegram.tests.test_Login.Login.test_sign_in

### Device

To execute the autopilot test cases on a device, the **telegram-app**, its dependencies and the click package have to be built and installed on the device. Once you have connected your device via USB, build the mobile version of the app using the following command:

    $ ./setup.sh -t mobile -dbcu

Next, navigate to the installed test suite using:

    $ adb shell

    $ cd /opt/click.ubuntu.com/com.ubuntu.telegram/current/autopilot

The listing and executing of tests are as described in the Desktop section. 

## **Notes**
After getting Autopilot working. Here are some notes you need to do to ensure tests can be run properly:

### Device

During device testing the orientation should remain as portrait. Changing the orientation to landscape will cause tests to fail.

### Telegram CLI

If any of the test cases executed require the sending and/or receiving of messages the Telegram CLI will have to be launched, as described above. If left running for some time without activity the Telegram CLI will go offline. This may cause some autopilot tests to fail. To bring the Telegram CLI back online you can issue a CLI command, or quit the CLI by entering 'safe_quit' and relaunching.

### Flags

Here are the types and meanings for each flag:

**-d** - Dependency - Build the dependency to support the app
**-b** - Build - Builds and compile the app.
**-c** - Install on device
**-u** - Adds the autopilot tests to the click package installed on the device

    $ ./setup.sh -t mobile -<flag(s)>
For a more in-depth 'how-to' see [here](https://developer.ubuntu.com/api/autopilot/python/1.5.0/guides-running_ap/). 

###Messaging
To get messaging working correctly you need to make some code changes in 
AccountSendMessage.qml:

> 1. Enable TextArea - #155 - Change to `enabled: true`.
> 2. Enable Sticker button (if required) - #264 - Remove `connected || !NetworkingStatus` IF statement so you only have `if
> (!privates.emojiItem) {...}` in `onClicked:`.
> 3. Enable Send button - #326 - Remove `connected || !NetworkingStatus` IF statement so you only have `if (state == “attach”) {...}` in
> `onClicked:`.

## **Snap Package**

Alternative to click you can build snap packages instead, to be used in Ubuntu Core and Ubuntu Personal enabled devices.
Here are the steps:

### Clean

On project folder execute

```sh
snapcraft clean
```

### Build

```sh
snapcraft
```

### Install snap

You need to install previously ubuntu-snap-platform
```sh
snap install ubuntu-app-platform
```

In case you are not logged in to the store it is needed execute install as sudoer. You can login using
```sh
snap login <username>
```

You will be asked for credential(s)

The first time you install our just created snap package, it is needed also installing ubuntu-app-platform snap. Once installed, it can be used by any other qt application snap:

```sh
snap install ubuntu-app-platform
```

```sh
snap install telegram-app_<version>_<arch>.snap --devmode --edge
snap connect telegram-app:platform ubuntu-app-platform:platform
```
NOTE: --devmode and --edge modifiers are needed while deploying in a non strict mode.

NOTE: Snaps must be connected before running the applications for the first time to the ubuntu-app-platform. If telegram-app has been executed before the snap connect you will see an error message. To fix the problem, uninstall the telegram-app snap, then re-install it and run the snap connect command before executing telegram-app. This is a known limitation in snapd which will be resolved soon.

### Execute

```sh
telegram-app
```

## **References & Tutorials**
- [Autopilot Tutorials and Guides](https://developer.ubuntu.com/api/autopilot/python/1.5.0/)
- [Autopilot at a glance](http://www.theorangenotebook.com/2012/11/a-glance-at-autopilot.html)
- [Getting started with Autopilot](http://www.theorangenotebook.com/2012/11/getting-started-with-autopilot.html)
- [Your first autopilot test case](http://www.theorangenotebook.com/2012/11/our-first-autopilot-testcase.html)
- [Snap packaging](http://snapcraft.io)

