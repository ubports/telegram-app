#!/usr/bin/env python3

#
# Ubuntu System Tests
# Copyright (C) 2014 Canonical
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

import sys
from setuptools import find_packages, setup

assert sys.version_info >= (3,), 'Python 3 is required'


VERSION = '1.0'


setup(
    name='ubuntu-system-tests',
    version=VERSION,
    description='Automated tests for Ubuntu Touch images.',
    author='Canonical Platform QA Team',
    author_email='qa-team@lists.canonical.com',
    url='https://launchpad.net/ubuntu-system-tests',
    license='GPLv3',
    packages=find_packages(),
    package_data={
        'ubuntu_system_tests': ['tests/data/*/*']
    },
    install_requires=[
        'chardet',
        'python-debian',
        'requests',
        'retrying',
    ],
    entry_points={
        'console_scripts': [
            'ubuntu-system-tests = ubuntu_system_tests.run:main'
        ]
    },
    test_suite='ubuntu_system_tests.selftests',
    tests_require=[
        'python-subunit',
    ]
)
