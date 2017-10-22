import QtQuick 2.2
import Ubuntu.Components 0.1

import TelegramQML 1.0

import "../js/avatar.js" as Avatar

Item {
    id: avatar

    width: height
    height: units.gu(4)

    property Telegram telegram
    property Dialog dialog

    property bool isChat: dialog.peer.chatId !== 0
    property bool isChannel: dialog.peer.channelId !== 0
    property User user: dialog
            ? telegram.user(dialog.encrypted ? enChatUid : dialog.peer.userId)
            : telegram.nullUser
    property Chat chat: dialog
            ? telegram.chat(isChannel ? dialog.peer.channelId : dialog.peer.chatId)
            : telegram.nullChat
    property int avatarId: user ? user.id : (chat ? chat.id : 0)

    property EncryptedChat enchat: telegram.encryptedChat(dialog ? dialog.peer.userId : 0)
    property int enChatUid: enchat.adminId === telegram.me ? enchat.participantId : enchat.adminId

    property string title: isChat || isChannel ? chat.title : user.firstName + " " + user.lastName
    property bool hasThumb: file_handler.thumbPath != ""
    property bool ubuntuShape: true

    signal clicked()

    FileHandler {
        id: file_handler
        target: isChat || isChannel ? chat : user
        telegram: avatar.telegram
        defaultThumbnail: {
            if (user.id === telegram.cutegramId) {
                return ""// TODO return Telegram for Ubuntu icon
            }
            return ""; //isChat || isChannel ? "files/group.png" : "files/user.png";
        }
    }

    // Placed under shape, so it's hidden
    ShaderEffectSource {
        id: source
        anchors.centerIn: parent
        width: 1
        height: 1
        sourceItem: hasThumb ? photoImage : rectImage
    }

    Image {
        id: photoImage
        anchors.centerIn: parent
        width: hasThumb ? parent.width : units.gu(4)
        height: hasThumb ? parent.height : units.gu(4)
        antialiasing: true
        asynchronous: true
        //source: !hasChatPhoto && !hasChatId ? logo : chatPhoto
        source: file_handler.thumbPath
        sourceSize: Qt.size(width, height)
        visible: hasThumb && !ubuntuShape
    }

    Rectangle {
        id: rectImage
        anchors.fill: parent
        color: !hasThumb ? Avatar.getColor(avatarId) : "#00000000"
        visible: !hasThumb && !ubuntuShape
    }

    Shape {
        id: shape
        image: source
        anchors.fill: parent
        visible: ubuntuShape
    }

    Label {
        id: initialsLabel
        anchors.centerIn: parent
        fontSize: "large"
        color: "white"
        text: !hasThumb ? getInitialsFromTitle(title) : ""
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: {
            mouse.accepted = true;
            avatar.clicked();
        }
    }

    function getInitialsFromTitle(title) {
        var text = "";
        if (title.length > 0) {
            text = title[0];
        }
        if (title.indexOf(" ") > -1) {
            var lastchar = "";
            for (var a = title.length-1; a > 0; a--) {
                if (lastchar !== "" && title[a] === " ") {
                    break;
                }
                lastchar = title[a];
            }
            text += lastchar;
        }
        return text.toUpperCase();
    }
}
