#include QMK_KEYBOARD_H
#include "thepappas.h"

enum layer_names {
    Base,
    Num,
    Sym,
    FN,
    Nav,
    Mouse,
    CTL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[Base] = LAYOUT_split_3x6_3(
    //,------------------------------------------------------.                    ,-----------------------------------------------------.
    LT(6,KC_ESC),   KC_Q,   KC_W,   KC_E,      KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_RCTL,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LALT,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        SC_LSPO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,   KC_COMM,  KC_DOT, KC_SLSH, SC_RSPC,
    //|---------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                         //|-------------+-------------+-------------|     |-------------+-------------+-------------|
                               KC_LGUI,   LT(4,KC_ENT),  LT(5,KC_TAB),      LT(3,KC_BSPC), LT(1,KC_SPC), LT(2,KC_DEL)
                         //`-----------------------------------------'     '-----------------------------------------'
    ),
	[Num] = LAYOUT_split_3x6_3(
        KC_ESC, KC_PLUS, KC_7, KC_8, KC_9, KC_ASTR,        KC_NUM,  KC_APP, KC_INS,  KC_DEL, KC_BSPC, KC_TRNS,
        KC_GRV, KC_MINS, KC_4, KC_5, KC_6, KC_SLSH,       KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_TRNS,  KC_ENT,
        KC_ENT, KC_PCMM, KC_1, KC_2, KC_3, KC_EQL,        KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_RSFT,
                        KC_PDOT, KC_0, KC_MINS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[Sym] = LAYOUT_split_3x6_3(
        KC_LCTL, KC_TILD, KC_AMPR, KC_ASTR,   KVM1,   KVM2,       KC_NUM,  KC_APP,  KC_INS,  KC_DEL, KC_BSPC, KC_TRNS,
        KC_LALT, KC_MINS,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,    KC_PMNS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS,
        KC_LSFT, KC_SCLN, KC_EXLM,   KC_AT, KC_HASH,  KC_EQL,    KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_RSFT,
                             KC_TRNS, KC_TRNS, KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[FN] = LAYOUT_split_3x6_3(
        KC_LCTL, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,     KC_NO, KC_F17, KC_F18, KC_F19,  KC_NO, KC_RCTL,
        KC_LALT, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO,     KC_NO, KC_F14, KC_F15, KC_F16, KC_F24, KC_RALT,
        SC_LSPO, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,     KC_NO, KC_F21, KC_F22, KC_F13, KC_F23, KC_RSFT,
                          KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [Nav] = LAYOUT_split_3x6_3(
         KC_LCTL,       KC_TAB,       KC_APP,     KC_BSPC,      KC_ENT,     KC_DEL,      LSFT(KC_LEFT), LSFT(KC_DOWN), LSFT(KC_UP), LSFT(KC_RGHT), LSFT(KC_ENT), ALT_TAB,
         KC_LALT,   LCTL(KC_Y),   LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V), LCTL(KC_Z),            KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,       KC_ENT,  KC_DEL,
         KC_LSFT, LCTL(KC_ENT), LCTL(KC_GRV),  LCTL(KC_A),   RCS(KC_V),     KC_ESC,            KC_HOME,       KC_PGDN,     KC_PGUP,        KC_END,       KC_INS, KC_RSFT,
                                                     KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[Mouse] = LAYOUT_split_3x6_3(
        KC_LCTL,       KC_TAB,       KC_APP,     KC_BSPC,      KC_ENT,     KC_DEL,      LSFT(KC_LEFT), LSFT(KC_DOWN), LSFT(KC_UP), LSFT(KC_RGHT), LSFT(KC_ENT), ALT_TAB,
        KC_LALT,   LCTL(KC_Y),   LCTL(KC_X),  LCTL(KC_C),  LCTL(KC_V), LCTL(KC_Z),            KC_MS_L,       KC_MS_D,     KC_MS_U,       KC_MS_R,       KC_ENT,  KC_DEL,
        KC_LSFT, LCTL(KC_ENT), LCTL(KC_GRV),  LCTL(KC_A),   RCS(KC_V),     KC_ESC,            KC_WH_L,       KC_WH_D,     KC_WH_U,       KC_WH_R,      KC_FIND, KC_RSFT,
                                                        KC_TRNS, KC_TRNS, KC_TRNS,      KC_BTN2, KC_BTN1, KC_BTN3
    ),
    [CTL] = LAYOUT_split_3x6_3(
        KC_TRNS, LGUI(KC_L), LCA(KC_DEL), LCA(KC_END), LCA(KC_INS),    KVM1,    KC_WFWD, KC_WSTP, KC_WREF, KC_WBAK,  KC_DEL, ALT_TAB,
        KC_PSCR,    KC_SLEP,      KC_PWR,      KC_NUM,     KC_CAPS,    KVM2,    KC_MRWD, KC_MPLY, KC_MSTP, KC_MFFD, KC_MPRV,  KC_INS,
        QK_BOOT,    DB_TOGG,     KC_WAKE,       KC_NO,     KC_SCRL,   KC_NO,    KC_MUTE, KC_VOLU, KC_VOLD, KC_EJCT, KC_LEFT, KC_RGHT,
                                             KC_TRNS, KC_TRNS, ALT_TAB,               KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM corne_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(corne_logo, false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        led_t led_state = host_keyboard_led_state();

        // Host Keyboard Layer Status
        oled_write_P(PSTR("\nLayer_____\n"), false);

        switch (get_highest_layer(layer_state)) {
            case Base:
                oled_write_P(PSTR("Base\n"), false);
                break;
            case Nav:
                oled_write_P(PSTR("Nav\n"), false);
                break;
            case Num:
                oled_write_P(PSTR("Num\n"), false);
                break;
            case CTL:
                oled_write_P(PSTR("CTL"), false);
                break;
            case FN:
                oled_write_P(PSTR("FN\n"), false);
                break;
            case Sym:
                oled_write_P(PSTR("SYM\n"), false);
                break;
            case Mouse:
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
    }
    else {
        render_logo();  // Renders a static logo
    }

    return false;
}
#endif
