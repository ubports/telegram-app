from telegram.tests import TelegramAppTestCase
from telegram import emulators

import os
import dbus
import time
import datetime
import threading
# import subprocess
import ubuntuuitoolkit

from autopilot.matchers import Eventually
from testtools.matchers import Equals, NotEquals
from autopilot.display import Display
from autopilot import platform
from autopilot.utilities import sleep


#from autopilot import logging as autopilot_logging
#from telegram import displays_and_interactions as interactions

message_sending_image = "qrc:/qml/files/msg_clock.png"
message_received_image = "qrc:/qml/files/check_single_green.png"
message_read_image = "qrc:/qml/files/check_double_green.png"
media_received_image = "qrc:/qml/files/check_single_white.png"
media_read_image = "qrc:/qml/files/check_double_white.png"


class BaseTelegramTestCase(TelegramAppTestCase):

	def setUp(self):
		super(BaseTelegramTestCase, self).setUp()


class SecretMessaging(BaseTelegramTestCase):

	# Prerequisites:
	# - User is already logged on
	# - User has one contact which is online
	# - Online contact is running on Telegram CLI

	scenarios = [
		('textMessageSend', {'input': "textMessageSend"}),
		('textMessageSendReceive', {'input': "textMessageSendReceive"}),
		('photoMessageSend', {'input': "photoMessageSend"}),
		# ('photoMessageReceive', {'input': "photoMessageReceive"}),
		]

	def test_SecretMessage(self):

		# Note the number of dialogs in the dialog list at the start of the test
		account_page = self.main_view.account_page
		dialog_list_page = account_page.get_dialog_list_page()
		count = dialog_list_page.dialog_count

		# Open the account panel by tapping the navigation menu icon
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the secret chat option
		account_panel.select_secret_chat()

		# Select an online contact
		apl = self.main_view.apl
		contacts_page = apl.contacts_page
		recipient = contacts_page.select_first_online_contact()
		self.main_view.pointing_device.click_object(recipient)

		# Create a new secret chat
		self.assertThat(count, Eventually(Equals(count + 1)))
		dialog_list_page.select_dialog_at_index(0)
		dialog_page = apl.dialog_page

		# Check that only system message is being displayed
		message_list = dialog_page.account_message_list
		initial_count = message_list.messages.count
		self.assertThat(initial_count, Equals(1))

		status_received = message_received_image
		status_read = message_read_image

		if "textMessage" in self.input or self.input == "photoMessageReceive":
			# Send the first message

			ts = time.time()
			timestamp = datetime.datetime.fromtimestamp(ts).strftime('%y:%m:%d,%H:%M:%S')
			message_to_send = "Autopilot:" + timestamp
			if self.input == "textMessageSend":
				message_to_send = message_to_send + " DO NOT REPLY"
			elif self.input == "photoMessageReceive":
				message_to_send = message_to_send + " SEND IMAGE"

			dialog_page.enter_message(message_to_send)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "photoMessageSend":

			if platform.model() == "Desktop":
				return

			dialog_page.message_area.select_attach_or_send()
			dialog_page.message_area.select_attach_photo_option()
			self.main_view.select_content_hub_app("Camera")

			# Allow time to open the app
			sleep(5)

			display = Display.create()
			screen_width = display.get_screen_width()
			screen_height = display.get_screen_height()
			button_x_pos = screen_width / 2.0
			button_y_pos = screen_height - 100.0

			# Click on the take photo button
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			# Allow time to take the photo
			sleep(5)

			# Tap the tick to return to Telegram
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			status_received = media_received_image
			status_read = media_read_image

			# Allow time for photo to be sent
			sleep(30)

		# Check that sent message appears in the dialog content
		self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 1)))

		# Check that the message received image is displayed for the sent message
		index_of_sent_message = 0
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input != "photoMessageSend":
			self.assertThat(status_image.source, Eventually(Equals(status_received)))

		if "Receive" in self.input:

			index_of_sent_message = index_of_sent_message + 1

			# Check for reply
			self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 2)))

		# Check that the message read image is displayed for the sent message
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input == "photoMessageSend" and platform.model() != "Desktop":
			status_image = message.account_message_media.media_message_status_image

		self.assertThat(status_image.source, Eventually(Equals(status_read)))

				

