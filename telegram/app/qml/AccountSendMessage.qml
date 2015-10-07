import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.Popups 0.1
import Ubuntu.Components.ListItems 1.0 as ListItem
import AsemanTools.Controls 1.0 as Controls
import AsemanTools.Controls.Styles 1.0 as Styles

import Ubuntu.Content 1.1
import AsemanTools 1.0
import TelegramQML 1.0

import "components"

Rectangle {
    id: smsg
    height: txt.height + units.gu(2)
    z: 2
    color: "white"

    property Dialog currentDialog
    property real minimumHeight: Cutegram.currentTheme.sendFrameHeight*Devices.density

    property bool isChat: currentDialog? currentDialog.peer.chatId != 0 : false

    signal accepted( string text, int inReplyTo )
    signal emojiRequest(real x, real y)
    signal copyRequest()

    function checkForSharedContent() {
        if (transfer_helper.hasContent) {
            var url = String(transfer_helper.transfer.items[0].url)
            var isFile = url.indexOf("file://") == 0

            if (isFile) {
                var peerId = isChat ? currentDialog.peer.chatId : currentDialog.peer.userId
                var i = 0
                for ( ; i < transfer_helper.count; i++) {
                    url = String(transfer_helper.transfer.items[i].url)
                    var path = url.substring("file://".length, url.length)

                    if (transfer_helper.transfer.contentType === ContentType.Pictures ||
                        transfer_helper.transfer.contentType === ContentType.Videos) {
                        console.log("sending media attachment")
                        send_file_timer.send(peerId, path, false, false)
                    } else {
                        console.log("sending document attachment")
                        send_file_timer.send(peerId, path, true, false)
                    }
                }
            } else {
                var text = String(transfer_helper.transfer.items[0].text)
                var message = url.length > 0 ? url : text
                txt.text = message
            }
            clearSharedContent()
        }
    }

    onCurrentDialogChanged: {
        temp_hash.remove(privates.lastDialog)
        temp_hash.insert(privates.lastDialog, txt.text)

        var text = temp_hash.value(currentDialog)
        txt.text = text? text : ""
        txt.cursorPosition = txt.length

        privates.lastDialog = currentDialog

        checkForSharedContent()
    }

    HashObject {
        id: temp_hash
    }

    QtObject {
        id: privates
        property Dialog lastDialog: telegramObject.nullDialog
        property variant suggestionItem
        property variant attachmentItem
    }

    Timer {
        id: typing_timer
        interval: 3000
        onTriggered: finishTyping()

        function finishTyping() {
            var peerId = isChat? currentDialog.peer.chatId : currentDialog.peer.userId
            if(peerId != 0)
                telegramObject.messagesSetTyping(peerId, false)
            typing_update_timer.stop()
        }
    }

    Timer {
        id: typing_update_timer
        interval: 3000
        triggeredOnStart: true
        onTriggered: {
            var peerId = isChat? currentDialog.peer.chatId : currentDialog.peer.userId
            if(peerId != 0)
                telegramObject.messagesSetTyping(peerId, true)
        }

        function startTyping() {
            typing_timer.restart()
            if(running)
                return

            typing_update_timer.restart()
        }
    }

    Label {
        id: messagePlaceholder

        property bool isWaiting: enchat && enchat.classType == encryptedTypes.typeEncryptedChatWaiting
        property bool isDiscarded: enchat && enchat.classType == encryptedTypes.typeEncryptedChatDiscarded

        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: parent.height
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        visible: enchat && (isWaiting || isDiscarded)
        color: "grey"
        fontSize: "medium"
        text: enchat ? delegate_utils.getSecretChatState(encryptedTypes, enchat.classType) : ""
    }

    TextArea {
        id: txt

        property int oldLength: 0

        anchors {
            left: parent.left
            right: send_button_box.left
            bottom: parent.bottom
            margins: units.gu(1)
            rightMargin: 0
        }

        // This value is to avoid letter and underline being cut off.
        height: units.gu(4.3)
        enabled: true // TODO isConnected
        visible: !messagePlaceholder.visible
        // TRANSLATORS: Placeholder for the message input text area.
        placeholderText: i18n.tr("Type message")
        inputMethodHints: Qt.ImhNoPredictiveText

        autoSize: true
        maximumLineCount: 4
        Keys.onReturnPressed: {
            if (!telegramObject.connected) {
                event.accepted = true;
                return;
            }
            if (Cutegram.sendWithEnter) {
                Qt.inputMethod.commit();
                if (txt.text.length > 0) {
                    smsg.send()
                }
            } else {
                event.accepted = false;
            }
        }
        onLengthChanged: {
            if (text.trim().length === 0) text = "";

            if (/* !typingTimer.running && */ length > oldLength) {
                // send typing notification / start timer
            }
            oldLength = length;
        }
    }

    MediaImport {
        id: mediaImporter

        onMediaReceived: {
            var filePath = String(mediaUrl).replace('file://', '');
            console.log("media path received: " + filePath);
            var dId = isChat ? currentDialog.peer.chatId : currentDialog.peer.userId
            if (contentType === ContentType.Pictures) {
                send_file_timer.send(dId, filePath, false, false);
            } else if (contentType === ContentType.Videos) {
                send_file_timer.send(dId, filePath, false, false);
            } else {
                send_file_timer.send(dId, filePath, true, false);
            }
        }
    }

    Item {
        id: send_button_box
        anchors {
            top: parent.top
            right: parent.right
            bottom: parent.bottom
        }
        width: send_mouse_area.width
        visible: !messagePlaceholder.visible

        MouseArea {
            id: send_mouse_area
            height: parent.height
            width: units.gu(6)
            enabled: telegramObject.connected

            states: [
                State {
                    name: "send"
                    when: txt.text.length > 0
                    PropertyChanges {
                        target: send_image
                        source: Qt.resolvedUrl(send_mouse_area.enabled ? "qrc:/qml/files/send.png" : "qrc:/qml/files/send_disabled.png")
                    }
                },
                State {
                    name: "attach"
                    when: txt.text.length == 0
                    PropertyChanges {
                        target: send_image
                        source: Qt.resolvedUrl("qrc:/qml/files/attach.png")
                    }
                }
            ]

            onClicked: {
                if (!telegramObject.connected) return;

                if (state == "attach") {
                    Haptics.play()
                    if (!privates.attachmentItem) {
                        privates.attachmentItem = attach_panel_component.createObject(smsg)
                    }
                    privates.attachmentItem.isShown = true;
                } else if (state == "send" && txt.text.length > 0) {
                    Haptics.play()
                    smsg.send()
                }
            }

            CrossFadeImage {
                id: send_image
                anchors.centerIn: parent
                height: units.dp(22)
                width: height
                fillMode: Image.PreserveAspectFit
                fadeStyle: "cross"
                source: Qt.resolvedUrl("qrc:/qml/files/attach.png")
            }
        }

    }

    function insertText( str ) {
        if( txt.selectedText.length != 0 )
            txt.remove(txt.selectionStart, txt.selectionEnd)

        txt.insert( txt.cursorPosition, str )
    }

    function send() {
//        if( currentDialog == telegramObject.nullDialog )
//            return
        var msg = txt.text.trim()
        if( msg == "" )
            return

//        if(Cutegram.autoEmojis)
//            msg = emojis.convertSmiliesToEmoji(msg)
//        if(privates.suggestionItem)
//            privates.suggestionItem.destroy()

        smsg.accepted(msg, 0);//messageReply.replyMessage? messageReply.replyMessage.id : 0)
//        messageReply.discard()
        txt.text = ""
    }

    function replyTo(msgId) {
        messageReply.replyMessage = telegramObject.message(msgId)
    }

    function requestMedia(mediaType) {
        Qt.inputMethod.hide();
        mediaImporter.contentType = mediaType;
        mediaImporter.requestMedia();
    }

    Timer {
        id: check_suggestion
        interval: 20
        onTriggered: {
            txt.selectWord()
            privates.suggestionItem.keyword = txt.selectedText
            txt.deselect()
        }
    }

    Item {
        width: parent.width
        height: messageReply.height
        anchors.bottom: parent.top
        visible: messageReply.replyMessage

        Rectangle {
            anchors.fill: parent
            color: smsg.color
            opacity: 0.8
        }

        MessageReplyItem {
            id: messageReply
            telegram: telegramObject

            function discard() {
                messageReply.replyMessage = messageReply.message
            }
        }

        Button {
            width: height
            anchors.right: parent.right
            anchors.rightMargin: 4*Devices.density
            anchors.verticalCenter: parent.verticalCenter
            //iconSource: "files/close.png"
            text: i18n.tr("Close")
            onClicked: messageReply.discard()
        }
    }

    Timer {
        id: send_file_timer

        property int dialogId: 0
        property string path: ""
        property bool document: false
        property bool audio: false

        function send(dialogId, filePath, forceDocument, forceAudio) {
            stop();
            send_file_timer.dialogId = dialogId;
            send_file_timer.document = forceDocument ? forceDocument : false;
            send_file_timer.audio = forceAudio ? forceAudio : false;
            send_file_timer.path = filePath;
            restart();
        }

        interval: 1000
        repeat: false
        onTriggered: {
            telegramObject.sendFile(dialogId, path, document, audio);
        }
    }

    Component {
        id: username_sgs_component
        UserNameSuggestionMenu {
            telegram: telegramObject
            dialog: currentDialog
            property bool isTagSuggestion: false
        }
    }

    Component {
        id: tags_sgs_component
        TagSuggestionMenu {
            telegram: telegramObject
            property bool isTagSuggestion: true
        }
    }

    Component {
        id: attach_panel_component

        AttachPanel {
            onPhotoRequested: requestMedia(ContentType.Pictures)
            onVideoRequested: requestMedia(ContentType.Videos)
            onFileRequested: requestMedia(ContentType.All)
        }
    }
}
