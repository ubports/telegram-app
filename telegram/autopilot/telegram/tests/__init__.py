from autopilot.testcase import AutopilotTestCase
from autopilot import platform
from ubuntuuitoolkit import emulators as toolkit_emulators
from autopilot.input import Mouse, Touch, Pointer
from telegram import emulators
from os.path import abspath, dirname, join
from autopilot.matchers import Eventually
from testtools.matchers import Equals

import fixtures
import ubuntuuitoolkit
import subprocess

class TelegramAppTestCase(AutopilotTestCase):

	def __init__(self, *args):
		super(TelegramAppTestCase, self).__init__(*args)
		self._main_view = None

	@property
	def main_view(self):
		if self._main_view is None:
			self._main_view = self.app.wait_select_single(emulators.MainView)
		return self._main_view	

	def setUp(self, parameter=""):
		#self.pointing_device = Pointer(self.input_device_class.create())
		super(TelegramAppTestCase, self).setUp()

		subprocess.call(['pkill', 'telegram-app'])

		#Preconditions: Logged In
		if platform.model() == "Desktop":
			self.app = self.launch_desktop_application(parameter)
		else:
			self.app = self.launch_mobile_application(parameter)
		self.assertThat(self.main_view.visible, Eventually(Equals(True)))
		# self.check_user_has_logged_in()

		# if (self.check_user_has_logged_in()):
		# 	self.assertThat(self.main_view.visible, Eventually(Equals(True)))
		# else:
		# 	raise RuntimeError("User must be logged in")


	def launch_desktop_application(self, parameter):
		#Setup the lib path environment variable using absolute path values, required by the app to access the necessary libs
		library_path = abspath(join(dirname(__file__), '..', '..', '..', '..', 'build_desktop',))
		envValue = library_path + ':$LD_LIBRARY_PATH'
		self.useFixture(fixtures.EnvironmentVariable('LD_LIBRARY_PATH',envValue))

		#Launch the test application using absolute path values
		full_path = abspath(join(dirname(__file__), '..', '..', '..', '..', 'build_desktop','lib','x86_64-linux-gnu','bin','telegram'))
		print(full_path + " " + parameter)
		return self.launch_test_application(
			full_path, 
			parameter, 
			app_type='qt', 
			emulator_base=toolkit_emulators.UbuntuUIToolkitEmulatorBase)

	def launch_mobile_application(self, parameter):
		return self.launch_click_package(
			"com.ubuntu.telegram",
			app_uris=['QT_LOAD_TESTABILITY=1'], 
			emulator_base=toolkit_emulators.UbuntuUIToolkitEmulatorBase)

	def check_user_has_logged_in(self):
		account_page = self.main_view.account_page
		self.assertThat(account_page.visible, Eventually(Equals(True)))

		# try:
		# 	self.main_view.get_account_page()
		# 	self.assertThat(self.main_view.account_page.visible, Eventually(Equals(True)))
		# 	return True
		# except:
		# 	return False