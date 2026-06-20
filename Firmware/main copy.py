

import board
from kmk.kmk_keyboard import KMKKeyboard
from kmk.keys import KC
from kmk.scanners import DiodeOrientation
from kmk.modules.macros import Macros
from kmk.modules.macros import Press, Release, Tap




keyboard = KMKKeyboard()

keyboard.col_pins = (board.D8,board.D9,board.D10)
keyboard.row_pins = (board.D0,board.D1,board.D2)
keyboard.diode_orientation = DiodeOrientation.COL2ROW


macros = Macros()
keyboard.modules.append(macros)

Wow = KC.MACRO(
    Press(KC.LALT),
    Tap(KC.F4),
    Release(KC.LALT)
)

Cool = KC.MACRO( 
    Press(KC.LCTL),
    Press(KC.ESC),
    Tap(KC.X),
    Release(KC.LCTL),
    Release(KC.LCTL)

)
Chrome = KC.MACRO("Chrome")

Quick = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Release(KC.LCTL),
    Release(KC.ESC),
    Chrome,
    Tap(KC.ENT)

)

Boss = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Tap(KC.D),
    Release(KC.LCTL),
    Release(KC.ESC)
)

Tab = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.LSFT),
    Tap(KC.T),
    Release(KC.LCTL),
    Release(KC.LSFT)
)

GH = KC.MACRO("Github")

GHQ = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Release(KC.LCTL),
    Release(KC.ESC),
    GH,
    Tap(KC.ENT)
)

VS = KC.MACRO("VS code")

VSQ = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Release(KC.LCTL),
    Release(KC.ESC),
    VS,
    Tap(KC.ENT)

)

Lock = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Tap(KC.L),
    Release(KC.LCTL),
    Release(KC.ESC),
    


)

Steam = KC.MACRO("Steam")

SteamL = KC.MACRO(
    Press(KC.LCTL),
    Press(KC.ESC),
    Release(KC.LCTL),
    Release(KC.ESC),
    Steam,
    Tap(KC.ENT)


)


keyboard.keymap = [
    [Wow, Cool, Quick],
    [Boss, Tab, GHQ],
    [VSQ, Lock, SteamL],
]



if __name__ == '__main__':
    keyboard.go() 
