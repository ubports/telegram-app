import QtQuick 2.4
import Ubuntu.Components 1.3
import AsemanTools 1.0
import TelegramQML 1.0

Item {
    id: message_action
    width: 100
    height: column.height + units.gu(2)

    property Message message
    property MessageAction action: message.action
    property User user: telegramObject.user(action.userId)
    property User fromUser: telegramObject.user(message.fromId)
    property FileLocation imgLocation: action.photo.sizes.first? action.photo.sizes.first.location : telegramObject.nullLocation

    property real typeMessageActionEmpty: 0xb6aef7b0
    property real typeMessageActionChatDeletePhoto: 0x95e3fbef
    property real typeMessageActionChatCreate: 0xa6638b9a
    property real typeMessageActionChatEditTitle: 0xb5a1ce5a
    property real typeMessageActionChatEditPhoto: 0x7fcb13a8
    property real typeMessageActionGeoChatCreate: 0x6f038ebc
    property real typeMessageActionChatDeleteUser: 0xb2ae9b0c
    property real typeMessageActionChatAddUser: 0x5e3cfc4b
    property real typeMessageActionGeoChatCheckin: 0xc7d53de

    property bool hasAction: action.classType != typeMessageActionEmpty

    onImgLocationChanged: {
        if(imgLocation == telegramObject.nullLocation)
            return

        telegramObject.getFile(imgLocation)
    }

    Column {
        id: column
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.verticalCenter: parent.verticalCenter
        visible: hasAction

        /* PAZ Change start */
//        height: {
//            // If there is an image then the column height is equal to
//            // the total height of all it's children
//            if (img.imgPath.length != 0) {
//                return childrenRect.height;
//            }
//            // If there is no image then return the action text height
//            else if (hasAction) {
//               console.log ("Height: " + actionText.height + ", Text: " + actionText.text);
//                return actionText.height;
//            }
//            return 0;
//        }
        height: childrenRect.height
        /* PAZ Change end */

        Label {

            /* PAZ Change start */

            id: actionText
            width: parent.width * 0.97 // Factor adds a margin relative to device size
            height: contentHeight
            horizontalAlignment: Text.AlignHCenter
            fontSize: "small"
            color: "#333333"
            wrapMode: Text.WrapAtWordBoundaryOrAnywhere

            /* PAZ Change end */

            text: {
                var res = ""
                var userName
                var fromUserName = fromUser.firstName + " " + fromUser.lastName
                fromUserName = fromUserName.trim()

                switch(action.classType) {
                case typeMessageActionChatCreate:
                    if (action.title == "Secret Chat") {
                        // TRANSLATORS: %1 indicates who created the secret chat.
                        res = i18n.tr("%1 created a secret chat").arg(fromUserName);
                    } else {
                        if (fromUser.id == telegramObject.me)
                            res = i18n.tr("You created the group")
                        else
                            res = i18n.tr("<b>%1</b> created the group").arg(fromUserName)
                    }
                    break

                case typeMessageActionChatAddUser:
                    userName = user.firstName + " " + user.lastName
                    userName = userName.trim()

                    if (fromUser.id == telegramObject.me)
                        res = i18n.tr("You added <b>%1</b>").arg(userName)
                    else if (user.id == telegramObject.me)
                        res = i18n.tr("<b>%1</b> added you").arg(fromUserName)
                    else
                        res = i18n.tr("<b>%1</b> added <b>%2</b>").arg(fromUserName).arg(userName)
                    break

                case typeMessageActionChatDeleteUser:
                    userName = user.firstName + " " + user.lastName
                    userName = userName.trim()

                    if (user.id == fromUser.id) {
                        // TRANSLATORS: %1 is the person, who left the group chat.
                        res = i18n.tr("<b>%1</b> left the group").arg(userName)
                    } else {
                        if (fromUser.id == telegramObject.me)
                            res = i18n.tr("You removed <b>%1</b>").arg(userName)
                        else if (user.id == telegramObject.me)
                            res = i18n.tr("<b>%1</b> removed you").arg(fromUserName)
                        else
                            res = i18n.tr("<b>%1</b> removed <b>%2</b>").arg(fromUserName).arg(userName)
                    }
                    break

                case typeMessageActionChatEditTitle:
                    var titleText = action.title.replace("\"", "")

                    if (fromUser.id == telegramObject.me)
                        res = i18n.tr("You changed the group name to %1").arg(titleText)
                    else {   
                        // TRANSLATORS: %1 is the person, who changed group name to title %2.
                        res = i18n.tr("<b>%1</b> changed the group name to %2").arg(fromUserName).arg(titleText)
                    }
                    break

                case typeMessageActionChatEditPhoto:
                    // TRANSLATORS: %1 is the person, who changed the group photo.
                    if (fromUser.id == telegramObject.me)
                        res = i18n.tr("You changed the group photo")
                    else
                        res = i18n.tr("<b>%1</b> changed the group photo").arg(fromUserName)
                    break

                case typeMessageActionChatDeletePhoto:
                    // TRANSLATORS: %1 is the person, who deleted the group photo.
                    if (fromUser.id == telegramObject.me)
                        res = i18n.tr("You removed the group photo")
                    else
                        res = i18n.tr("<b>%1</b> removed the group photo").arg(fromUserName)
                    break

                case typeMessageActionEmpty:
                    break;

                default:
                    break
                }

                return res
            }
        }

        Image {
            id: img
            anchors.horizontalCenter: parent.horizontalCenter
            width: 64*Devices.density

            /* PAZ Change start */

//            height: 80*Devices.density
            height: {
                if(imgPath.length != 0)
                    return 80*Devices.density
                else
                    return 0;
            }

            /* PAZ Change end */

            sourceSize: Qt.size(width,width)
            source: {
                if(imgPath.length==0)
                    return ""
                else
                    return imgPath
            }
            asynchronous: true
            fillMode: Image.PreserveAspectFit
            visible: imgPath.length != 0

            property string imgPath: imgLocation!=telegramObject.nullLocation? imgLocation.download.location : ""
        }
    }
}
