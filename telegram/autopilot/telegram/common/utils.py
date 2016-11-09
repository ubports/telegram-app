# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-

#
# Ubuntu System Tests
# Copyright (C) 2015 Canonical
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

import inspect
import os
import random
import shutil
import string


def clean_dir(dir_path):
    """Delete all the content of the directory"""
    if os.path.isdir(dir_path):
        for obj in os.listdir(dir_path):
            _delete(os.path.join(dir_path, obj))


def _delete(obj):
    """ Delete an object which could be either a file or a dir """
    if os.path.isfile(obj):
        os.remove(obj)
    else:
        shutil.rmtree(obj, True)


def delete_file(file_name):
    """Delete the file passed as parameter. In case the file does not
    exist, the deletion is skipped"""
    if os.path.isfile(file_name):
        os.unlink(file_name)


def get_random_string(length=10):
    """Get a string with random content"""
    return ''.join(random.choice(string.ascii_uppercase) for i in
                   range(length))


def get_tests_ids_to_run(tests_module=None, testsuite_list_filepath=None):
    """Return a list of the test ids to run in the test bed.

    :param tests_module: The module that contains the Ubuntu System Tests.
        Default value is ubuntu_system_tests.tests. Currently, a value other
        than the default is used only for self-testing.

    """
    tests_from_config = get_tests_to_run()
    if tests_from_config:
        return tests_from_config.split()

    # If we do this at the module level then we need to have unity8 and UITK on
    # the host and would rather avoid this
    from ubuntu_system_tests import external_tests
    test_ids = external_tests.get_external_test_ids(testsuite_list_filepath)

    if tests_module is None:
        # We delay the import so this is only executed in the test bed, not on
        # the host which might have a different version of the libraries used
        # in the system tests.
        from ubuntu_system_tests import tests
        tests_module = tests

    if inspect.ismodule(tests_module):
        test_ids.append(tests_module.__name__)

    return test_ids


def get_tests_to_run():
    return os.getenv('TESTS_TO_RUN')
