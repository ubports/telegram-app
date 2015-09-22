import QtQuick 2.0
import Ubuntu.Components 1.0
import "qrc:/qml/js/colors.js" as TelegramColors

import TelegramQML 1.0

Item {
    id: header

    property Telegram telegram
    property Dialog dialog

    property bool isChat: dialog.peer.chatId != 0
    property User user: telegram.user(dialog.peer.userId)
    property Chat chat: telegram.chat(dialog.peer.chatId)

    property var dialogId: isChat ? dialog.peer.chatId : dialog.peer.userId
    property int onlineCount: 0
    property bool isOnline: user.status.classType == typeUserStatusOnline
    property bool isSecretChat: false
    property bool isConnecting: false

    property string title: {
        if (isChat) {
            return chat.title;
        } else {
            return user.firstName + " " + userLastName;
        }
    }

    property string subtitle: {
        var result = "";
        var list = dialog.typingUsers;
        if (list.length > 0) {
            if (isChat) {
                for (var i = 0; i < list.length; i++) {
                    var userId = list[i];
                    var user = telegram.user(userId);
                    var name = user.firstName + " " + user.lastName
                    result += name.trim();

                    if (i < list.length - 1) {
                        result += ", ";
                    }
                }

                // TRANSLATORS: Indicates in the chat header which contacts are typing.
                result = i18n.tr("%1 is typing", "%1 are typing", list.length).arg(result.trim());
            } else {
                // TRANSLATORS: Indicates in the chat header the contact is typing.
                return i18n.tr("typing...");
            }
        } else {
            if (isChat) {
                if (onlineCount > 0) {
                    // TRANSLATORS: %1 is group chat member count, %2 is online member count.
                    result += i18n.tr("%1 members, %2 online").arg(chat.participantsCount).arg(onlineCount)
                } else {
                    // TRANSLATORS: %1 is gropu chat member count.
                    result += i18n.tr("%1 members").arg(chat.participantsCount)
                }
            } else {
                switch(user.status.classType)
                {
                case userStatusType.typeUserStatusOnline:
                    // TRANSLATORS: Indicates when the contact was last seen.
                    return i18n.tr("online");
                case userStatusType.typeUserStatusOffline:
                    // TRANSLATORS: %1 is the time when the person was last seen.
                    return i18n.tr("last seen %1").arg(Time.formatLastSeen(i18n, user.status.wasOnline * 1000));
                case userStatusType.typeUserStatusRecently:
                    // TRANSLATORS: Indicates when the contact was last seen.
                    return i18n.tr("last seen recently");
                case userStatusType.typeUserStatusLastWeek:
                    // TRANSLATORS: Indicates when the contact was last seen.
                    return i18n.tr("last seen within a week");
                case userStatusType.typeUserStatusLastMonth:
                    // TRANSLATORS: Indicates when the contact was last seen.
                    return i18n.tr("last seen within a month");
                default:
                    // TRANSLATORS: Indicates when the contact was last seen.
                    return i18n.tr("last seen a long time ago");
                }
            }
        }
    }

    signal clicked()

    // set this component height to page header contents height by default
    // otherwise we might encounter weird resizing behaviors
    height: units.gu(7)

    Avatar {
        id: headerImage
        width: height
        height: parent.height * 4 / 5.0
        anchors {
            left: parent.left
            verticalCenter: parent.verticalCenter
        }

        telegram: header.telegram
        dialog: header.dialog

        RotationAnimation {
            id: connectingAnimation
            target: headerImage
            direction: RotationAnimation.Clockwise
            from: 0
            to: 359
            loops: Animation.Infinite
            duration: 5000
            alwaysRunToEnd: false
            running: isConnecting && headerImage.isLogo
            properties: "rotation"

            onRunningChanged: {
                if (!running) {
                    connectingAnimation.stop();
                    headerImage.rotation = 0;
                }
            }
        }
    }

    Image {
        id: secretChatImage
        source: Qt.resolvedUrl("../images/ic_lock_green.png");
        sourceSize.width: units.gu(1)
        anchors {
            left: headerImage.right
            leftMargin: visible ? units.gu(1) : 0
            verticalCenter: subtitleText.visible ? titleText.verticalCenter : parent.verticalCenter
        }
        fillMode: Image.PreserveAspectFit
        visible: isSecretChat
        height: isSecretChat ? units.gu(1.8) : 0
    }

    Label {
        id: titleText
        // We need fixed width. Otherwise, we overflow action icons.
        width: Math.min(implicitWidth, parent.width - headerImage.width - secretChatImage.width - anchors.leftMargin)
        anchors {
            top: parent.top
            topMargin: units.gu(1)
            left: secretChatImage.right
            leftMargin: units.gu(1)
        }
        verticalAlignment: Text.AlignVCenter

        font.pixelSize: FontUtils.sizeToPixels("large")
        elide: Text.ElideRight
        color: TelegramColors.grey
        text: isConnecting ? i18n.tr("Connecting...") : title.length === 0 ? i18n.tr("Telegram") : title

        state: header.subtitle.length > 0 ? "subtitle" : "default"
        states: [
            State {
                name: "default"
                AnchorChanges {
                    target: titleText
                    anchors.verticalCenter: titleText.parent.verticalCenter
                }
                PropertyChanges {
                    target: titleText
                    height: titleText.implicitHeight
                }
            },
            State {
                name: "subtitle"
                PropertyChanges {
                    target: titleText
                    height: titleText.parent.height / 2
                }
            }
        ]

        transitions: [
            Transition {
                AnchorAnimation {
                    duration: UbuntuAnimation.FastDuration
                }
            }
        ]
    }

    Label {
        id: subtitleText
        width: Math.min(implicitWidth, parent.width - headerImage.width - anchors.leftMargin)
        anchors {
            left: headerImage.right
            leftMargin: units.gu(1)
            bottom: parent.bottom
            bottomMargin: units.gu(0.5)
        }
        verticalAlignment: Text.AlignVCenter
        height: parent.height / 2

        color: TelegramColors.blue
        fontSize: "small"
        elide: Text.ElideRight
        text: subtitle

        Connections {
            target: header
            onSubtitleChanged: {
                subtitleText.opacity = 0;
                subtitleTextTimer.start();
            }
        }

        Timer {
            id: subtitleTextTimer
            interval: UbuntuAnimation.FastDuration
            onTriggered: {
                subtitleText.text = header.subtitle;
                subtitleText.opacity = 1;
            }
        }

        Behavior on opacity {
            NumberAnimation {
                duration: UbuntuAnimation.FastDuration
            }
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            mouse.accepted = true;
            header.clicked();
        }
    }
}
