# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-

#
# Ubuntu System Tests
# Copyright (C) 2014-2016 Canonical
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

import configparser
import logging
import os

from telegram.common import options

logger = logging.getLogger(__name__)
config_stack = None

DEFAULT_CONF = 'ubuntu-system-tests.conf'
KEY_DEFAULT = 'default'


CONFIG_OPTIONS = [
    options.Option(
        'device_serial', help_string='Device serial'),
    options.Option(
        'device_password', help_string='Device password', mandatory=True),
    options.Option(
        'output_dir', mandatory=True,
        help_string='Directory to store the tests results and artifacts.\n'
                    'WARNING: This directory will have all existing content '
                    'deleted!'),
    options.Option(
        'sim_0_pin', mandatory=True,
        help_string='SIM pin for the card in the first slot'),
    options.Option(
        'sim_1_pin',
        help_string='SIM pin for the card in the second slot'),
    options.Option(
        'wifi_ssid', mandatory=True,
        help_string='Wi-Fi SSID used to connect during setup wizard'),
    options.Option(
        'wifi_password', mandatory=True,
        help_string='Wi-Fi password used to connect during setup wizard'),
    options.Option(
        'device_security', default='Passcode',
        help_string='The security method to select during setup wizard'),
    options.Option(
        'bluetooth_device_name',
        help_string='Name of a nearby bluetooth pairing device'),
    options.Option(
        'device_phone_number',
        help_string="The phone number of the SIM card inserted in the first "
                    "SIM slot. This must be formatted exactly as you would "
                    "dial it."),
    options.Option(
        'device_phone_number2',
        help_string="The phone number of the SIM card inserted in the second "
                    "SIM slot. If the device has only one SIM slot, you can "
                    "leave this blank. This must be formatted exactly as you "
                    "would dial it."),
    options.Option(
        'telephony_service_number1',
        help_string="The phone number to call and message from "
                    "in the telephony service. In Twilio go to "
                    "https://www.twilio.com/user/account/"
                    "phone-numbers/incoming and click on the number "
                    "you want to use, then copy the 'Phone Number' "
                    "field exactly."),
    options.Option(
        'telephony_service_number2',
        help_string="The second phone number to call and message from "
                    "in the telephony service. In Twilio go to "
                    "https://www.twilio.com/user/account/"
                    "phone-numbers/incoming and click on the number "
                    "you want to use, then copy the 'Phone Number' "
                    "field exactly."),
    options.Option(
        # this is a private key, that will not be exported to
        # autopilot directly
        '_twilio_account_sid', mandatory=True,
        help_string='Account SID for Twilio. Please log into '
                    'https://www.twilio.com/login '
                    'and select \'Dashboard -> Show API Credentials\'.'
                    'Then copy and paste the Account SID value here.'),
    options.Option(
        # this is a private key, that will not be exported to
        # autopilot directly
        '_twilio_auth_token', mandatory=True,
        help_string='Auth token for Twilio account. Please log into '
                    'https://www.twilio.com/login '
                    'and select \'Dashboard -> Show API Credentials\'.'
                    'Then copy and paste the Auth token value here.'),
    options.Option(
        # this is a private key, that will not be exported to
        # autopilot directly
        'max_unity8_retry_delay', default=30000,
        help_string='The boundary for how long we should be retrying until '
                    'unity8 is started'),
    options.Option(
        'app_startup_cold_runs', default=0,
        help_string='How many iterations to run for the cold start app '
                    'performance tests?'),
    options.Option(
        'app_startup_hot_runs', default=0,
        help_string='How many iterations to run for the hot start app '
                    'performance tests?'),
    options.Option(
        'email_outlook', default='platform_qa_test@outlook.com',
        help_string='@outlook.com email address to use for email tests'),
    options.Option(
        'password_outlook', mandatory=True,
        help_string='@outlook.com password to use for email tests'),
    options.Option(
        'email_yahoo', default='platform_qa_test_account@yahoo.com',
        help_string='@yahoo.com email address to use for email tests'),
    options.Option(
        'password_yahoo', mandatory=True,
        help_string='@yahoo.com password to use for email tests'),
    options.Option(
        'username_imap', default='platform-qa-test-account',
        help_string='IMAP username to use for email tests'),
    options.Option(
        'password_imap', mandatory=True,
        help_string='IMAP password to use for email tests'),
    options.Option(
        'pictures_scalability_runs',
        help_string='The different loads used for scalability pictures tests '
                    'separated by comma'),
    options.Option(
        '_practitest_project_id',
        help_string='Practitest project ID to use for retrieving test lists.'),
    options.Option(
        '_practitest_api_token',
        help_string='Practitest api token used for authentication.'),
    options.Option(
        'country_sim', default='United States',
        help_string='The name of the country of the SIM card to use for '
                    'telegram login'),
]


def get_user_config_dir():
    """Return the path to the user configuration directory."""
    conf_dir = os.environ.get(
        'XDG_CONFIG_HOME', os.path.expanduser('~/.config'))
    return conf_dir


def get_device_config_file_path():
    """Return the path of the config file copied to the device."""
    return '/tmp/ubuntu-system-tests.conf'


def get_device_config_section():
    """Return the name of config section to use."""
    return os.environ.get('CONFIG_SECTION')


