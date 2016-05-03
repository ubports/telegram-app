import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import AsemanTools 1.0

Page {
    id: page
    objectName: "countriesListPage"

    property string code

    signal countryEntered(string code)

    focus: true
    flickable: null
    title: i18n.tr("Country Code")

    onCodeChanged: {
        if (code.length > 0) {
            page.countryEntered(code);
        }
    }

    ListView {
        id: country_list
        objectName: "countriesList"

        anchors.fill: parent
        currentIndex: -1
        clip: true
        cacheBuffer: units.gu(8)*20
        flickDeceleration: 2000
        maximumFlickVelocity: 5000

        model: CountriesModel {}
        delegate: ListItem.SingleValue {
            objectName: getObjectName()
            text: name
            value: nativeName
            onClicked: {
                country_list.currentIndex = index;

                // Force change in case same number picked again.
                page.code = "";
                page.code = callingCode;
            }

            function getObjectName() {
                return name.toLowerCase().split(' ').join('_')
            }
        }

        Component.onCompleted: {
            // FIXME: workaround for qtubuntu not returning values depending on the grid unit definition
            // for Flickable.maximumFlickVelocity and Flickable.flickDeceleration
            var scaleFactor = units.gridUnit / 8;
            flickDeceleration = flickDeceleration * scaleFactor;
            maximumFlickVelocity = maximumFlickVelocity * scaleFactor;
        }
    }

    PhysicalScrollBar {
        anchors {
            top: country_list.top
            right: country_list.right
        }
        width: units.gu(2)
        height: country_list.height
        color: Qt.rgba(0, 0, 0, 0.5)
        scrollArea: country_list
    }
}
