from telegram.tests import TelegramAppTestCase
from telegram import emulators

import os
import dbus
import time
import datetime
import ubuntuuitoolkit

from autopilot.matchers import Eventually
from testtools.matchers import Equals
from autopilot.utilities import sleep


#from autopilot import logging as autopilot_logging
#from telegram import displays_and_interactions as interactions


class BaseTelegramTestCase(TelegramAppTestCase):

	def setUp(self):
		super(BaseTelegramTestCase, self).setUp()


class Logout(BaseTelegramTestCase):

	# Prerequisites:
	# - User is already logged on
	# - User has one contact which is online
	# - Online contact is running on Telegram CLI


	def test_UserLogout(self):

		# Open the account panel by tapping the navigation menu icon
		account_page = self.main_view.account_page
		account_panel = account_page.open_account_panel()
		self.assertThat(account_panel.opened, Eventually(Equals(True)))

		# Select the Settings option
		account_panel.select_settings()

		# Scroll to select the logout list item
		apl = self.main_view.apl
		settings_page = apl.settings_page
		settings_page.select_list_item_logout()
		sleep(3)
		logout_confirm_dialog = self.app.wait_select_single(objectName='logoutDialog')
		self.main_view.pointing_device.click_object(logout_confirm_dialog.wait_select_single(objectName='logoutConfirm'))

		# Checks that the Intro Page is now active
		introPage = apl.intro_page