def get_config_stack_from_file(file_path, config_section=None):
    """Return config stack from specified file path."""
    config = UbuntuSystemTestsConfig(file_path, section=config_section)
    config.get_config_from_file()
    return config


def get_device_config_stack():
    """Return the config stack variable"""
    global config_stack
    if not config_stack:
        config_stack = get_config_stack_from_file(
            get_device_config_file_path(), get_device_config_section())
    return config_stack


def get_test_config_values(config_stack):
    """ Return a string containing the comma separated key=value options.
    The list includes the config values and the temporal ones as well
    """
    return config_stack.get_autopilot_config_string()


class UbuntuSystemTestsConfig():

    """Class to get and save test configuration data."""

    def __init__(self, file_name=None, section=None, options=None):
        """
        Construct the config and parser object.
        :param file_name: Name of config file to load. Default file is used if
                          value is not specified.
        :param section: Name of section to use in config file. Default section
                        is used if not specified.
        :param options: List of options that should be specified in config.
                        Default list of options is used if not specified.
        """
        user_config_dir = get_user_config_dir()
        if not os.path.exists(user_config_dir):
            os.mkdir(user_config_dir)
        self.file_path = os.path.join(
            user_config_dir, file_name or DEFAULT_CONF)
        self.section = section or KEY_DEFAULT
        self.parser = configparser.ConfigParser(
            allow_no_value=True, empty_lines_in_values=False,
            default_section=KEY_DEFAULT)
        self.config = {}
        self.options = options or CONFIG_OPTIONS

    def set(self, option_name, value):
        """Set a config value.
        :param option_name: Name of config option.
        :param value: Value to set.
        """
        self.config[option_name] = value
        self.save()

    def get(self, option_name, default=''):
        """Get a config value.
        :param option_name: Name of config option to get.
        :param default: Value to return as default if item doesn't exist.
        :return: Config option value if it exists. If the config option itself
        doesn't exist, return None. Otherwise if the option exists but no value
        is defined return the default value."""
        return self.config.get(option_name, default)

    def save(self):
        """Save the config to file."""
        mode = 'r+' if os.path.exists(self.file_path) else 'w'
        with open(self.file_path, mode) as f:
            self.parser.write(f)

    def get_config_from_string(self, string):
        """Load config from a string. This is used for selftests only.
        :param string: Config string to load from.
        """
        self.parser.read_string(string)
        self._save_config_for_section()

    def get_config_from_file(self):
        """Load config from file."""
        self.parser.read(self.file_path)
        self._save_config_for_section()

    def _save_config_for_section(self):
        """Save the current config for the specified section only."""
        self.config = self.parser[self.section]

    def get_missing_options(self, silent=False):
        """Check through each required option and get a value for each one
        that is not present.
        :param silent: Whether to query stdin for an input value or take a
                       default value where it exists.
        """
        save_required = False
        for option in self.options:
            if option.name in self.config:
                # name exists, check if its mandatory and if a value exists
                if option.mandatory and not self.config.get(option.name):
                    # mandatory and no value exists, so get one
                    self._get_option_value(option, silent)
                    save_required = True
            else:
                # option name not in config, get a value
                self._get_option_value(option, silent)
                save_required = True
        self._save_if_required(save_required)

    def _save_if_required(self, save_required):
        """Save config if it is required.
        :param save_required: Whether to save or not.
        """
        if save_required:
            self.save()

    def _get_option_value(self, option, silent):
        """Request a value for specified option.
        :param option: Required option.
        :param silent: Whether to query stdin or take default value.
        """
        if silent:
            default = option.default
            if default:
                self.config[option.name] = option.default
                logger.warning(
                    'In silent mode no value specified for option: "{o}". '
                    'Using default value "{v}".'.format(
                        o=option.name, v=default))
            else:
                logger.warning(
                    'In silent mode no default value specified for option: '
                    '"{o}". Continuing with value unset.'.format(
                        o=option.name))
        else:
            self._get_option_value_from_stdin(option)

    def _get_option_value_from_stdin(self, option):
        """Request option value from stdin.
        :param option: Required option.
        """
        help_msg = self._get_option_help_text(option)
        print(help_msg, end='')
        value = self._get_value_from_user_or_default(option)
        self.config[option.name] = value

    def _get_option_help_text(self, option):
        """Return help message for specified option.
        :param option: Required option.
        """
        help_msg = option.help_string
        default = option.default
        if default:
            help_msg += ' (leave blank to use default value: {})'.format(
                default)
        elif not option.mandatory:
            help_msg += ' (leave blank if not required)'
        help_msg += ': '
        return help_msg

    def _get_value_from_user_or_default(self, option):
        """Return value from stdin or default value if no stdin value."""
        return input() or option.default

    def get_autopilot_config_string(self):
        """Return the configuration in a string usable by Autopilot.

        That is, a list of key=value pairs serparated by comma.

        Any keys starting with _ will be ignored.

        """
        config = ''
        for key, value in self.config.items():
            if not key.startswith('_'):
                config += '{k}={v},'.format(k=key, v=value)

        # remove trailing ',' if it exists
        if config.endswith(','):
            config = config[:-1]
        return config
