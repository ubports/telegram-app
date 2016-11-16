#!/usr/bin/env python3
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

import getpass
import glob
import os
import re
import socket
import stat
import subprocess

from ubuntu_system_tests.common import (
    get_random_string,
    delete_file
)

SSH_IP = 'SSH_IP'
SSH_PASSPHRASE = 'SSH_PASSPHRASE'
SSH_PRIVATE_KEY = 'SSH_PRIVATE_KEY'
SSH_USER = 'SSH_USER'


def get_ssh_ip_address():
    """Return ssh passphrase value."""
    return os.environ.get(SSH_IP)


def get_ssh_passphrase():
    """Return ssh passphrase value."""
    return os.environ.get(SSH_PASSPHRASE)


def get_ssh_private_key():
    """Return path to ssh private key file."""
    return os.environ.get(SSH_PRIVATE_KEY)


def get_ssh_user():
    """Return ssh username value."""
    return os.environ.get(SSH_USER)


def _get_local_ip_address():
    """ Retrieve the local ip address
    :return: The ip obtained from the socket connection
    """
    ip = '127.0.0.1'
    try:
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.connect(("8.8.8.8", 80))
        ip = s.getsockname()[0]
    finally:
        s.close()
    return ip


def _get_set_env_var_command(name, value):
    """Return command to set environment variable on device."""
    return ['--env={n}={v}'.format(n=name, v=value)]


def _get_copy_file_to_device_command(src, dest):
    """Return command to copy a file to the device."""
    return ['--copy', '{s}:{d}'.format(s=src, d=dest)]


def get_ssh_config_commands():
    """ Retrieve a private key that can be used to connect to the host and add
    the public key to the authorized_keys if it is not included yet. If either
    it is not required to configure ssh or the ssh password is defined,
    keypairs are not used and the function return None
    """
    cmds = []
    cmds.extend(_get_set_env_var_command(SSH_IP, _get_local_ip_address()))
    cmds.extend(_get_set_env_var_command(SSH_USER, getpass.getuser()))

    # Add the private key and the passphrase when it is needed
    private_key = get_valid_key()
    if not private_key:
        private_key, public_key = generate_keypair(get_random_string(10))
        add_public_key_to_ssh_uthorized_keys(public_key)
        os.remove(public_key)

    device_key_file = get_device_keyfile_path(private_key)
    cmds.extend(_get_set_env_var_command(
        SSH_PASSPHRASE, _get_key_passprhase(private_key)))
    cmds.extend(_get_set_env_var_command(SSH_PRIVATE_KEY, device_key_file))
    cmds.extend(_get_copy_file_to_device_command(private_key, device_key_file))
    return cmds


def _get_key_passprhase(private_key):
    """ Get the passphrase from the name, None if it is not found """
    keyname = os.path.basename(private_key)
    match = re.search(r'test_(.+)_key', keyname)
    if match:
        return match.group(1)
    else:
        return


def _get_ssh_authorized_keys_path():
    path = os.path.join(os.path.expanduser('~'), '.ssh', 'authorized_keys')
    directory = os.path.dirname(path)
    if not os.path.exists(directory):
        os.makedirs(directory)
    if not os.path.exists(path):
        file = open(path, 'w')
        file.close()
    return path


def is_authorized_key(id):
    """ Indicate if the comment it is part of the ssh authorized_keys file
    :param id: a string used to identify the public key. Currently the
    passphrase is being used for that
    """
    authorized_keys = _get_ssh_authorized_keys_path()
    command_check = ['grep', '"{c}"'.format(c=id), authorized_keys]
    return subprocess.call(command_check, stdout=subprocess.PIPE) == 0


def add_public_key_to_ssh_uthorized_keys(public_key):
    """ Add the public key to the ssh authorized_keys if is not included yet"""
    # In case the public key is not authorized yet, add it to the
    # authorized_keys file
    authorized_keys = _get_ssh_authorized_keys_path()
    command_add = 'cat {public_key} >> {authorized_keys}'.format(
        public_key=public_key, authorized_keys=authorized_keys)
    subprocess.call(command_add, shell=True)


def get_valid_key():
    """ Retrieve a private key which has its public key is already authorized
    to be used through ssh
    """
    all_keys = get_all_defined_keys()
    for key in all_keys:
        passphrase = _get_key_passprhase(key)
        if passphrase and is_authorized_key(passphrase):
            return key
    return


def get_all_defined_keys():
    """ Retrieve the keys already saved in the tmp dir """
    return glob.glob('/tmp/test_*_key')


def generate_keypair(passphrase):
    """ Create a pair of keys with the passphrase as part of the key names """
    keypath = '/tmp/test_{}_key'.format(passphrase)
    command = 'ssh-keygen -t rsa -b 4096 -C "{p}" -P "{p}" -f {k} -q'
    command = command.format(p=passphrase,
                             k=keypath)
    subprocess.check_call(command, shell=True)
    return keypath, keypath + '.pub'


def get_device_keyfile_path(filepath):
    """Return the path of the config file copied to the device."""
    return os.path.join('/tmp', os.path.basename(filepath))


def prepare_device_keys():
    """ Prepare the keyfile to be used by changing the ownership and the
    permissions. These changes are done when other ssh authentication
    mechanisms have not being selected
    """
    passphrase = get_ssh_passphrase()
    key_file = get_ssh_private_key()

    if passphrase and key_file and os.path.isfile(key_file):
        os.chown(key_file, os.getuid(), os.getgid())
        os.chmod(key_file, stat.S_IREAD)


def ensure_device_keyfile_deleted():
    """ Delete the private key file in the device when required  """
    key_file = get_ssh_private_key()
    not key_file or delete_file(key_file)
