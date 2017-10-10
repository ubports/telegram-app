import QtQuick 2.4
import Ubuntu.Components 1.3 as UC
import Ubuntu.Components.Popups 1.3 as UCP
import AsemanTools 1.0
import TelegramQML 1.0
import Cutegram 1.0

UCP.Dialog {
    id: root
    title: stickerSet

    property alias telegram: smodel.telegram
    property alias stickerSet: smodel.currentStickerSet

    StickersModel {
        id: smodel
    }

    Connections {
        target: telegram
        onStickerInstalled: {
            if(shortName != stickerSet)
                return
            if(ok)
                close()
        }
    }

    GridView {
        id: gridView
        width: parent.width
        height: units.gu(40)
        clip: true

        model: smodel

        cellWidth: width / 4
        cellHeight: cellWidth

        delegate: Item {
            id: item
            width: gridView.cellWidth
            height: gridView.cellHeight

            property Document document: model.document

            FileHandler {
                id: handler
                target: item.document
                telegram: smodel.telegram
                Component.onCompleted: download()
            }

            Image {
                anchors.fill: parent
                anchors.margins: units.gu(.5)
                height: parent.height
                width: height
                fillMode: Image.PreserveAspectFit
                sourceSize: Qt.size(width, height)
                source: handler.thumbPath
            }
        }
    }

    UC.Button {
        text: i18n.tr("Install")
        color: UC.UbuntuColors.green
        onClicked: {
            telegram.installStickerSet(root.stickerSet)
            PopupUtils.close(root)
        }
    }
    UC.Button {
        text: i18n.tr("Close")
        onClicked: PopupUtils.close(root)
    }
}

