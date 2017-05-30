import QtQuick 2.4
import QtMultimedia 5.0
import Ubuntu.Components 1.3
import Ubuntu.Components.ListItems 1.3 as ListItem

import AsemanTools 1.0
import TelegramQML 1.0

// Cutegram: AccountFrame.qml

Item {
    id: account_list_item

    property ProfilesModelItem accountItem
    property AccountPage dialogsPage
    property int notifyTimeOut: 3000
    property bool isActive: true // TODO alias to main view activeFocus

    property alias telegramObject: telegram
    property alias unreadCount: telegram.unreadCount

    signal activeRequest()
    signal addParticipantRequest()
    signal codeRequested(variant authCodePage, variant telegram, bool phoneRegistered, int sendCallTimeout, bool resent)
    signal authPasswordNeeded(variant authPasswordPage)

    onIsActiveChanged: {
        telegram.online = isActive;
    }

    function show() {
        console.log("calling show");
        pageStack.primaryPageSource = dialogs_page_component;
    }

    QtObject {
        id: privates
    }

    Connections {
        target: mainView
        onPushRegister: {
            if (Cutegram.pushNumber == telegram.phoneNumber) {
                telegram.accountRegisterDevice(token, version);
            }
        }
        onPushUnregister: {
            if (Cutegram.pushNumber == telegram.phoneNumber) {
               telegram.accountUnregisterDevice(token);
           }
        }
    }

    Telegram {
        id: telegram

        property bool logoutRequest: false
        property bool codeResent: false
        property int resendTimerValue: 0

        defaultHostAddress: Cutegram.defaultHostAddress
        defaultHostDcId: Cutegram.defaultHostDcId
        defaultHostPort: Cutegram.defaultHostPort
        appId: Cutegram.appId
        appHash: Cutegram.appHash
        downloadPath: Cutegram.cacheDirectory
        tempPath: Cutegram.cacheDirectory
        configPath: Cutegram.configDirectory
        publicKeyFile: AsemanApp.appPath + "/tg-server.pub"
//        phoneNumber: accountItem.number
        phoneNumber: accountItem != null ? accountItem.number : ""
        autoCleanUpMessages: true
        autoAcceptEncrypted: true

        onErrorSignal:{
            if (errorText === "SESSION_REVOKED" || errorText === "AUTH_KEY_UNREGISTERED") {
                telegram.logoutRequest = true;
                telegram.authLogout();

                profiles.remove(telegram.phoneNumber);
                if (profiles.count === 0)
                    pageStack.primaryPageSource = null;

                showIntro();
            }

            mainView.error(id, errorCode, errorText)
        }
        onErrorChanged: {
            console.log("telegram error: " + error)
            if (error == "AUTH_RESTART") {
                profiles.remove(telegram.phoneNumber);
                console.log("*** Authentication stopped for: " + telegram.phoneNumber);
            }
        }
        onAuthNeededChanged: {
            console.log("authNeeded " + authNeeded)
        }
        onAuthPhoneCheckedChanged: {
            console.log("authPhoneChecked " + authPhoneChecked)
        }
        onAuthCallRequested: {
            console.log("authCallRequested")
        }
        onAuthCodeRequested: {
            account_list_item.codeRequested(account_code_page_component, telegram, phoneRegistered, sendCallTimeout, codeResent);
            resendTimerValue = sendCallTimeout;
            console.log("authCodeRequested");
        }
        onAuthLoggedInChanged: {
            readyForPush = authLoggedIn; // required for PushClient

            if (authLoggedIn) {
                console.log("authLoggedIn true");
                account_list_item.show();

                if (Cutegram.pushNumber == "") {
                    Cutegram.pushNumber = phoneNumber;
                }

                if (Cutegram.pushNumber == phoneNumber) {
                    if (!push_client_loader.active) {
                        push_client_loader.active = true;
                    } else if (push_client_loader.status === Loader.Ready) {
                        pushClient.registerForPush();
                    }
                }
            } else {
                console.log("authLoggedIn false");
                if (logoutRequest) {
                    Cutegram.logout(phoneNumber);
                }
            }
        }
        onAccountDeviceRegistered: {
        }
        onAccountDeviceUnregistered: {
            if (logoutRequest) {
                Cutegram.pushNumber = "";
            }
            Cutegram.pushNotifications = false;
        }
        onMessagesSent: outgoingMessagesMetric.increment(count)
        onMessagesReceived: incomingMessagesMetric.increment(count)

        onConnectedChanged: {
            if (connected && authLoggedIn) {
                telegram.updatesGetState();
            }
        }

        onFatalError: {
            profiles.remove(telegram.phoneNumber);
        }

        onAuthPasswordNeeded: {
            console.log("authPasswordNeeded")
            account_list_item.authPasswordNeeded(auth_password_page_component);
        }
    }

    Component {
        id: account_code_page_component

        AuthCodePage {
            id: auth_code_page
            objectName: "auth_code_page"

            header: PageHeader {
                title: auth_code_page.phoneRegistered ? i18n.tr("Sign In") : i18n.tr("Sign Up")
                leadingActionBar.actions: Action {
                    id: back_action
                    iconName: "back"
                    onTriggered: {
                        //                    pageStack.removePages(auth_code_page);
                        profiles.remove(telegram.phoneNumber);
                        console.log("*** Authentication stopped for: " + telegram.phoneNumber);
                    }
                }
            }

    //        property bool authNeeded: (telegram.authNeeded
    //                || telegram.authSignInError.length != 0
    //                || telegram.authSignUpError.length != 0)
    //                        && telegram.authPhoneChecked

            onSignInRequest: telegram.authSignIn(code)
            onSignUpRequest: telegram.authSignUp(code, fname, lname)
            onCodeRequest: {
                telegram.authSendCode();
                telegram.codeResent = true;
            }
            onCallRequest: telegram.authSendCall()

            Connections {
                target: telegramObject
                onAuthSignInErrorChanged: auth_code_page.error(telegramObject.authSignInError)
                onAuthCallRequested: auth_code_page.allowCall = false
            }
        }
    }

    Component {
        id: auth_password_page_component

        AuthPasswordPage {
            id: auth_password_page

            onPasswordAccepted: telegramObject.authCheckPassword(password)

            Connections {
                target: telegramObject
                onErrorChanged: {
                    if (telegramObject.error == "PASSWORD_HASH_INVALID")
                        auth_password_page.errorText = i18n.tr("Invalid password");
                }
            }
        }
    }

    AccountLoading {
        anchors.fill: parent
        z: 10
        active: (!telegram.authLoggedIn && telegram.authNeeded) || !telegram.authPhoneChecked
    }

    Component {
        id: dialogs_page_component

        AccountPage {
            id: dialogs_page
            telegramObject: telegram
            profileCount: profiles.count
        }
    }
}
