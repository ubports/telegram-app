import QtQuick 2.4
import Ubuntu.Components 1.3
import TelegramQML 1.0

Rectangle {
    id: add_contact_header

    property real typeUserForeign: 0x75cf7a8

    property Telegram telegramObject
    property Dialog currentDialog: telegramObject.nullDialog

    property bool isChat: currentDialog ? currentDialog.peer.chatId != 0 : false
    property bool isChannel: currentDialog ? currentDialog.peer.channelId != 0 : false
    property User user: telegramObject.user(currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)
    property int dialogId: isChannel ? currentDialog.peer.channelId : isChat ? currentDialog.peer.chatId : (currentDialog.encrypted ? enChatUid : currentDialog.peer.userId)

    property EncryptedChat enchat: telegramObject.encryptedChat(currentDialog.peer.userId)
    property int enChatUid: enchat.adminId==telegramObject.me ? enchat.participantId : enchat.adminId

    property bool hasPhone: user == telegramObject.nullUser ? false : user.phone != ""
    property bool isForeign: user == telegramObject.nullUser ? false : user.classType == typeUserForeign

    function addContact() {
        pageStack.addPageToNextColumn(page, add_contact_page_component, {
                "telegram": telegramObject,
                "user": user
        });
    }

    width: units.gu(20)
    height: units.gu(5)
    color: mouse_area.pressed ? Qt.rgba(0, 0, 0, 0.1) : "white"
    z: 1
    visible: !isChat && !isChannel && hasPhone && isForeign

    Label {
        anchors.centerIn: parent
        fontSize: "medium"
        text: i18n.tr("Add to contacts")
    }

    MouseArea {
        id: mouse_area

        anchors.fill: parent
        onClicked: {
            Haptics.play()
            addContact()
        }
    }
}
