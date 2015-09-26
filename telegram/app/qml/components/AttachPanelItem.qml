import QtQuick 2.4
import Ubuntu.Components 1.2

Column {
    id: attach_item

    property bool showTick: false

    property alias text: attach_label.text
    property alias image: attach_image.source

    signal clicked(var mouse)

    spacing: units.dp(3)

    Image {
        id: attach_image
        objectName: "attach_gallery"
        asynchronous: true
        width: units.gu(7.5); height: width;

        Image {
            anchors.centerIn: parent
            source: attach_item.showTick ? Qt.resolvedUrl("qrc:/qml/files/android/attach_hide2.png") : null
            visible: attach_item.showTick
        }

        MouseArea {
            anchors.fill: parent
            onClicked: attach_item.clicked(mouse)
        }
    }

    Label {
        id: attach_label
        anchors.horizontalCenter: parent.horizontalCenter
        font.pixelSize: units.dp(11)
        font.weight: Font.DemiBold
    }
}
