#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(

    //,------------------------------------------------------.                    ,-----------------------------------------------------.
    LT(3,KC_ESC),   KC_Q,   KC_W,   KC_E,      KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_RCTL,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LALT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        SC_LSPO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH, SC_RSPC,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                          //|-------------+-------------+-------------| |-------------+-------------+-------------|
                                KC_LGUI,   LT(1,KC_ENT),  LT(6,KC_TAB),  LT(4,KC_BSPC), LT(2,KC_SPC), LT(5,KC_DEL)
                          //`-----------------------------------------'  '----------------------------------------'
    ),
	[1] = LAYOUT_split_3x6_3(
         KC_LCTL,   LGUI(KC_L),  LCA(KC_DEL), LCA(KC_END), LCA(KC_INS),    KC_PSCR,      LSFT(KC_LEFT), LSFT(KC_DOWN), LSFT(KC_UP), LSFT(KC_RGHT), LSFT(KC_ENT), KC_TRNS,
          KC_ENT,   LCTL(KC_Y),   LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V), LCTL(KC_Z),            KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,       KC_ENT,  KC_DEL,
         SC_LSPO, LCTL(KC_ENT), LCTL(KC_GRV),      KC_DEL,   RCS(KC_V),    KC_BSPC,            KC_HOME,       KC_PGDN,     KC_PGUP,        KC_END,       KC_INS, SC_RSPC,
                                                    KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[2] = LAYOUT_split_3x6_3(
        KC_ESC, KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR,        KC_APP,  KC_NUM, KC_SCRL,  KC_INS,  KC_DEL, KC_TRNS,
        KC_GRV, KC_MINS, KC_4, KC_5, KC_6, KC_SLSH,       KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_TRNS,  KC_ENT,
        KC_ENT, KC_PCMM, KC_1, KC_2, KC_3, KC_EQL,        KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_RSFT,
                        KC_PDOT, KC_0, KC_MINS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[3] = LAYOUT_split_3x6_3(
        KC_TRNS, LGUI(KC_L), LCA(KC_DEL), LCA(KC_END), LCA(KC_INS),   KC_NO,    KC_WFWD, KC_WSTP, KC_WREF, KC_WBAK,  KC_DEL, KC_TRNS,
        KC_SLEP,    KC_PSCR,      KC_PWR,      KC_NUM,       KC_NO,   KC_NO,    KC_MRWD, KC_MPLY, KC_MSTP, KC_MFFD, KC_MPRV,  KC_INS,
        QK_BOOT,    DB_TOGG,     KC_WAKE,       KC_NO,     KC_SCRL, KC_CAPS,    KC_MUTE, KC_VOLU, KC_VOLD, KC_EJCT, KC_LEFT, KC_RGHT,
                                             KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[4] = LAYOUT_split_3x6_3(
        KC_LCTL, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL,
        KC_LALT, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT,
        SC_LSPO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT,
                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[5] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TILD, KC_AMPR, KC_ASTR,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,
        KC_TRNS, KC_MINS,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,    KC_PMNS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS,
        SC_LSPO, KC_SCLN, KC_EXLM,   KC_AT, KC_HASH,  KC_EQL,    KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_RSFT,
                             KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[6] = LAYOUT_split_3x6_3(
        KC_TRNS,   LGUI(KC_L),  LCA(KC_DEL), LCA(KC_END), LCA(KC_INS),    KC_PSCR,      KC_AGIN, KC_PSTE, KC_COPY,  KC_CUT, KC_UNDO, KC_TRNS,
         KC_ENT,   LCTL(KC_Y),   LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V), LCTL(KC_Z),      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_ENT,  KC_DEL,
        KC_LSFT, LCTL(KC_ENT), LCTL(KC_GRV),      KC_DEL,   RCS(KC_V),    KC_BSPC,      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_FIND, KC_RSFT,
                                                        KC_TRNS, KC_TRNS, KC_TRNS,      KC_BTN2, KC_BTN1, KC_BTN3
    )
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    led_t led_state = host_keyboard_led_state();

    // Host Keyboard Layer Status
    oled_write_P(PSTR("\nLayer_____\n"), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("Media"), false);
            break;
        case 4:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("SYM\n"), false);
            break;
        case 6:
            oled_write_P(PSTR("Mouse"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    oled_write_P(PSTR("\n\n\nLocks_____\n"), false);
    oled_write_P(led_state.num_lock ? PSTR("NUM\n") : PSTR("\n"), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP\n") : PSTR("\n"), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR\n ") : PSTR("\n"), false);

    return false;
}
#endif
