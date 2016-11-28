# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-
# Copyright 2016 Canonical
#
# This file is part of telegram-app.
#
# telegram-app is free software: you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 3, as published
# by the Free Software Foundation.


"""Telegram app autopilot emulators."""

from autopilot import logging as autopilot_logging
from autopilot.introspection.dbus import StateNotFoundError
from autopilot.utilities import sleep
from autopilot import platform

from ubuntuuitoolkit import emulators as toolkit_emulators
from ubuntuuitoolkit._custom_proxy_objects import _common
from ubuntuuitoolkit._custom_proxy_objects._common import is_maliit_process_running
#from ubuntu_keyboard.emulators.keyboard import Keyboard as UbuntuKeyboard
#from address_book_app import address_book

from telegram import utilities

import logging
import time
import dbus

# from telegram.helpers.notifications.utils import Notifications


#logger = logging.getLogger(__name__)
class MainView(toolkit_emulators.MainView):

    def __init__(self, *args):
        super(MainView, self).__init__(*args)
        self.pointing_device = toolkit_emulators.get_pointing_device()
        self._account_page = None
        self._apl = None
        self._content_hub_popup = None
        self._content_picker = None
        self._content_hub_app_gallery = None
        self._confirmation_dialog = None

    @property
    def account_page(self):
        if self._account_page is None:
            try:
                self._account_page = self.wait_select_single(AccountPage, objectName="accountPage", active=True)
            except StateNotFoundError:
                raise RuntimeError("User needs to be logged on")
        return self._account_page
     
    @property
    def apl(self):
        if self._apl is None:
            self._apl = self.wait_select_single(AdaptivePageLayout, objectName="APL", active=True)
        return self._apl
    
    @property
    def content_picker(self):
        if self._content_hub_popup is None:
            self._content_hub_popup = self.wait_select_single(objectName="mediaImportPopup")
        self._content_picker = self._content_hub_popup.wait_select_single(objectName="contentPeerPicker")
        return self._content_picker

    def select_content_hub_app(self, appName):
        cp = self.content_picker
        content_hub_gridviews = cp.select_many(objectName="responsiveGridViewGrid")
        for gridview in content_hub_gridviews:
            app_icon_labels = gridview.select_many(objectName="label")
            if len(app_icon_labels) > 0:
                for app_icon_label in app_icon_labels:
                    if appName in app_icon_label.text:
                        self.pointing_device.click_object(app_icon_label)
                        return

    @property
    def confirmation_dialog(self):
        if self._confirmation_dialog is None:
            self._confirmation_dialog = self.wait_select_single(Dialog, objectName='confirmationDialog')
        return self._confirmation_dialog
    
    def click_header_action(self, action):
        """Click the action 'action' on the header"""
        action = self.wait_select_single(objectName='%s_button' % action)
        self.pointing_device.click_object(action)

    # def get_notifications_list(self):
    #     """Return a list of notifications currently being displayed."""
    #     return self.wait_select_single(Notifications, objectName='notificationList')


class AdaptivePageLayout(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AdaptivePageLayout, self).__init__(*args)
        self._intro_page = None
        self._contacts_page = None
        self._dialog_page = None
        self._settings_page = None
        self._profile_page = None
        self._countries_page = None
        self._auth_phone_page = None
        self._auth_code_page = None

    @property
    def intro_page(self):
        if self._intro_page is None:
            try:
                self._intro_page = self.wait_select_single(IntroPage, objectName='introPage', active=True)
            except StateNotFoundError:
                raise RuntimeError("Intro page is not active")                
        return self._intro_page

    @property
    def countries_page(self):
        if self._countries_page is None:
            self._countries_page = self.wait_select_single(AuthCountriesPage, objectName='countriesListPage', active=True)
        return self._countries_page

    @property
    def auth_phone_page(self):
        if self._auth_phone_page is None:
            self._auth_phone_page = self.wait_select_single(AuthNumberPage, objectName='authPhonePage', active=True)
        return self._auth_phone_page

    @property
    def auth_code_page(self):
        if self._auth_code_page is None:
            self._auth_code_page = self.wait_select_single(AuthCodePage, objectName='authCodePage', active=True)
        return self._auth_code_page

    @property
    def contacts_page(self):
        if self._contacts_page is None:
            self._contacts_page = self.wait_select_single(AccountContactsPage, objectName='accountContactsPage', active=True)
        return self._contacts_page

    @property
    def dialog_page(self):
        if self._dialog_page is None:
            self._dialog_page = self.wait_select_single(AccountDialogPage, objectName='dialogPage', active=True)
        return self._dialog_page

    @property
    def settings_page(self):
        if self._settings_page is None:
            self._settings_page = self.wait_select_single(AccountSettings, objectName="settingsPage", active=True)
        return self._settings_page
    
    @property
    def profile_page(self):
        if self._profile_page is None:
            self._profile_page = self.wait_select_single(ProfilePage, objectName="profilePage", active=True)
        return self._profile_page

    def clear_profile_page(self):
        self._profile_page = None


class IntroPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):
    def __init__(self, *args):
        super(IntroPage, self).__init__(*args)

    def press_start_messaging(self):
        return self.pointing_device.click_object(self.wait_select_single(objectName="startMessagingButton"))

class AccountPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def open_account_panel(self):
        self.click_action_button('navigationMenu')
        account_panel = self.wait_select_single(AccountPanel, objectName='accountPanel')
        account_panel.visible.wait_for(True)
        return account_panel

    def get_mainview_header(self):
        """Return the Header custom proxy object of the Page."""
        return self.get_root_instance().wait_select_single('MainView').get_header()

    def get_default_header(self):
        try:
            return self.wait_select_single('PageHeader', objectName='defaultHeader')
        except:
            raise RuntimeError('The Account Page has no header.')

    def click_action_button(self, action_name):
        action = self.wait_select_single(objectName='%s_button' % action_name)
        self.pointing_device.click_object(action)

    def get_dialog_list_page(self):
        return self.wait_select_single(AccountDialogList, objectName='accountDialogList')


class AccountPanel(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def get_account_panel_list(self):
        return self.wait_select_single('AccountPanel', objectName='accountPanel')

    def get_account_panel_count(self):
        return self.get_account_panel_list().count

    def get_account_panel_delegate(self, index):
        return self.wait_select_single('AccountPanelItem', objectName='contact{}'.format(index))

    def select_secret_chat(self):
        action = self.wait_select_single('AccountPanelItem', objectName='secretChatItem')
        self.pointing_device.click_object(action)

    def select_group_chat(self):
        action = self.wait_select_single('AccountPanelItem', objectName='groupChatItem')
        self.pointing_device.click_object(action)

    def select_contacts(self):
        action = self.wait_select_single('AccountPanelItem', objectName='panelContacts')
        self.pointing_device.click_object(action)

    def select_settings(self):
        action = self.wait_select_single('AccountPanelItem', objectName='panelSettings')
        self.pointing_device.click_object(action)


class AccountContactsPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AccountContactsPage, self).__init__(*args)
        self._index_of_first_online_contact = None


    def _get_contacts_list(self):
        return self.wait_select_single('MultipleSelectionListView', objectName='contactList')

    def _get_contacts_count(self):
        return self._get_contacts_list().count

    def _get_contact_delegate(self, index):
        return self.wait_select_single(
            'TelegramContactsListItem', objectName='contact{}'.format(index))

    def _click_action_button(self, action_name):
        action = self.wait_select_single(objectName='%s_button' % action_name)
        if (action):
            self.pointing_device.click_object(action)
        else:
            raise StateNotFoundError(action_name)


    def select_first_online_contact(self):
        #Select first contact if online (User MUST be online)
        delegate = None
        for index in range(self._get_contacts_count()):
            delegate = self._get_contact_delegate(index)
            if (delegate.isOnline):
                self._index_of_first_online_contact = index
                break

        if delegate != None:
            return delegate
        else:
            raise RuntimeError('Chat cannot be created. There are no online users')

    def select_second_contact(self):
        if self._index_of_first_online_contact is None:
            raise RuntimeError('Please select first online contact before selecting a second contact')

        #Select a second contact
        delegate = None
        for index in range(self._get_contacts_count()):
            if index is not self._index_of_first_online_contact:
                delegate = self._get_contact_delegate(index)
                break

        if delegate != None:
            return delegate
        else:
            raise RuntimeError('Chat cannot be created. Cannot select second contact')

    def select_contact_at_index(self, index):
        delegate = self._get_contact_delegate(index)
        return delegate

    def enter_group_chat_title(self, title):
        text_field = self.wait_select_single('TextField', objectName='groupChatTextField')
        utilities.enter_text_in_text_area(text_field, title)
        self._click_action_button("createGroupChatOK")


