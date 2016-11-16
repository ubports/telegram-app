# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-

#
# Ubuntu System Tests
# Copyright (C) 2016 Canonical
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


class Option():

    """Class to represent configuration option."""

    def __init__(self, name, help_string, default=None, mandatory=False):
        """
        Construct the Option object.
        :param name: Name of option.
        :param help_string: Help message to explain option to user.
        :param default: Default value for option.
        :param mandatory: Whether the option is mandatory or not.
        """
        self.name = name
        self.help_string = help_string
        self.default = str(default) if default else None
        self.mandatory = mandatory
