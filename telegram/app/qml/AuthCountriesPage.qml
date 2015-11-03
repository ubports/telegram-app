import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.0 as ListItem
import AsemanTools 1.0

Page {
    id: page

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

        anchors.fill: parent
        currentIndex: -1
        clip: true
        cacheBuffer: units.gu(8)*20
        flickDeceleration: 2000
        maximumFlickVelocity: 5000

        model: CountriesModel {}
        delegate: ListItem.SingleValue {
            text: name
            value: nativeName
            onClicked: {
                country_list.currentIndex = index;

                // Force change in case same number picked again.
                page.code = "";
                page.code = callingCode;
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

    Scrollbar {
        flickableItem: country_list
    }
}
