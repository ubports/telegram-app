import QtQuick 2.4

Rectangle {
    id: root

    property bool outgoing
    color: {
         if (outgoing) {
            return "#3fb24f"
        } else {
            return "#ffffff"
        }
    }
    radius: units.dp(3)

    ColoredImage {
        id: bubbleArrow

        source: Qt.resolvedUrl("qrc:/qml/files/conversation_bubble_arrow.png")
        color: root.color
        asynchronous: false
        anchors {
            bottom: parent.bottom
            bottomMargin: units.gu(1.7)
        }
        width: units.gu(1)
        height: units.gu(1.5)

        states: [
            State {
                when: !root.outgoing
                name: "incoming"
                AnchorChanges {
                    target: bubbleArrow
                    anchors.right: root.left
                }
            },
            State {
                when: root.outgoing
                name: "outgoing"
                AnchorChanges {
                    target: bubbleArrow
                    anchors.left: root.right
                }
                PropertyChanges {
                    target: bubbleArrow
                    mirror: true
                }
            }
        ]
    }
}
