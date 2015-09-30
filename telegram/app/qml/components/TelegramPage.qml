import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Connectivity 1.0

Page {
    id: page

    property bool isOnline: NetworkingStatus.online
    property bool isBusy: false

    Loader {
        id: activity_indicator_loader

        active: false
        anchors.fill: parent
        sourceComponent: activity_indicator_component
        z: 100
    }

    Component {
        id: activity_indicator_component

        Rectangle {
            id: activity_blur

            color: Qt.rgba(0, 0, 0, 0.25)
            visible: isBusy

            ActivityIndicator {
                id: activity_indicator

                anchors.centerIn: parent
                running: isBusy
            }

            MouseArea {
                anchors.fill: parent
                enabled: isBusy
                preventStealing: true
            }
        }
    }

    onIsBusyChanged: {
        if (isBusy && !activity_indicator_loader.active) {
            activity_indicator_loader.active = true;
        }
    }
}