class AccountDialogList(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    @property
    def dialog_count(self):
        return self._get_dialog_list().count
    
    def select_dialog_at_index(self, index):
        selected_dialog = self._get_dialog_delegate(index)
        self.pointing_device.click_object(selected_dialog)

    def select_new_secret_chat(self):
        count = self.dialog_count
        count_including_new_secret_chat = count + 1
        while (count != count_including_new_secret_chat):
            count = self.dialog_count
        self.select_first_dialog()

    def _get_dialog_list(self):
        return self.wait_select_single(objectName='dialogListView')

    def _get_dialog_delegate(self, index):
        return self.wait_select_single(
            'DialogsListItem', objectName='dialog{}'.format(index))


class AccountDialogPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AccountDialogPage, self).__init__(*args)
        self._account_message_list = None
        self._message_area = None

    @property
    def account_message_list(self):
        if self._account_message_list is None:
            self._account_message_list = self.wait_select_single(AccountMessageList, objectName="accountMessageList")
        return self._account_message_list

    @property
    def message_area(self):
        if self._message_area is None:
            self._message_area = self.wait_select_single(AccountSendMessage, objectName='accountSendMessageArea')
        return self._message_area
    
    def enter_message(self, message):
        text_area = self.message_area.select_text_area()
        utilities.enter_text_in_text_area(text_area, message)

    def _get_sending_message_area(self):
        return self.wait_select_single(AccountSendMessage, objectName='accountSendMessageArea')

    def select_chat_info(self):
        self.pointing_device.click_object(self.wait_select_single(objectName='groupInfo_button'))

class AccountMessageList(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AccountMessageList, self).__init__(*args)
        self._messages = None

    @property
    def messages(self):
        if self._messages is None:
            self._messages = self.wait_select_single('MultipleSelectionListView', objectName="messagesListView")
        return self._messages

    def get_message_at_index(self, index):
        return self.wait_select_single(
            MessagesListItem, objectName='message{}'.format(index))


class AccountSendMessage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def select_text_area(self):
        return(self.wait_select_single('TextArea', objectName='sendMessageTextArea'))

    def select_attach_or_send(self):
        self.pointing_device.click_object(self.wait_select_single(objectName='sendMouseArea'))

    def select_attach_sticker_option(self):
        self.pointing_device.click_object(self.wait_select_single(objectName='stickerButton'))

    def select_attach_photo_option(self):
        self.pointing_device.click_object(self.wait_select_single(objectName="panelPhoto"))

    def select_attach_video_option(self):
        self.pointing_device.click_object(self.wait_select_single(objectName="panelVideo"))