class BasicMessaging(BaseTelegramTestCase):

	scenarios = [
		('textMessageSend', {'input': "textMessageSend"}),
		('textMessageSendReceive', {'input': "textMessageSendReceive"}),
		('photoMessageSend', {'input': "photoMessageSend"}),
		('photoMessageReceive', {'input': "photoMessageReceive"}),
		]

	def test_BasicMessage(self):

		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select contacts
		account_panel.select_contacts()

		# Select an online contact
		apl = self.main_view.apl
		contacts_page = apl.contacts_page
		recipient = contacts_page.select_first_online_contact()
		self.main_view.pointing_device.click_object(recipient)

		# Check that no messages are being displayed
		dialog_page = apl.dialog_page
		message_list = dialog_page.account_message_list
		initial_count = message_list.messages.count

		# Initialise status image values
		status_received = message_received_image
		status_read = message_read_image

		if "textMessage" in self.input or self.input == "photoMessageReceive":

			# Send the first message
			ts = time.time()
			timestamp = datetime.datetime.fromtimestamp(ts).strftime('%y:%m:%d,%H:%M:%S')
			message_to_send = "Autopilot" + timestamp
			if self.input == "textMessageSend":
				message_to_send = message_to_send + " DO NOT REPLY"
			elif self.input == "photoMessageReceive":
				message_to_send = message_to_send + " SEND IMAGE"

			dialog_page.enter_message(message_to_send)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "photoMessageSend":

			if platform.model() == "Desktop":
				return

			dialog_page.message_area.select_attach_or_send()
			dialog_page.message_area.select_attach_photo_option()
			self.main_view.select_content_hub_app("Camera")

			# Allow time to open the app
			sleep(5)

			display = Display.create()
			screen_width = display.get_screen_width()
			screen_height = display.get_screen_height()
			button_x_pos = screen_width / 2.0
			button_y_pos = screen_height - 100.0

			# Click on the take photo button
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			# Allow time to take the photo
			sleep(5)

			# Tap the tick to return to Telegram
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			status_received = media_received_image
			status_read = media_read_image

			# Allow time for photo to be sent
			sleep(30)

		# Check that sent message appears in the dialog content
		self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 1)))

		# Check that the message received image is displayed for the sent message
		index_of_sent_message = 0
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input != "photoMessageSend":
			self.assertThat(status_image.source, Eventually(Equals(status_received)))

		if "Receive" in self.input:

			index_of_sent_message = index_of_sent_message + 1

			# Check for reply
			self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 2)))

		# Check that the message read image is displayed for the sent message
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input == "photoMessageSend" and platform.model() != "Desktop":
			status_image = message.account_message_media.media_message_status_image

		self.assertThat(status_image.source, Eventually(Equals(status_read)))


class GroupMessaging(BaseTelegramTestCase):

	scenarios = [
		('textMessageSend', {'input': "textMessageSend"}),
		('textMessageSendReceive', {'input': "textMessageSendReceive"}),
		('photoMessageSend', {'input': "photoMessageSend"}),
		('photoMessageReceive', {'input': "photoMessageReceive"}),
		]

	def test_GroupMessage(self):

		# Note the number of dialogs in the dialog list at the start of the test
		account_page = self.main_view.account_page
		dialog_list_page = account_page.get_dialog_list_page()
		count = dialog_list_page.dialog_count

		# Open the account panel by tapping the navigation menu icon
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the group chat option
		account_panel.select_group_chat()

		# Select an online contact
		apl = self.main_view.apl
		contacts_page = apl.contacts_page
		online_member_one = contacts_page.select_first_online_contact()
		self.main_view.pointing_device.click_object(online_member_one)

		# Select another contact
		member_two = contacts_page.select_second_contact()
		self.main_view.pointing_device.click_object(member_two)

		# Add a group chat title
		contacts_page.enter_group_chat_title('Autopilot Group Messaging')

		# Select the group chat dialog just created
		self.assertThat(count, Eventually(Equals(count + 1)))
		dialog_list_page.select_dialog_at_index(0)
		dialog_page = apl.dialog_page

		# Check that only system message is being displayed
		message_list = dialog_page.account_message_list
		initial_count = message_list.messages.count
		self.assertThat(initial_count, Equals(1))

		# Initialise status image values
		status_received = message_received_image
		status_read = message_read_image

		if "textMessage" in self.input or self.input == "photoMessageReceive":

			# Generate and send the first message
			ts = time.time()
			timestamp = datetime.datetime.fromtimestamp(ts).strftime('%y:%m:%d,%H:%M:%S')
			message_to_send = "Autopilot:" + timestamp
			if self.input == "textMessageSend":
				message_to_send = message_to_send + " DO NOT REPLY"
			elif self.input == "photoMessageReceive":
				message_to_send = message_to_send + " SEND IMAGE"

			dialog_page.enter_message(message_to_send)
			dialog_page.message_area.select_attach_or_send()

		elif self.input == "photoMessageSend":

			if platform.model() == "Desktop":
				return

			dialog_page.message_area.select_attach_or_send()
			sleep(1)
			dialog_page.message_area.select_attach_photo_option()
			self.main_view.select_content_hub_app("Camera")

			# Allow time to open the app
			sleep(5)

			display = Display.create()
			screen_width = display.get_screen_width()
			screen_height = display.get_screen_height()
			button_x_pos = screen_width / 2.0
			button_y_pos = screen_height - 100.0

			# Click on the take photo button
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			# Allow time to take the photo
			sleep(5)

			# Tap the tick to return to Telegram
			self.main_view.pointing_device.move(button_x_pos, button_y_pos)
			self.main_view.pointing_device.click()

			status_received = media_received_image
			status_read = media_read_image

			# Allow time for photo to be sent
			sleep(30)

		# Check that sent message appears in the dialog content
		self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 1)))

		# Check that the message received image is displayed for the sent message
		index_of_sent_message = 0
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input != "photoMessageSend":
			self.assertThat(status_image.source, Eventually(Equals(status_received)))

		if "Receive" in self.input:

			index_of_sent_message = index_of_sent_message + 1

			# Check for reply
			self.assertThat(message_list.messages.count, Eventually(Equals(initial_count + 2)))

		# Check that the double tick image is displayed for the read message
		message = message_list.get_message_at_index(index_of_sent_message)
		status_image = message.message_status_image

		if self.input == "photoMessageSend" and platform.model() != "Desktop":
			status_image = message.account_message_media.media_message_status_image

		self.assertThat(status_image.source, Eventually(Equals(status_read)))
