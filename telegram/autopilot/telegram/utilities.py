# -*- Mode: Python; coding: utf-8; indent-tabs-mode: nil; tab-width: 4 -*-
# Copyright 2016 Canonical
#
# This file is part of telegram-app.
#
# telegram-app is free software: you can redistribute it and/or modify it
# under the terms of the GNU General Public License version 3, as published
# by the Free Software Foundation.


"""Telegram app helper functions"""

from autopilot.input import Keyboard

""" KEYBOARD UTILITIES """

global mainKeyboard

def enter_text_in_text_area(text_area, text):
	#Assign keyboard type
	mainKeyboard = Keyboard.create()

	#Focus TextArea and begin typing
	with mainKeyboard.focused_type(text_area) as kb:	    
		kb.type(text)

def enter_text_in_text_area_and_press_enter(text_area, text):
	#Assign keyboard type
	mainKeyboard = Keyboard.create()

	#Focus TextArea and begin typing
	with mainKeyboard.focused_type(text_area) as kb:	    
		kb.type(text)

	#Simulate 'Enter' key being pressed
	mainKeyboard.press_and_release('Enter')