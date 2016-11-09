from telegram.tests import TelegramAppTestCase
from telegram import emulators

# import subprocess
import ubuntuuitoolkit

from autopilot.matchers import Eventually
from testtools.matchers import Equals
from autopilot.display import Display
from autopilot import platform
from testtools import skipUnless

class BaseTelegramTestCase(TelegramAppTestCase):

	def setUp(self):
		super(BaseTelegramTestCase, self).setUp()

class OfflineTests(BaseTelegramTestCase):

	@skipUnless(
		platform.model() != "Desktop",
		"Offline Test is only available on Device"
	)

	def test_check_for_offline_message(self):
		display = Display.create()
		screenWidth = display.get_screen_width()
		screenHeight = display.get_screen_height()

		#Pull menu from top
		self.main_view.pointing_device.drag(screenWidth-202, 0, screenWidth-202, screenHeight)
		#Tap Flight Mode switch
		self.main_view.pointing_device.move(screenWidth-130,150)
		self.main_view.pointing_device.click()
		#Close menu
		self.main_view.pointing_device.drag(0,screenHeight, 0,0)

		account_page = self.main_view.account_page

		# if account_page.get_default_header().title in ('Telegram', 'Connecting...'):
		# 	print("WARNING - Please turn ON Airplane Mode")

		self.assertThat(account_page.get_default_header().title, Eventually(Equals("Waiting for network...")))

		#Pull menu from top
		self.main_view.pointing_device.drag(screenWidth-180, 0, screenWidth-180, screenHeight)
		#Tap Flight Mode switch
		self.main_view.pointing_device.move(screenWidth-130,150)
		self.main_view.pointing_device.click()
		#Close menu
		self.main_view.pointing_device.drag(0,screenHeight, 0,0)

		# Check header no longer says offline message
		self.assertThat(account_page.get_default_header().title, Eventually(Equals("Telegram")))
