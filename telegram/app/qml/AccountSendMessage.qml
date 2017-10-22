import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components 1.3 as UC
import Ubuntu.Components.Popups 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import Ubuntu.Connectivity 1.0
import AsemanTools.Controls 1.0 as Controls
import AsemanTools.Controls.Styles 1.0 as Styles

import Ubuntu.Content 1.3
import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

import "components"

Rectangle {
    id: smsg
    height: txt.height + units.gu(2)
    z: 2
    color: "white"

    property Dialog currentDialog
    property bool isChat: currentDialog != telegramObject.nullDialog ? currentDialog.peer.chatId != 0 : false
    property bool isChannel: currentDialog != telegramObject.nullDialog ? currentDialog.peer.channelId != 0 : false

    signal accepted( string text, int inReplyTo )
    signal copyRequest()

    function focusOut() {
        Qt.inputMethod.hide();
        txt.focus = false;
        if (privates.emojiItem)
            privates.emojiItem.destroy();
        if (privates.attachmentItem &&
            privates.attachmentItem.isShown)
            privates.attachmentItem.isShown = false;
    }

    function checkForSharedContent() {
        if (transfer_helper.hasContent) {
            var url = String(transfer_helper.transfer.items[0].url)
            var isFile = url.indexOf("file://") == 0

            if (isFile) {
                var peerId = isChannel ? currentDialog.peer.channelId : isChat ? currentDialog.peer.chatId : currentDialog.peer.userId
                var i = 0
                var paths = []
                for ( ; i < transfer_helper.count; i++) {
                    url = String(transfer_helper.transfer.items[i].url)
                    paths.push(url)
                }
                if (transfer_helper.transfer.contentType === ContentType.Pictures ||
                    transfer_helper.transfer.contentType === ContentType.Videos) {
                    console.log("sending media attachments")
                    send_files_timer.send(peerId, paths, false, false)
                } else {
                    console.log("sending document attachments")
                    send_files_timer.send(peerId, paths, true, false)
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

        // For some reason, smsg.isChat binding is failing. This is required to make
        // sharing from gallery with group chats work..
        isChat = currentDialog != telegramObject.nullDialog ? currentDialog.peer.chatId != 0 : false
        isChannel = currentDialog != telegramObject.nullDialog ? currentDialog.peer.channelId != 0 : false

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
        property variant emojiItem

        // Voice message sending
        property var audioItem: 0
        property bool audioRecorded: audioItem != 0
        property alias recording: audioRecordingBar.recording

        property int buttonsOpacity: {
            if (privates.recording) {
                // we need to fade the buttons in when dragging
                return dragTarget.dragAmount
            } else if (privates.audioRecorded) {
                return 0
            } else {
                return 1
            }
        }
    }

    Timer {
        id: typing_timer
        interval: 3000
        onTriggered: finishTyping()

        function finishTyping() {
            var peerId = isChannel? currentDialog.peer.channelId : isChat? currentDialog.peer.chatId : currentDialog.peer.userId
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
            var peerId = isChannel? currentDialog.peer.channelId : isChat? currentDialog.peer.chatId : currentDialog.peer.userId
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
        objectName: "sendMessageTextArea"

        property int oldLength: 0

        anchors {
            left: privates.recording ? anchorPoint.right: parent.left
            right: focus && (text.length > 0 || txt.inputMethodComposing) ? send_button_box.left : sticker_button_box.left
            bottom: parent.bottom
            margins: units.gu(1)
            rightMargin: 0
        }

        opacity: privates.buttonsOpacity
        Behavior on opacity { UbuntuNumberAnimation {} }
        visible: opacity > 0 && !messagePlaceholder.visible

        // This value is to avoid letter and underline being cut off.
        height: units.gu(4.3)

        // To work on desktop change the following line to:
        // enabled: True
        enabled: Connectivity.online && telegramObject.connected

        // TRANSLATORS: Placeholder for the message input text area.
        placeholderText: i18n.tr("Type message")

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
        onDisplayTextChanged: {
            var lastAtPosition = displayText.lastIndexOf("@");
            var lastHashPosition = displayText.lastIndexOf("#");
            var lastSpacePosition = displayText.lastIndexOf(" ");
            if (!privates.suggestionItem && lastAtPosition == lastSpacePosition + 1) {
                privates.suggestionItem = username_sgs_component.createObject(send_msg)
                privates.suggestionItem.y = -privates.suggestionItem.height
                privates.suggestionItem.objectName = "username";

                privates.suggestionItem.selected.connect(function() {
                    var uId = privates.suggestionItem.currentUserId()
                    var userObj = telegramObject.user(uId)
                    var userName = userObj.username

                    txt.selectWord()
                    txt.remove(txt.selectionStart, txt.selectionEnd)
                    txt.insert(txt.cursorPosition, userName + " ")
                    txt.deselect()

                    privates.suggestionItem.destroy()
                })
            } else if (!privates.suggestionItem && lastHashPosition == lastSpacePosition + 1) {
                privates.suggestionItem = tags_sgs_component.createObject(send_msg)
                privates.suggestionItem.y = -privates.suggestionItem.height
                privates.suggestionItem.objectName = "tag";

                privates.suggestionItem.selected.connect(function() {
                    var tag = privates.suggestionItem.currentTag()

                    txt.selectWord()
                    txt.remove(txt.selectionStart, txt.selectionEnd)
                    txt.insert(txt.cursorPosition, tag + " ")
                    txt.deselect()

                    privates.suggestionItem.destroy()
                })

            } else if (privates.suggestionItem &&
                       ((privates.suggestionItem.objectName === "username" && (lastSpacePosition > lastAtPosition || lastAtPosition == -1)) ||
                       (privates.suggestionItem.objectName === "tag" && (lastSpacePosition > lastHashPosition || lastHashPosition == -1)))
                       ) {
                privates.suggestionItem.destroy();
            } else if (privates.suggestionItem) {
                check_suggestion.restart();
            }
        }
        onFocusChanged: {
            if (focus && privates.emojiItem) {
                privates.emojiItem.destroy();
            }
        }
    }

    MediaImport {
        id: mediaImporter

        onMediaReceived: {
            var peerId = isChannel? currentDialog.peer.channelId : isChat ? currentDialog.peer.chatId : currentDialog.peer.userId
            if (contentType === ContentType.Pictures ||
                contentType === ContentType.Videos) {
                send_files_timer.send(peerId, urls, false, false)
            } else {
                send_files_timer.send(peerId, urls, true, false)
            }
        }
    }

    Item {
        id: sticker_button_box
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: attachments_button_box.left
        }
        width: units.gu(6)

        opacity: privates.buttonsOpacity
        Behavior on opacity { UbuntuNumberAnimation {} }
        visible: opacity > 0 && !messagePlaceholder.visible && (!txt.focus || (txt.text.length == 0 && !txt.inputMethodComposing))

        AbstractButton {
            anchors.fill: parent
            activeFocusOnPress: false
            onClicked: {

                // To work on desktop change the following line to:
                // if (!telegramObject.connected) return
                if (!telegramObject.connected || !Connectivity.online) return

                if (!privates.emojiItem) {
                    smsg.focusOut();
                    privates.emojiItem = emoticons_component.createObject(send_msg)
                    privates.emojiItem.y = -privates.emojiItem.height
                } else {
                    privates.emojiItem.destroy()
                }
            }
        }

        Image {
            id: sticker_image
            anchors.centerIn: parent
            height: units.gu(2.5)
            width: height
            sourceSize: Qt.size(width, height)
            fillMode: Image.PreserveAspectFit
            source: Qt.resolvedUrl("qrc:/qml/files/msg_panel_stickers.svg")
            visible: !messagePlaceholder.visible
        }
    }

    Item {
        id: attachments_button_box
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: send_button_box.left
        }
        width: units.gu(6)

        opacity: privates.buttonsOpacity
        Behavior on opacity { UbuntuNumberAnimation {} }
        visible: opacity > 0 && !messagePlaceholder.visible && (!txt.focus || (txt.text.length == 0 && !txt.inputMethodComposing))

        AbstractButton {
            anchors.fill: parent
            activeFocusOnPress: false
            onClicked: {

                // To work on desktop change the following line to:
                // if (!telegramObject.connected) return
                if (!telegramObject.connected || !Connectivity.online) return

                Haptics.play()
                if (!privates.attachmentItem) {
                    var txtWasFocused = txt.focus;
                    smsg.focusOut();
                    privates.attachmentItem = attach_panel_component.createObject(smsg, { isShown: txtWasFocused })
                }
                privates.attachmentItem.isShown = true;
            }
        }

        Icon {
            id: attach_image
            anchors.centerIn: parent
            height: units.dp(22)
            width: height
            name: "attachment"
            visible: !messagePlaceholder.visible
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

        // To work on desktop change the following line to:
        // enabled: True
        enabled: Connectivity.online && telegramObject.connected

        MouseArea {
            id: send_mouse_area
            objectName: "sendMouseArea"
            height: parent.height
            width: units.gu(6)
            enabled: telegramObject.connected

            states: [
                State {
                    name: "send"
                    when: txt.inputMethodComposing || txt.text.length > 0 || privates.audioRecorded
                    PropertyChanges {
                        target: send_image
                        name: "send"
                        color: send_mouse_area.enabled ? UC.UbuntuColors.blue : UC.UbuntuColors.silk
                    }
                },
                State {
                    name: "send-audio"
                    when: !txt.inputMethodComposing && txt.text.length == 0 && !privates.audioRecorded
                    PropertyChanges {
                        target: send_image
                        name: "audio-input-microphone-symbolic"
                    }
                }
            ]

            onClicked: {
                Qt.inputMethod.commit();

                // To work on desktop change the following line to:
                // if (!telegramObject.connected) return
                if (!telegramObject.connected || !Connectivity.online) return

                if (state == "send" && txt.text.length > 0) {
                    Haptics.play()
                    smsg.send()
                }
                else if (state == "send" && privates.audioRecorded && audioPlaybackBar.visible) {
                    var peerId = isChannel? currentDialog.peer.channelId : isChat ? currentDialog.peer.chatId : currentDialog.peer.userId
                    var urls = []
                    urls.push(privates.audioItem)
                    console.log("sending audio attachment")
                    send_files_timer.send(peerId, urls, false, true)

                    privates.audioItem = 0
                }
                else if (state == "send-audio" &&
                         !audioRecordingBar.resourceError &&
                         !audioRecordingBar.codecError &&
                         !privates.audioRecorded) {
                    PopupUtils.open(recorderWarningPopover, send_button_box)
                }
            }

            Icon {
                id: send_image
                anchors.centerIn: parent
                height: units.dp(22)
                width: height
                name: "audio-input-microphone-symbolic"
            }

            onPressed: {
                if (state == "send-audio")
                    audioRecordingBar.startRecording()
            }

            onReleased: {
                if (state == "send-audio") {
                    audioRecordingBar.stopRecording()

                    // if dragged past the threshold, cancel
                    if (dragTarget.dragAmount >= 0.5) {
                        Cutegram.deleteFile(privates.audioItem)
                        privates.audioItem = 0
                    }
                }
                dragTarget.reset()
            }

            // drag-to-cancel
            drag.target: dragTarget
            drag.axis: Drag.XAxis
            drag.minimumX: smsg.x
            drag.maximumX: send_button_box.x
        }

    }

    function insertText( str ) {
        if( txt.selectedText.length != 0 )
            txt.remove(txt.selectionStart, txt.selectionEnd)

        txt.insert( txt.cursorPosition, str )
    }

    function send() {
        var msg = txt.text.trim()
        if( msg == "" )
            return

        smsg.accepted(msg, messageReply.replyMessage? messageReply.replyMessage.id : 0)
        messageReply.discard()
        txt.text = ""
    }

    function replyTo(msgId) {
        messageReply.replyMessage = telegramObject.message(msgId)
    }

    function requestMedia(mediaType) {
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
        }

        MessageReplyItem {
            id: messageReply
            telegram: telegramObject
            maximumWidth: parent.width - units.gu(6)

            function discard() {
                messageReply.replyMessage = messageReply.message
            }
        }

        AbstractButton {
            width: units.gu(4)
            height: width
            anchors.right: parent.right
            anchors.rightMargin: units.gu(1)
            anchors.verticalCenter: parent.verticalCenter
            Icon {
                anchors.fill: parent
                name: "close"
            }
            onClicked: messageReply.discard()
        }
    }

    Timer {
        id: send_files_timer

        property int tries: 0
        property int dialogId: 0
        property var urls: []
        property bool document: false
        property bool audio: false

        function send(peerId, urls, forceDocument, forceAudio) {
            stop();
            tries = 0
            send_files_timer.dialogId = peerId
            send_files_timer.urls = urls
            send_files_timer.document = forceDocument ? forceDocument : false
            send_files_timer.audio = forceAudio ? forceAudio : false
            restart();
        }

        interval: 1000
        repeat: true
        onTriggered: {
            if (telegramObject.connected) {
                stop();
                if (urls.length > 0) {
                    var i = 0
                    for ( ; i < urls.length; i++) {
                        var path = String(urls[i]).replace("file://", "")
                        telegramObject.sendFile(dialogId, path, document, audio)
                    }
                }
            } else {
                tries += 1
                if (tries >= 3) {
                    consolelog("attachment(s) not sent, giving up");
                    stop();
                }
            }
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

    StickerFileManager {
        id: sticker_file_manager
        telegram: telegramObject
    }

    Component {
        id: emoticons_component
        Emoticons {
            id: emoticons
            telegram: telegramObject
            onEmojiSelected: {
                send_msg.insertText(code)
                emoticons.destroy();
            }
            onStickerSelected: {
                var dId = currentDialog.peer.userId
                if(!dId)
                    dId = currentDialog.peer.chatId
                if(!dId)
                    dId = currentDialog.peer.channelId

                sticker_file_manager.sendSticker(dId, path)
                emoticons.destroy();
            }
            onStickerDocumentSelected: {
                var dId = currentDialog.peer.userId
                if(!dId)
                    dId = currentDialog.peer.chatId
                if(!dId)
                    dId = currentDialog.peer.channelId

                telegramObject.forwardDocument(dId, document)
                emoticons.destroy();
            }
        }
    }

    // Voice message sending
    Component {
        id: recorderWarningPopover

        Popover {
            id: popover
            Column {
                id: containerLayout
                anchors {
                    left: parent.left
                    top: parent.top
                    right: parent.right
                }
                ListItem.Standard {
                    text: {
                        if (audioRecordingBar.codecError) // gstreamer opusenc plugin is not installed
                            return i18n.tr("Audio attachment not supported yet ;(")
                        else
                            return i18n.tr("You have to press and hold the record icon")
                    }
                    onClicked: {
                        PopupUtils.close(popover)
                    }
                }
                Connections {
                    target: txt
                    onTextChanged: PopupUtils.close(popover)
                }
            }
        }
    }

    Item {
        id: audioPlaybackBar

        anchors {
            left: parent.left
            right: send_button_box.left
            verticalCenter: parent.verticalCenter
        }

        opacity: privates.audioRecorded ? 1.0 : 0.0
        Behavior on opacity { UbuntuNumberAnimation {} }
        visible: opacity > 0

        signal resetRequested()
        onResetRequested: {
            privates.audioItem = 0
        }

        TransparentButton {
            id: closeButton
            objectName: "closeButton"

            anchors {
                left: parent.left
                leftMargin: units.gu(2)
                verticalCenter: parent.verticalCenter
            }

            iconName: "close"

            onClicked: {
                Cutegram.deleteFile(privates.audioItem)
                audioPlaybackBar.resetRequested()
            }
        }

        MediaPlayerItem {
            id: audioPreview

            anchors {
                left: closeButton.right
                right: parent.right
                leftMargin: units.gu(1)
                verticalCenter: parent.verticalCenter
            }
            height: smsg.height-units.gu(2)

            filePath: privates.audioRecorded ? privates.audioItem : ""
            isInsideBar: true
        }
    }

    AudioRecordingBar {
        id: audioRecordingBar

        telegram: telegramObject
        signal totalUploadedPercentChanged()

        anchors {
            left: parent.left
            right: anchorPoint.left
            verticalCenter: parent.verticalCenter
        }

        buttonOpacity: privates.recording ? 1 - dragTarget.dragAmount : 0

        onAudioRecorded: {
            privates.audioItem = audio
        }

        onCodecErrorChanged: {
            if (codecError) {
                PopupUtils.open(recorderWarningPopover, send_button_box)
            }
        }

        onResourceErrorChanged: {
            if (resourceError) {
                PopupUtils.open(Qt.resolvedUrl("qrc:/qml/ui/dialogs/ConfirmationDialog.qml"),
                    null, {
                        text: i18n.tr("Please grant microphone access on System Settings > Security & Privacy."),
                        onAccept: function() {
                            Qt.openUrlExternally("settings:///system/security-privacy")
                        }
                    }
                );
            }
        }

        Component.onCompleted: {
            telegram.totalUploadedPercentChanged.connect(audioRecordingBar.totalUploadedPercentChanged);
        }

        Component.onDestruction: {
            telegram.totalUploadedPercentChanged.disconnect(audioRecordingBar.totalUploadedPercentChanged);
        }

        onTotalUploadedPercentChanged: {
            if (telegram.totalUploadedPercent == 100 &&
                !privates.audioRecorded &&
                !privates.recording)
            {
                console.log("cleaning temporary audio files");
                Cutegram.deleteTemporaryFiles(telegram.phoneNumber, "audio");
            }
        }
    }

    Item {
        id: dragTarget

        property real recordingX: send_button_box.x
        property real normalX: sticker_button_box.x
        property real delta: recordingX - normalX
        property real dragAmount: 1 - (x - normalX) / (delta > 0 ? delta : 0.0001)
        x: recordingX
        width: 0

        function reset() {
            x = Qt.binding(function(){return recordingX})
        }
    }

    Item {
        id: anchorPoint
        x: (privates.recording || privates.audioRecorded) ? dragTarget.x : dragTarget.normalX
        Behavior on x { UbuntuNumberAnimation { } }
    }
}
