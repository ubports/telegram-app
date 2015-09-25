import QtQuick 2.0
import Ubuntu.Components 1.2
import Ubuntu.Components.Popups 0.1
import Ubuntu.Components.ListItems 1.0 as ListItem
import AsemanTools.Controls 1.0 as Controls
import AsemanTools.Controls.Styles 1.0 as Styles

import Ubuntu.Content 1.0
import AsemanTools 1.0
import TelegramQML 1.0

import "qrc:/qml/components"

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

    onCurrentDialogChanged: {
        temp_hash.remove(privates.lastDialog)
        temp_hash.insert(privates.lastDialog, txt.text)

        var text = temp_hash.value(currentDialog)
        txt.text = text? text : ""
        txt.cursorPosition = txt.length

        privates.lastDialog = currentDialog
    }

    HashObject {
        id: temp_hash
    }

    QtObject {
        id: privates
        property Dialog lastDialog: telegramObject.nullDialog
        property variant suggestionItem
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
        anchors {
            left: parent.left
            right: parent.right
            bottom: parent.bottom
        }
        height: parent.height
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        visible: false // TODO is secret && state != 2
        color: "grey"
        fontSize: "medium"
        text: "" // TODO secret chat state
    }

    TextArea {
        id: txt

        property int oldLength: 0

        anchors {
            left: parent.left
            right: send_button_box.left
            bottom: parent.bottom
            margins: units.gu(1)
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

//    TextAreaCore {
//        id: txt
//        anchors {
//            left: parent.left
//            right: send_button_box.right
//            bottom: parent.bottom
//            margins: units.gu(1)
//        }
//        selectByMouse: true
//        selectionColor: Cutegram.currentTheme.masterColor
//        selectedTextColor: masterPalette.highlightedText
//        pickerEnable: true
//        color: Cutegram.currentTheme.sendFrameFontColor
//        font.family: Cutegram.currentTheme.sendFrameFont.family
//        font.pixelSize: Cutegram.currentTheme.sendFrameFont.pointSize*Devices.fontDensity
//        wrapMode: TextEdit.WrapAtWordBoundaryOrAnywhere
//        clip: true
//        //placeholder: qsTr("Write a message...")

//        //onCursorRectangleChanged: flick.ensureVisible(cursorRectangle)
//        onTextChanged: {
//            if (text.trim().length === 0)
//                text = ""

//            typing_update_timer.startTyping()
//        }
//        Keys.onPressed: {
//            if((event.key == Qt.Key_Enter || event.key == Qt.Key_Return) && privates.suggestionItem)
//            {
//                var result
//                if(privates.suggestionItem.isTagSuggestion) {
//                    result = privates.suggestionItem.currentTag()
//                } else {
//                    var uId = privates.suggestionItem.currentUserId()
//                    if(!uId) {
//                        if( event.modifiers == Qt.NoModifier )
//                            smsg.send()

//                        typing_timer.finishTyping()
//                        return
//                    }

//                    var userObj = telegramObject.user(uId)
//                    var userName = userObj.username
//                    result = userName
//                }

//                txt.selectWord()
//                txt.remove(txt.selectionStart, txt.selectionEnd)
//                txt.insert(txt.cursorPosition, result)

//                last_line_remover.restart()
//                privates.suggestionItem.destroy()
//                event.accepted = false
//            }
//            else
//            if( event.key == Qt.Key_Return || event.key == Qt.Key_Enter )
//            {
//                if( event.modifiers == Qt.NoModifier )
//                    smsg.send()

//                typing_timer.finishTyping()
//            }
//            else
//            if(event.key == 8204 && event.modifiers == Qt.ShiftModifier)
//            {
//                if(txt.selectedText.length!=0)
//                    txt.remove(txt.selectionStart, txt.selectionEnd)

//                var npos = txt.cursorPosition+1
//                txt.insert(txt.cursorPosition,"‌") //! Persian mid space character. you can't see it
//                txt.cursorPosition = npos

//                event.accepted = false
//            }
//            else
//            if(event.modifiers == Qt.ControlModifier && event.key == Qt.Key_C)
//            {
//                if(txt.selectedText.length == 0) {
//                    smsg.copyRequest()
//                    event.accepted = false
//                }
//            }
//            else
//            if(event.key == Qt.Key_At || event.key == Qt.Key_NumberSign)
//            {
//                if(!privates.suggestionItem) {
//                    if(event.key == Qt.Key_At)
//                        privates.suggestionItem = username_sgs_component.createObject(mainFrame)
//                    else
//                    if(event.key == Qt.Key_NumberSign)
//                        privates.suggestionItem = tags_sgs_component.createObject(mainFrame)

//                    var pnt = smsg.mapToItem(mainFrame, 0, 0)
//                    var pntY = pnt.y
//                    var pntX = pnt.x + txt.positionToRectangle(txt.cursorPosition).x + txt_frame.x

//                    privates.suggestionItem.x = pntX
//                    privates.suggestionItem.y = pntY - privates.suggestionItem.height
//                } else {
//                    privates.suggestionItem.keyword = ""
//                }
//            }
//            else
//            if(event.key == Qt.Key_Space || event.key == Qt.Key_Escape || event.key == Qt.Key_Delete)
//            {
//                if(privates.suggestionItem)
//                    privates.suggestionItem.destroy()
//            }
//            else
//            if(event.key == Qt.Key_Up && privates.suggestionItem)
//            {
//                privates.suggestionItem.up()
//                event.accepted = false
//            }
//            else
//            if(event.key == Qt.Key_Down && privates.suggestionItem)
//            {
//                privates.suggestionItem.down()
//                event.accepted = false
//            }
//            else
//            if((event.modifiers == Qt.NoModifier || event.modifiers == Qt.ShiftModifier) && privates.suggestionItem &&
//               event.key != Qt.Key_Left && event.key != Qt.Key_Right)
//            {
//                check_suggestion.restart()
//            }
//        }

//        Timer {
//            id: last_line_remover
//            interval: 1
//            onTriggered: {
//                var cpos = txt.cursorPosition
//                txt.text = txt.text.slice(0, cpos-1) + " " + txt.text.slice(cpos+1, txt.length)
//                txt.cursorPosition = cpos
//            }
//        }
//    }

    Component {
        id: attach_popover_component

        ActionSelectionPopover {
            id: attach_popover
            contentWidth: units.gu(22)
            focus: false
            z: 3
            delegate: ListItem.Standard {
                iconFrame: false
                iconSource: Qt.resolvedUrl(action.iconSource)
                focus: false
                text: action.text
            }
            actions: ActionList {
                Action {
                    iconSource: "qrc:/qml/files/attach_gallery.png"
                    // TRANSLATORS: Used in attach menu, when sending a photo to the conversation.
                    text: i18n.tr("Photo")
                    onTriggered: {
                        attach_popover.hide();
                        requestMedia(ContentType.Pictures);
                    }
                }
                Action {
                    iconSource: "qrc:/qml/files/attach_video.png"
                    // TRANSLATORS: Used in attach menu, when sending a video to the conversation.
                    text: i18n.tr("Video")
                    onTriggered: {
                        txt.forceActiveFocus();
                        attach_popover.hide();
                        requestMedia(ContentType.Videos);
                    }
                }
                Action {
                    iconSource: "qrc:/qml/files/attach_document.png"
                    // TRANSLATORS: Used in attach menu, when sending a file to the conversation.
                    text: i18n.tr("File")
                    onTriggered: {
                        txt.forceActiveFocus();
                        attach_popover.hide();
                        requestMedia(ContentType.All);
                    }
                }
            }
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
            bottom: parent.bottom
            right: parent.right
            rightMargin: units.gu(2)
        }
        width: buttons_row.width
        visible: !messagePlaceholder.visible

        Row {
            id: buttons_row
            spacing: units.gu(2)
            anchors.verticalCenter: send_button_box.verticalCenter

            Image {
                id: attach_button
                height: units.gu(3.5)
                fillMode: Image.PreserveAspectFit
                focus: false
                enabled: /* TODO isConnected && */ message.text.length === 0
                source: "qrc:/qml/files/attach.png"

                states: [
                    State {
                        name: "text"
                        when: txt.text.length > 0
                        PropertyChanges {
                            target: attach_button
                            width: 0
                            opacity: 0.0
                        }
                    },
                    State {
                        name: "notext"
                        when: txt.text.length === 0
                        PropertyChanges {
                            target: attach_button
                            width: units.gu(3.5)
                            opacity: 1.0
                        }
                    }
                ]

                transitions: [
                    Transition {
                        PropertyAnimation {
                            target: attach_button
                            properties: "width, opacity"
                            duration: UbuntuAnimation.FastDuration
                        }
                    }
                ]

                MouseArea {
                    anchors.fill: attach_button
                    onClicked: {
                        if (telegramObject.connected && actionsEnabled) {
                            txt.focus = false;
                            Qt.inputMethod.hide();
                            PopupUtils.open(attach_popover_component, attach_button);
                        }
                    }
                }
            }

//            Image {
//                id: emoji_btn
//                height: units.gu(3.5)
//                width: height
//                source: "qrc:/qml/files/emoji.png" // "qrc:/qml/files/emoji-light.png"

//                MouseArea {
//                    anchors.fill: attach_button
//                    onClicked: {
//                        var pnt = smsg.mapFromItem(emoji_btn,0,0)
//                        smsg.emojiRequest(pnt.x + width/2, pnt.y + height*0.2)
//                    }
//                }
//            }

            Image {
                id: send_button
                height: units.gu(3.5)
                width: height
                fillMode: Image.PreserveAspectFit
                focus: false
                enabled: isConnected
                source: enabled ? "qrc:/qml/files/send.png" : "qrc:/qml/files/send_disabled.png"

                MouseArea {
                    anchors.fill: send_button
                    onClicked: {
                        if (txt.text.length > 0) {
                            smsg.send()
                        }
                    }
                }
            }
        }
    }

    // TODO clipboard: txt.copy()

// TODO attach file
//    if( file.length == 0 )
//        return

//    var dId = isChat? currentDialog.peer.chatId : currentDialog.peer.userId
//    telegramObject.sendFile(dId, file)

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
}
