import QtQuick 2.4
import UbuntuComponents 1.3

Page {
    id: auth_page
    focus: true
    title: i18n.tr("Sign In")

    signal accepted( string number )

    Item {
        id: frame
        anchors.fill: parent
        clip: true

        property bool minimumWidth: width*0.4<columnWidth
        property real columnWidth: 300*Devices.density

        CountriesPhoneList {
            id: cphones_list
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            width: frame.minimumWidth? frame.width : parent.width/2 - column.width/2 - 80*Devices.density
            visible: cphones_list.number.length==0 || !frame.minimumWidth

            onNumberChanged: {
                if( number.length != 0 )
                    BackHandler.pushHandler(cphones_list,cphones_list.back)
                else
                    BackHandler.removeHandler(cphones_list)
            }

            function back() {
                number = ""
            }
        }

        Text {
            id: country_code
            x: column.x + phone_number.x
            anchors.bottom: column.top
            anchors.margins: 8*Devices.density
            font.family: AsemanApp.globalFont.family
            font.pixelSize: Math.floor(15*Devices.fontDensity)
            color: textColor0
            text: "+" + cphones_list.number
            visible: column.visible
        }

        Column {
            id: column
            anchors.centerIn: parent
            spacing: 4*Devices.density
            visible: cphones_list.number.length!=0 || !frame.minimumWidth

            LineEdit {
                id: phone_number
                width: frame.columnWidth
                anchors.horizontalCenter: parent.horizontalCenter
                // TRANSLATORS: Placeholder for the phone number field.
                placeholder: i18n.tr("Phone Number")
                textColor: textColor0
                placeholderColor: "#888888"
                color: backColor0
                validator: RegExpValidator{regExp: /(?!0)\d*/}
                pickerEnable: Devices.isTouchDevice
                onAccepted: auth_dialog.accepted( country_code.text + text )
            }

            Button {
                width: frame.columnWidth
                anchors.horizontalCenter: parent.horizontalCenter
                height: 40*Devices.density
                normalColor: "#339DCC"
                highlightColor: "#3384CC"
                textColor: textColor0
                // TRANSLATORS: Button text right under the phone number text field.
                text: i18n.tr("Log in")
                radius: 4*Devices.density
                onClicked: phone_number.accepted()
            }
        }
    }
}
