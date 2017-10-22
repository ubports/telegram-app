import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Connectivity 1.0

import "qrc:/qml/js/avatar.js" as Avatar
import "qrc:/qml/js/time.js" as Time
import "qrc:/qml/js/colors.js" as Colors

import TelegramQML 1.0

PageHeader {
    id: header

    property Telegram telegram
    property Dialog dialog

    property bool isChat: dialog ? dialog.peer.chatId != 0 : false
    property bool isChannel: dialog ? dialog.peer.channelId != 0 : false
    property User user: telegram.user(dialog.encrypted ? enChatUid : dialog.peer.userId)
    property Chat chat: telegram.chat(isChannel ? dialog.peer.channelId : dialog.peer.chatId)
    property int dialogId: isChannel ? dialog.peer.channelId : isChat ? dialog.peer.chatId : (dialog.encrypted ? enChatUid : dialog.peer.userId)

    property EncryptedChat enchat: telegram.encryptedChat(dialog.peer.userId)
    property int enChatUid: enchat.adminId==telegram.me ? enchat.participantId : enchat.adminId

    property bool isOnline: !isChat && !isChannel && user.status.classType == userStatusType.typeUserStatusOnline
    property bool isSecretChat: dialog.encrypted
    property bool isConnecting: !telegram.connected
    property int onlineCount: {
        var result = 0;
        if (isChat || isChannel) {
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
        if (isChat || isChannel) {
            return chat.title;
        } else {
            return user.firstName + " " + user.lastName;
        }
    }

    property string subtitle: {
        var result = "";
        var list = dialog.typingUsers;
        if (list.length > 0) {
            if (isChat || isChannel) {
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
            if (isChat || isChannel) {
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

    contents: Item {
        anchors.fill: parent

        Avatar {
            id: headerImage
            width: height
            anchors {
                top: parent.top
                topMargin: units.dp(3)
                left: parent.left
                bottom: parent.bottom
                bottomMargin: units.dp(3)
                rightMargin: units.gu(1)
            }
            telegram: header.telegram
            dialog: header.dialog
        }

        Rectangle {
            id: connectingIndicator
            anchors.fill: headerImage
            visible: isConnecting || !Connectivity.online
            color: "white"
            Icon {
                name: isConnecting? "sync-updating" : "sync-paused"
                anchors.fill: parent
                opacity: parent
            }
            SequentialAnimation {
                running: visible
                loops: Animation.Infinite
                PropertyAnimation { target: connectingIndicator; property: "opacity"; to: 1; duration: 500 }
                PropertyAnimation { target: connectingIndicator; property: "opacity"; to: 0.0; duration: 1000 }
            }
        }

        Icon {
            id: secret_chat_icon
            visible: header.isSecretChat
            name: "network-secure"
            anchors {
                top: parent.top
                left: headerImage.right
                topMargin: units.dp(5)
                bottomMargin: units.dp(5)
                bottom: titleText.bottom
            }
            width: height
        }

        Label {
            id: titleText
            anchors {
                top: parent.top
                left: secret_chat_icon.visible? secret_chat_icon.right : headerImage.right
                leftMargin: units.gu(1)
                right: parent.right
            }
            verticalAlignment: Text.AlignVCenter

            font.pixelSize: FontUtils.sizeToPixels("large")
            elide: Text.ElideRight
            wrapMode: Text.WrapAnywhere
            maximumLineCount: 1
            text: header.title.length === 0 ? i18n.tr("Telegram") : header.title

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
                        anchors.topMargin: units.gu(0.7)
                    }
                },
                State {
                    name: "subtitle"
                    PropertyChanges {
                        target: titleText
                        height: titleText.parent.height / 2
                        anchors.topMargin: units.gu(0.35)
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
                bottomMargin: units.gu(0.15)
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
