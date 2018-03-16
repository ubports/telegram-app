import QtQuick 2.4
import Ubuntu.Components 1.3
import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

Item {
    id: root
    width: parent.width
    height: units.gu(40)

    property variant accountEmojis: emojis
    property alias telegram: stickers_model.telegram

    signal emojiSelected( string code )
    signal stickerSelected( string path )
    signal stickerDocumentSelected(variant document)

    StickersModel {
        id: stickers_model
    }

    EmoticonsModel {
        id: emodel
        emojis: accountEmojis
        stickerSubPaths: [Devices.localFilesPrePath + AsemanApp.homePath + "/stickers", Devices.resourcePath + "/stickers"]
        currentKey: emodel.keys[0]
    }

    Rectangle {
        anchors.fill: parent
        color: theme.palette.normal.background
    }

    ListView {
        id: selectionView
        anchors {
            left: parent.left
            right: parent.right
            top: parent.top
        }
        orientation: ListView.Horizontal
        height: units.gu(6)

        model: {
            var result = new Array
            for(var i=0 ;i<emodel.keys.length; i++) {
                result[result.length] = emodel.keys[i]
            }
            for(var i=0 ;i<stickers_model.installedStickerSets.length; i++) {
                result[result.length] = stickers_model.installedStickerSets[i]
            }
            return result
        }

        delegate: Item {
            id: titem
            height: parent.height
            width: height

            property var itemObject

            Component.onCompleted: {
                if(index < emodel.keys.length)
                    itemObject = tab_emoji_icon.createObject(titem, {"index": index})
                else {
                    var idx = index - emodel.keys.length
                    var sid = stickers_model.installedStickerSets[idx]
                    var doc = stickers_model.stickerSetThumbnailDocument(sid)
                    var set = stickers_model.stickerSetItem(sid)

                    itemObject = tab_sticker_icon.createObject(titem, {"index": index, "document": doc, "stickerSet": set, "currentStickerSet": sid})
                }
            }
        }
    }

    Rectangle {
        id: separator
        anchors { left: parent.left; right: parent.right; top: selectionView.bottom }
        height: units.dp(1)
        color: theme.palette.normal.overlaySecondaryText
    }

    GridView {
        id: elist
        anchors { left: parent.left; right: parent.right; bottom: parent.bottom; top: separator.bottom }
        clip: true
        model: emodel
        visible: !slist.visible
        cellWidth: emodel.keys.length === 1 || emodel.currentKeyIndex > 1 ? root.width / 4 : root.width / 6
        cellHeight: cellWidth
        delegate: AbstractButton {
            id: item
            width: elist.cellWidth
            height: elist.cellHeight

            Image {
                anchors.centerIn: parent
                height: model.type === EmoticonsModel.EmoticonSticker ? parent.width - units.gu(1) : units.gu(3)
                width: height
                sourceSize: Qt.size(width, height)
                source: model.path
                smooth: true
                fillMode: Image.PreserveAspectFit
                asynchronous: true
            }

            onClicked: {
                switch(model.type) {
                case EmoticonsModel.EmoticonEmoji:
                    root.emojiSelected(model.key)
                    emodel.pushToRecent(model.key)
                    break;

                case EmoticonsModel.EmoticonSticker:
                    root.stickerSelected(model.path)
                    break;
                }
            }
        }
    }

    GridView {
        id: slist
        anchors { left: parent.left; right: parent.right; bottom: parent.bottom; top: separator.bottom }
        model: stickers_model
        cellWidth: root.width / 4
        cellHeight: cellWidth
        clip: true
        visible: count != 0

        delegate: AbstractButton {
            width: root.width / 4
            height: width

            Image {
                anchors.fill: parent
                anchors.margins: units.gu(0.5)
                sourceSize: Qt.size(width, height)
                source: sticker_handler.thumbPath
                smooth: false
                fillMode: Image.PreserveAspectFit
                asynchronous: true
            }

            FileHandler {
                id: sticker_handler
                target: model.document
                telegram: root.telegram
                Component.onCompleted: download()
            }

            onClicked: {
                root.stickerDocumentSelected(model.document)
            }
        }
    }

    Component {
        id: tab_emoji_icon
        Rectangle {
            id: sitem
            anchors.fill: parent
            border.width: units.dp(1)
            border.color: selected ? theme.palette.normal.base : "transparent"
            color: selected ? theme.palette.normal.base : "transparent"
            property bool selected: stickers_model.currentStickerSet === "" && emodel.currentKey === emodel.keys[index]

            property int index

            Image {
                anchors.fill: parent
                anchors.margins: units.gu(.5)
                source: emodel.keysIcons[index]
                asynchronous: true

                AbstractButton {
                    anchors.fill: parent
                    onClicked: {
                        emodel.currentKey = emodel.keys[index]
                        stickers_model.currentStickerSet = ""
                    }
                }
            }
        }
    }

    Component {
        id: tab_sticker_icon
        Rectangle {
            id: sitem
            anchors.fill: parent
            border.width: units.dp(1)
            border.color: selected ? theme.palette.normal.overlaySecondaryText : "transparent"
            color: selected ? theme.palette.normal.overlaySecondaryText : "transparent"
            property bool selected: stickers_model.currentStickerSet === currentStickerSet

            property Document document
            property StickerSet stickerSet
            property int index
            property string currentStickerSet

            Image {
                anchors.fill: parent
                anchors.margins: units.gu(.5)
                source: handler.thumbPath
                fillMode: Image.PreserveAspectFit
                asynchronous: true

                AbstractButton {
                    anchors.fill: parent
                    onClicked: {
                        stickers_model.currentStickerSet = currentStickerSet
                    }
                }
                FileHandler {
                    id: handler
                    target: sitem.document
                    telegram: root.telegram
                    Component.onCompleted: download()
                }
            }
        }
    }
}

