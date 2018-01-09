import QtQuick 2.0
import AsemanTools 1.0

Rectangle {
    width: 100
    height: 62
    visible: active

    property bool active: false

    onActiveChanged: {
        if( active ) {
            indicator.start()
            logout_timout.restart()
        } else {
            indicator.stop()
            logout_timout.stop()
        }
    }

    MouseArea {
        anchors.fill: parent
    }

    Column {
        anchors.centerIn: parent
        spacing: units.gu(1)

        Indicator {
            id: indicator
            anchors.horizontalCenter: parent.horizontalCenter
            indicatorSize: units.gu(2.75)
            modern: true
            light: false
            Component.onCompleted: start()
        }

        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            font.family: AsemanApp.globalFont.family
            font.pixelSize: Math.floor(11*Devices.fontDensity)
            text: qsTr("Loading...")
        }
    }

    Text {
        id: logout_text
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.verticalCenter
        anchors.topMargin: units.gu(10)
        font.family: AsemanApp.globalFont.family
        font.pixelSize: 10*Devices.fontDensity
        font.underline: true
        text: qsTr("Login again")
        visible: false

        MouseArea {
            anchors.fill: parent
            anchors.margins: -units.gu(1.25)
            cursorShape: Qt.PointingHandCursor
            onClicked: Cutegram.logout(telegramObject.phoneNumber)
        }
    }

    Timer {
        id: logout_timout
        interval: 20000
        repeat: false
        onTriggered: {
            if(Cutegram.isLoggedIn(telegramObject.phoneNumber))
                logout_text.visible = true
        }
    }
}
