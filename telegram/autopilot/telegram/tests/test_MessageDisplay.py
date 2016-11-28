from telegram.tests import TelegramAppTestCase
from telegram import emulators
from telegram import utilities

import os
import dbus
import time
import datetime
# import subprocess
import ubuntuuitoolkit

from autopilot.matchers import Eventually
from testtools.matchers import Equals
from autopilot.display import Display
from autopilot import platform
from autopilot.utilities import sleep

#from autopilot import logging as autopilot_logging
#from telegram import displays_and_interactions as interactions

messageTypeText = "Autopilot: Text DO NOT REPLY"
messageTypeSpecialChar = "Autopilot: !$%^&*""()-_''=+?; DO NOT REPLY"
messageTypeUrl = "http://google.co.uk DO NOT REPLY"

message_status_received = "qrc:/qml/files/check_single_green.png"
message_status_read = "qrc:/qml/files/check_double_green.png"

class BaseTelegramTestCase(TelegramAppTestCase):

	def setUp(self):
		super(BaseTelegramTestCase, self).setUp()

class SecretChatTests(BaseTelegramTestCase):

	scenarios = [
		('dialog_msgText', {'input': "dialog_msgText"}),
		('dialog_msgSpecialChar', {'input': "dialog_msgSpecialChar"}),
		('dialog_msgUrl', {'input': "dialog_msgUrl"}),
		]

	def test_create_secret_chat(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the secret chat option
		account_panel.select_secret_chat()

		contact_page = self.main_view.apl.contacts_page

		# PAZ always select online user - Done
		# Select first contact
		self.main_view.pointing_device.click_object(contact_page.select_first_online_contact())

		dialog_list_page = account_page.get_dialog_list_page()
		# Give chance for app to add the secret chat to top of chat list
		sleep(3)
		# Select the top chat
		dialog_list_page.select_dialog_at_index(0)

		dialog_page = self.main_view.apl.dialog_page
		message_list = dialog_page.account_message_list
		inital_count = message_list.messages.count

		if self.input == "dialog_msgSpecialChar":
			dialog_page.enter_message(messageTypeSpecialChar)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgUrl":
			dialog_page.enter_message(messageTypeUrl)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgText":
			dialog_page.enter_message(messageTypeText)
			dialog_page.message_area.select_attach_or_send()

		# Wait for the message to be sent and allow for network latency
		# Check that the single tick image is displayed for the sent message
		sleep(2)

		message = message_list.get_message_at_index(0)
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_received)))

		# Check that the double tick image is displayed for the read message
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_read)))

		# PAZ I believe you need to tap on the URL to make sure it opens up in a browser. Not just
		# check that the URL received is the same as the URL sent
		
		# ASH - I don't believe theres a way to determine that Browser app opens up from taping 
		# a link. Could be wrong but some help on this would be appreciated.

		# ASH - Hold off. Needs to be rethinked	

		# if self.input == "dialog_msgUrl":
		# 	#Click on link
		# 	self.main_view.pointing_device.click_object(message.message_label)
		# 	#Check hovered link is same as entered link
		# 	self.assertThat(message.message_label.hoveredLink, Eventually(Equals(messageTypeUrl)))	

		#PAZ - always need to check for double tick

class GroupChatTests(BaseTelegramTestCase):

	scenarios = [
		('dialog_msgText', {'input': "dialog_msgText"}),
		('dialog_msgSpecialChar', {'input': "dialog_msgSpecialChar"}),
		('dialog_msgUrl', {'input': "dialog_msgUrl"}),
		]

	def test_create_group_chat(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the secret chat option
		account_panel.select_group_chat()
		contact_page = self.main_view.apl.contacts_page

		# Select first contact
		self.main_view.pointing_device.click_object(contact_page.select_first_online_contact())
		# Select second contact
		self.main_view.pointing_device.click_object(contact_page.select_second_contact())

		contact_page.enter_group_chat_title('NewGroupTitle')

		dialog_list_page = account_page.get_dialog_list_page()
		# Give chance for app to add the group chat to top of chat list
		sleep(3)
		# Select the top chat
		dialog_list_page.select_dialog_at_index(0)

		dialog_page = self.main_view.apl.dialog_page
		message_list = dialog_page.account_message_list
		inital_count = message_list.messages.count

		if self.input == "dialog_msgSpecialChar":
			dialog_page.enter_message(messageTypeSpecialChar)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgUrl":
			dialog_page.enter_message(messageTypeUrl)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgText":
			dialog_page.enter_message(messageTypeText)
			dialog_page.message_area.select_attach_or_send()

		# Wait for the message to be sent and allow for network latency
		# Check that the single tick image is displayed for the sent message
		sleep(1)

		message = message_list.get_message_at_index(0)
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_received)))

		# Check that the double tick image is displayed for the read message
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_read)))

class BasicMessagingTests(BaseTelegramTestCase):

	scenarios = [
		('dialog_msgText', {'input': "dialog_msgText"}),
		('dialog_msgSpecialChar', {'input': "dialog_msgSpecialChar"}),
		('dialog_msgUrl', {'input': "dialog_msgUrl"}),
		]

	def test_create_basic_chat(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select Contacts option
		account_panel.select_contacts()

		#Select first contact
		contact_page = self.main_view.apl.contacts_page
		self.main_view.pointing_device.click_object(contact_page.select_first_online_contact())

		dialog_page = self.main_view.apl.dialog_page
		message_list = dialog_page.account_message_list
		inital_count = message_list.messages.count

		if self.input == "dialog_msgSpecialChar":
			dialog_page.enter_message(messageTypeSpecialChar)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgUrl":
			dialog_page.enter_message(messageTypeUrl)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "dialog_msgText":
			dialog_page.enter_message(messageTypeText)
			dialog_page.message_area.select_attach_or_send()

		# Check that the single tick image is displayed for the sent message
		sleep(1)

		message = message_list.get_message_at_index(0)
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_received)))

		# Check that the double tick image is displayed for the read message
		self.assertThat(message.message_status_image.source, Eventually(Equals(message_status_read)))