import QtQuick 2.4
import Ubuntu.Components 1.3

Item {
    id: attach_panel
    
    property bool isShown: false

    signal photoRequested()
    signal videoRequested()
    signal fileRequested()
    signal close()

    anchors {
        right: parent.right
        left: parent.left
        bottom: parent.bottom
    }
    clip: false

    onClose: attach_panel.isShown = false

    Rectangle {
        id: attach_box
        width: parent.width
        height: units.gu(12)+units.gu(3)
        y: attach_panel.isShown ? -height+units.gu(3) : attach_box_edge.height

        Behavior on y {
            SequentialAnimation {
                NumberAnimation { easing.type: Easing.OutBack; duration: 300; }
                ScriptAction {
                    script: {
                        if (!attach_panel.isShown) {
                            privates.attachmentItem.destroy()
                            privates.attachmentItem = undefined
                        }
                    }
                }
            }
        }

        Rectangle {
            anchors.fill: parent
            color: "#aaffffff"
        }

        InverseMouseArea {
            anchors.fill: parent
            acceptedButtons: Qt.LeftButton
            onPressed: attach_panel.isShown = false
        }

        Grid {
            id: attachment_grid
            anchors {
                top: parent.top
                topMargin: units.gu(1)
                horizontalCenter: parent.horizontalCenter
            }
            columns: 4
            rows: 1
            horizontalItemAlignment: Grid.AlignHCenter
            verticalItemAlignment: Grid.AlignVCenter
            spacing: units.gu(2.8)

            AttachPanelItem {
                id: attach_photo_item
                // TRANSLATORS: Used in attach menu, when sending a photo to the conversation.
                text: i18n.tr("Photo")
                image: Qt.resolvedUrl("qrc:/qml/files/android/attach_gallery.png")
                onClicked: {
                    attach_panel.photoRequested()
                    attach_panel.close()
                }
            }

            AttachPanelItem {
                // TRANSLATORS: Used in attach menu, when sending a video to the conversation.
                text: i18n.tr("Video")
                image: Qt.resolvedUrl("qrc:/qml/files/android/attach_video.png")
                onClicked: {
                    attach_panel.videoRequested()
                    attach_panel.close()
                }
            }

            AttachPanelItem {
                // TRANSLATORS: Used in attach menu, when sending a file to the conversation.
                text: i18n.tr("File")
                image: Qt.resolvedUrl("qrc:/qml/files/android/attach_file.png")
                onClicked: {
                    attach_panel.fileRequested()
                    attach_panel.close()
                }
            }

            AttachPanelItem {
                height: attach_photo_item.height
                // TRANSLATORS: Used in attach menu, when sending a file to the conversation.
                image: Qt.resolvedUrl("qrc:/qml/files/android/attach_hide1.png")
                showTick: true
                onClicked: attach_panel.close()
            }

        }
    }

    Rectangle {
        id: attach_box_edge
        anchors.bottom: attach_box.top
        width: parent.width
        height: units.dp(6)
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00000000"; }
            GradientStop { position: 1.0; color: "#aa000000"; }
        }
        opacity: attach_panel.isShown ? 0.4 : 0

        Behavior on opacity {
            NumberAnimation { easing.type: Easing.OutBack; duration: 400; }
        }
    }
}