class MessagesListItem(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(MessagesListItem, self).__init__(*args)
        self._message_status = None
        self._message_status_image = None
        self._message_label = None
        self._account_message_media = None

    @property
    def message_status(self):
        self._message_status = self.wait_select_single(objectName="messageStatus")
        return self._message_status

    @property
    def message_status_image(self):
        self._message_status_image = self.message_status.wait_select_single(objectName="statusImage")    
        return self._message_status_image

    @property
    def message_label(self):
        self._message_label = self.wait_select_single(objectName="messageText")    
        return self._message_label

    @property
    def account_message_media(self):
        self._account_message_media = self.wait_select_single(AccountMessageMedia, objectName="accountMessageMedia")
        return self._account_message_media


class AccountMessageMedia(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AccountMessageMedia, self).__init__(*args)
        self._media_message_status = None
        self._media_message_status_image = None

    @property
    def media_message_status(self):
        self._media_message_status = self.wait_select_single(objectName="mediaMessageStatus")
        return self._media_message_status

    @property
    def media_message_status_image(self):
        self._media_message_status_image = self.media_message_status.wait_select_single(objectName="statusImage")    
        return self._media_message_status_image

    
class AccountSettings(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AccountSettings, self).__init__(*args)
        self._list_item_logout = None
        self._settings_list = None
        self._popup_logout = None

    @property
    def settings_list(self):
        if self._settings_list is None:
            self._settings_list = self.wait_select_single(objectName='settingsList')
        return self._settings_list
    
    @property
    def list_item_logout(self):
        if self._list_item_logout is None:
            self._list_item_logout = self.wait_select_single(objectName="listItem_logout")
        return self._list_item_logout    

    def select_list_item_logout(self):
        self.settings_list.swipe_to_bottom()
        self.pointing_device.click_object(self.list_item_logout)


class ProfilePage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(ProfilePage, self).__init__(*args)

    @property
    def _member_list_count(self):
        return self._get_member_list().count

    def _get_member_list(self):
        return self.wait_select_single(objectName='memberListView')

    def _get_member_delegate(self, index):
        return self.wait_select_single(
            'TelegramContactsListItem', objectName='dialog{}'.format(index))
    
    def profile_member_at_index(self,index):
        return self._get_member_delegate(index)

    @property
    def profile_user_name(self):
        return self.wait_select_single(objectName="profileUserName")

    @property
    def profile_user_phone_number(self):
        return self.wait_select_single(objectName="profilePhoneNumber")

    @property
    def profile_user_photo(self):
        return self.wait_select_single(objectName="profileImageImport")

    def select_user_photo(self):
        return self.wait_select_single(objectName="profileImage")

    @property
    def switch_block(self):
        return self.wait_select_single(objectName="switchBlock")

    def select_switch_block(self):
        self.pointing_device.click_object(self.wait_select_single(objectName="switchBlock"))

    def select_switch_notification(self):
        self.pointing_device.click_object(self.wait_select_single(objectName="switchNotification"))

    def select_back_button(self):
        # if platform.model() == "Desktop":
        #     action = self.wait_select_single(objectName='apl_back_action_button')
        # else:
        action = self.wait_select_single(objectName='profileBack_button')
        self.pointing_device.click_object(action)

class AuthCountriesPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AuthCountriesPage, self).__init__(*args)

    def _click_action_button(self, action_name):
        action = self.wait_select_single(objectName='%s_button' % action_name)
        try:
            self.pointing_device.click_object(action)
        except:
            raise StateNotFoundError(action_name)
    
    def profile_member_at_index(self,index):
        return self._get_member_delegate(index)

    def enter_country_title_and_select(self, title):
        # Select search icon
        self._click_action_button("searchIcon")
        # Type for country
        text_field = self.wait_select_single('TextField', objectName='countryField')
        utilities.enter_text_in_text_area(text_field, title)
        # Select the search country
        self.pointing_device.click_object(self.wait_select_single(objectName="united_kingdom"))

class AuthNumberPage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AuthNumberPage, self).__init__(*args)

    def enter_phone_number(self, title):
        # Enter text
        text_field = self.wait_select_single('TextField', objectName='phoneNumberEntry')
        utilities.enter_text_in_text_area(text_field, title)
        # Press Send Code button
        self.pointing_device.click_object(self.wait_select_single(objectName="doneButton"))

class AuthCodePage(toolkit_emulators.UbuntuUIToolkitEmulatorBase):

    def __init__(self, *args):
        super(AuthCodePage, self).__init__(*args)

    def enter_code_in_textfield(self, title):
        # Enter text
        text_field = self.wait_select_single('TextField', objectName='verificationCodeEntry')
        utilities.enter_text_in_text_area(text_field, title)

    def press_sign_in_button(self):
        # Press 'Sign In' button
        self.pointing_device.click_object(self.wait_select_single(objectName="signInButton"))