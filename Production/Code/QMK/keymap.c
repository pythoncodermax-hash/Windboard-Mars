// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


enum custom_keycodes {
    Wow = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Wow:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(KC_LEFT_ALT) SS_TAP(KC_F4) SS_UP(KC_LEFT_ALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
}

enum custom_keycodes {
    Cool = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Cool:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(KC_LEFT_GUI) SS_TAP(KC_X) SS_UP(KC_LEFT_GUI));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
}

enum custom_keycodes {
    Quick = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Quick:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(KC_LEFT_GUI) "chrome" SS_TAP(KC_ENTER));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};


enum custom_keycodes {
    Boss = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Boss:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(KC_LEFT_GUI) SS_TAP(KC_D) SS_UP(KC_LEFT_GUI));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

enum custom_keycodes {
    Tab = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Tab:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(KC_LCTL) SS_DOWN(KC_LSFT) SS_TAP(KC_T) SS_UP(KC_LCTL) SS_UP(KC_LSFT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

enum custom_keycodes {
    GITH = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case GITH:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(KC_LEFT_GUI) "github" SS_TAP(KC_ENTER));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};


enum custom_keycodes {
    VS = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case VS:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(KC_LEFT_GUI) "VS" SS_TAP(KC_ENTER));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

enum custom_keycodes {
    Lock = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Lock:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(KC_LEFT_GUI) SS_TAP(KC_L) SS_UP(KC_LEFT_GUI));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};



enum custom_keycodes {
    Steam = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case Steam:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(KC_LEFT_GUI) "Steam" SS_TAP(KC_ENTER));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┼
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┼
     * │ 1 │ 2 │ 3 │ 
     */
    [0] = LAYOUT(
        Wow,   Cool,   Quick,
        Boss,   Tab,   GITH,   
        VS,   Lock,   Steam 
    )



    };








    #ifdef OLED_ENABLE
    bool oled_task_user(void) {
    // Host Keyboard Layer Status


    static void render_logo(void) {
    const unsigned char epd_bitmap_ [] PROGMEM = {
	// 'Hello, 32x32px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x56, 0x93, 0x82, 0x80, 0x54, 0x92, 0x82, 0x80, 0x76, 0x92, 0x80, 0x00, 
	0x54, 0x92, 0x84, 0x20, 0x56, 0xdb, 0x83, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x04, 0x40, 0x10, 0x63, 0x0a, 0xa0, 0x28, 0x36, 
	0x11, 0x10, 0x28, 0x18, 0x20, 0x08, 0x44, 0x7c, 0x40, 0x04, 0x44, 0xc6, 0x80, 0x02, 0x82, 0x83
    };

    oled_write_P(qmk_logo, false);
    } 

    bool oled_task_user(void) {
    render_logo();
    return false;
    }















};
