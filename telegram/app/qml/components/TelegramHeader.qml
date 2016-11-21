import QtQuick 2.4
import Ubuntu.Components 1.3

import "../js/avatar.js" as Avatar
import "../js/time.js" as Time
import "../js/colors.js" as Colors

import TelegramQML 1.0

PageHeader {
    id: header

    property Telegram telegram
    property Dialog dialog

    property bool isChat: dialog ? dialog.peer.chatId != 0 : false
    property User user: telegram.user(dialog.encrypted ? enChatUid : dialog.peer.userId)
    property Chat chat: telegram.chat(dialog.peer.chatId)
    property int dialogId: isChat ? dialog.peer.chatId : (dialog.encrypted ? enChatUid : dialog.peer.userId)

    property EncryptedChat enchat: telegram.encryptedChat(dialog.peer.userId)
    property int enChatUid: enchat.adminId==telegram.me ? enchat.participantId : enchat.adminId

    property bool isOnline: !isChat && user.status.classType == userStatusType.typeUserStatusOnline
    property bool isSecretChat: dialog.encrypted
    property bool isConnecting: !telegram.connected
    property int onlineCount: {
        var result = 0;
        if (isChat) {
            var chatFull = telegram.chatFull(chat.id);
            var participants = chatFull.participants.participants;
            for(var i=0; i<participants.count; i++) {
                var userId = participants.at(i).userId;
                var tmpUser = telegram.user(userId);
                if (tmpUser.status.classType == userStatusType.typeUserStatusOnline)
                    result++;
            }
        }
        return result;
    }

    flickable: null

    property string title: {
        if (isChat) {
            return chat.title;
        } else {
            return user.firstName + " " + user.lastName;
        }
    }

    property string subtitle: {
        var result = "";
        var list = dialog.typingUsers;
        if (list.length > 0) {
            if (isChat) {
                for (var i = 0; i < list.length; i++) {
                    var userId = list[i];
                    var tmpUser = telegram.user(userId);
                    var name = tmpUser.firstName + " " + tmpUser.lastName
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
        return result;
    }

    signal clicked()

    contents: Rectangle {
        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
            rightMargin: units.gu(5)
            bottom: parent.bottom
        }

        Avatar {
            id: headerImage
            width: height
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

        //'Lock' image that is overlayed ontop of the Avatar conponent
        Image {
            id: secretChatImage
            anchors {
                left: headerImage.right
                leftMargin: -width-5
                top: headerImage.top
                topMargin: units.dp(2)
            }
            width: units.gu(1)
            height: units.gu(1.5)
            source: "qrc:/qml/files/lock.png"
            sourceSize: Qt.size(width, height)
            visible: header.isSecretChat
        }

        Label {
            id: titleText
            anchors {
                top: parent.top
                left: headerImage.right
                leftMargin: units.gu(1)
            }
            verticalAlignment: Text.AlignVCenter
            width: parent.width

            font.pixelSize: FontUtils.sizeToPixels("large")
            elide: Text.ElideRight
            wrapMode: Text.WordWrap
            maximumLineCount: 1
            text: isConnecting ? i18n.tr("Connecting...") : header.title.length === 0 ? i18n.tr("Telegram") : header.title

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
                        anchors.topMargin: units.gu(0.8)
                    }
                },
                State {
                    name: "subtitle"
                    PropertyChanges {
                        target: titleText
                        height: titleText.parent.height / 2
                        anchors.topMargin: units.gu(0.6)
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
            anchors {
                left: headerImage.right
                leftMargin: units.gu(1)
                bottom: parent.bottom
                bottomMargin: units.gu(0.4)
            }
            verticalAlignment: Text.AlignVCenter
            height: parent.height / 2
            width: parent.width

            fontSize: "small"
            elide: Text.ElideRight
            wrapMode: Text.WordWrap
            maximumLineCount: 1
            text: header.subtitle
            color: header.isOnline ? Colors.dark_blue : Colors.grey

            Connections {
                target: header
                onSubtitleChanged: {
                    subtitleText.opacity = 0;
                    subtitleText.text = "";
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
}
