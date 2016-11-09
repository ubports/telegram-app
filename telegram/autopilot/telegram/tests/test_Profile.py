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
from autopilot.utilities import sleep

messageTypeText = "Autopilot: Text INSTANT REPLY"

class BaseTelegramTestCase(TelegramAppTestCase):

	def setUp(self):
		super(BaseTelegramTestCase, self).setUp()

class ProfileTests(BaseTelegramTestCase):

	def test_check_group_to_verify_members(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the secret chat option
		account_panel.select_group_chat()

		# Select first online contact
		contacts_page = self.main_view.apl.contacts_page

		# Select first contact
		self.main_view.pointing_device.click_object(contacts_page.select_contact_at_index(0))
		# Temporarily save fullname of contact
		tempUser1Name = contacts_page.select_contact_at_index(0).fullName

		# Select second contact
		self.main_view.pointing_device.click_object(contacts_page.select_contact_at_index(1))
		tempUser2Name = contacts_page.select_contact_at_index(1).fullName

		#Enter group title and press Enter
		contacts_page.enter_group_chat_title('ProfileTest-NewGroup')

		#Assign dialog list
		account_page = self.main_view.account_page
		dialog_list_page = account_page.get_dialog_list_page()
		count = dialog_list_page.dialog_count
		self.assertThat(count, Eventually(Equals(count + 1)))
		dialog_list_page.select_dialog_at_index(0)

		#Press groupInfo button
		self.main_view.apl.dialog_page.select_chat_info()

		#Assign ProfilePage
		profile_page = self.main_view.apl.profile_page

		# Check user 1 is listed
		self.assertThat(str(profile_page.profile_member_at_index(1).title), Equals(tempUser1Name))
		# Check user 2 is listed
		self.assertThat(str(profile_page.profile_member_at_index(0).title), Equals(tempUser2Name))


	def test_check_blocked_user(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select Contacts option
		account_panel.select_contacts()

		#Select first contact
		contacts_page = self.main_view.apl.contacts_page
		recipient = contacts_page.select_first_online_contact()
		self.main_view.pointing_device.click_object(recipient)

		dialog_page = self.main_view.apl.dialog_page
		message_list = dialog_page.account_message_list
		inital_count = message_list.messages.count

		#Send message
		dialog_page.enter_message(messageTypeText)
		dialog_page.message_area.select_attach_or_send()

		#Check received reply
		self.assertThat(message_list.messages.count, Eventually(Equals(inital_count + 2)))

		#Tap the groupInfo button
		self.main_view.apl.dialog_page.select_chat_info()
		#Assign ProfilePage
		profile_page = self.main_view.apl.profile_page
		#Turn on Block contact
		switch = profile_page.switch_block
		self.main_view.pointing_device.click_object(switch)
		#Verify blocked user switch is turned ON
		self.assertThat(switch.checked, Equals(True))
		#Go back to dialog page
		profile_page.select_back_button()
		self.main_view.apl.clear_profile_page()

		#Send message
		dialog_page.enter_message(messageTypeText)
		dialog_page.message_area.select_attach_or_send()

		# Check that the sent message was read
		message = None
		for idx in range(0, message_list.messages.count):
			message = message_list.get_message_at_index(idx)
			if message.message_label.text == messageTypeText:
				self.assertThat(message.message_status_image.source, Eventually(Equals("qrc:/qml/files/check_double_green.png")))
				break
			else:
				message = None
		self.assertThat(message is None, Equals(False))

		# Check that no response was received (wait for 10 seconds)
		sleep(10)
		self.assertThat(message_list.messages.count, Equals(inital_count + 3))

		#Tap the groupInfo button
		self.main_view.apl.dialog_page.select_chat_info()
		#Assign ProfilePage
		profile_page = self.main_view.apl.profile_page
		#Turn off Block contact.
		switch = profile_page.switch_block
		self.assertThat(switch.checked, Eventually(Equals(True)))
		self.main_view.pointing_device.click_object(switch)
		#Verify blocked user switch is turned OFF
		self.assertThat(switch.checked, Eventually(Equals(False)))
		#Go back to dialog page
		profile_page.select_back_button()

		#Check number of messages and send message
		self.assertThat(message_list.messages.count, Equals(inital_count + 3))
		#Send message
		dialog_page.enter_message(messageTypeText)
		dialog_page.message_area.select_attach_or_send()

		#Check received reply
		self.assertThat(message_list.messages.count, Eventually(Equals(inital_count + 5)))

class ProfileDetails(BaseTelegramTestCase):

	def test_verify_profile_details(self):
		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select Contacts option
		account_panel.select_contacts()

		#Select first contact
		contact_page = self.main_view.apl.contacts_page
		contact = contact_page.select_contact_at_index(0)

		self.main_view.pointing_device.click_object(contact)

		self.main_view.apl.dialog_page.select_chat_info()

		profile_page = self.main_view.apl.profile_page

		# print(profile_page.profile_user_photo.get_properties())

		# print("IMAGE SRC: " + profile_page.profile_user_photo.source)

		sleep(3)

		if profile_page.select_user_photo() is None:
			#User does not have a profile image
			print('WARNING - Profiles - Contact does not have Profile image')
		else:
			self.assertThat(profile_page.select_user_photo() is not None, Equals(True))

		# Check the user has a name
		if profile_page.profile_user_name.text is None:
			raise RuntimeError("Profiles - Contact does not have Name")

		# Check the user has a phone number 
		if profile_page.profile_user_phone_number.text is None:
			raise RuntimeError("Profiles - Contact does not have valid Phone Number")