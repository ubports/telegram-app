import QtQuick 2.4
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem
import AsemanTools 1.0
import QtQml.Models 2.1


Page {
    id: page
    objectName: "countriesListPage"

    property string code

    signal countryEntered(string code)

    focus: true
    flickable: null

    header: PageHeader {
        id: choose_header
        title: i18n.tr("Choose a country")
        property bool searchMode: false
        Action {
            id: searchAction
            iconName: "search";
            text: i18n.tr("Search");
            onTriggered:{
                page.state = "search";
                search_text_field.forceActiveFocus();
            }
        }
        Action {
            id: backFromSearchAction
            // TRANSLATORS: As in, back out of contacts page.
            text: i18n.tr("Back")
            iconName: "back"
            onTriggered: {
                search_text_field.text = "";
                page.state = "default";
            }
        }
        trailingActionBar.actions: choose_header.searchMode ?
                                       [] : searchAction
        leadingActionBar.actions: choose_header.searchMode ?
                                       backFromSearchAction : []

        TextField {
            id: search_text_field
            visible: choose_header.searchMode
            anchors {
                right: parent ? parent.right : undefined
                rightMargin: units.gu(2)
                left: parent ? parent.left : undefined
                leftMargin: units.gu(2)
                verticalCenter: parent ? parent.verticalCenter : undefined
            }
            focus: true
            inputMethodHints: Qt.ImhNoPredictiveText
            onTextChanged: country_list_delegateModel.searchChanged(text)
            // TRANSLATORS: Placeholder for contacts search field.
            placeholderText: i18n.tr("Search countries...")

            onTriggered: {
                // TODO No worky.
                page.state = "default";
            }
        }
        contents: choose_header.searchMode ? search_text_field : null
    }

    // Page states
    state: "default"
    states: [
        State {
            name: "default"
            PropertyChanges {
                target: choose_header
                searchMode: false
            }
        },
        State {
            name: "search"
            PropertyChanges {
                target: choose_header
                searchMode: true
            }
        }
    ]

    onCodeChanged: {
        if (code.length > 0) {
            page.countryEntered(code);
        }
    }

    // Delegate for country_list ListView
    Component {
        id: filterDelegate
        ListItem.SingleValue {
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
    }

    // In conjunction with DelegateModelGroup this will allow us to
    // filter the country list based on user input in the search field
    DelegateModel {

        signal searchChanged(string text)

        id: country_list_delegateModel
        model: CountriesModel {}
        delegate: filterDelegate

        groups: [
            DelegateModelGroup {
                id: searchResults
                includeByDefault: true
                name: "displaySearchResults"
            }
        ]
        filterOnGroup: "displaySearchResults"

        onSearchChanged: {
            console.log("Searching for " + text);
            country_list_delegateModel.processSearchFilter(text);
        }

        function processSearchFilter(searchTerm) {

            var allRowsCount = model.count;
            var filteredRowsCount = searchResults.count;

            searchResults.remove(0,filteredRowsCount);

            for(var i = 0 ; i < allRowsCount ; i++) {
                var entry = model.get(i);

                // Perform case insensitive search for the user input within the name of each country
                if(entry.name.toLowerCase().indexOf(searchTerm.toLowerCase()) > -1 || (searchTerm === "")) {
//                    console.log("Adding " + entry.name);
                    searchResults.insert(entry, searchResults.name);
                }
            }
//            console.log("Filter group contains " + searchResults.count + " items");
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

        model: country_list_delegateModel
//=======
//        model: CountriesModel {}
//        delegate: ListItem.SingleValue {
//            objectName: getObjectName()
//            text: name
//            value: nativeName
//            onClicked: {
//                country_list.currentIndex = index;

//                // Force change in case same number picked again.
//                page.code = "";
//                page.code = callingCode;
//            }

//            function getObjectName() {
//                return name.toLowerCase().split(' ').join('_')
//            }
//        }


//        model: CountriesModel {}
//        delegate: ListItem.SingleValue {
//            objectName: getObjectName()
//            text: name
//            value: nativeName
//            onClicked: {
//                country_list.currentIndex = index;

//                // Force change in case same number picked again.
//                page.code = "";
//                page.code = callingCode;
//            }

//            function getObjectName() {
//                return name.toLowerCase().split(' ').join('_')
//            }
//        }

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
