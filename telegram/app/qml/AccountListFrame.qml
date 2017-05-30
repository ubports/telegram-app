import QtQuick 2.0
import Ubuntu.Components 1.3
import AsemanTools 1.0
import TelegramQML 1.0

// Cutegram: AccountsTabFrame.qml

Item {
    id: acc_list_frame
    visible: false

    property alias hash: account_list.hash
    property alias list: account_list.list

    property alias accountList: account_list

    property int unreadCount: {
        var result = 0;
        for (var i = 0; i < list.count; i++)
            result += hash.value(list.at(i)).telegramObject.unreadCount;
            return result;
    }

    signal codeRequested(variant authCodePage, variant telegram, bool phoneRegistered, int sendCallTimeout, bool resent)
    signal authPasswordNeeded(variant authPasswordPage)

    function showFirstAccount() {
        if (profiles.count == 0) {
            mainView.showIntro();
        } else {
            var key = profiles.keys[0];
            var account = hash.value(key);
            pageStack.clear();
            account.show();

            var phoneNumber = account.accountItem.number;
            if (Cutegram.pushNumber != phoneNumber) {
                // Allow receiving push to new primary account.
                mainView.readyForPush = true;
                Cutegram.pushNumber = phoneNumber;
                Cutegram.pushNotifications = false;
            }
        }
    }

    AccountList {
        id: account_list
        anchors.fill: parent

        onCurrentKeyChanged: {
            pageStack.clear();
        }

        onAccountSelected: {
            for (var i = 0; i < profiles.count; i++) {
                var key = profiles.keys[i];
                var account = hash.value(key);
                if (account.accountItem.number === number) {
                    if (i == 0) {
                        mainView.pushProfile = number;
                    }
                    pageStack.clear();
                    account.show();
                    break;
                }
            }
        }
    }

    Component {
        id: account_component
        AccountListItem {
            onCodeRequested:acc_list_frame.codeRequested(authCodePage,telegram, phoneRegistered, sendCallTimeout, resent)
            onAuthPasswordNeeded:acc_list_frame.authPasswordNeeded(authPasswordPage)
        }
    }

    Connections {
        target: profiles
        onKeysChanged: refresh()
        Component.onCompleted: refresh()

        function refresh() {
            for (var i = 0; i < profiles.count; i++) {
                var key = profiles.keys[i];
                if (hash.containt(key)) continue;

                var profile = profiles.get(key);
                var account = account_component.createObject(
                        acc_list_frame, {"accountItem": profile});
                hash.insert(key, account);
                list.append(key);
            }

            var hashKeys = hash.keys();
            var deletedAccount = false;
            for (var j = 0; j < hashKeys.length; j++) {
                var key = hashKeys[j];
                if (profiles.containt(key)) continue;

                var accountToDestroy = hash.value(key);
                accountToDestroy.destroy();
                deletedAccount = true;

                hash.remove(key);
                list.removeOne(key);
            }
            
            if (deletedAccount) {
                showFirstAccount();
            }
        }
    }
}
