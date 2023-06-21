#include QMK_KEYBOARD_H

enum layer_names {
    Base,
    Num,
    Sym,
    FN,
    Nav,
    Mouse,
    CTL,
    Extra
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[Base] = LAYOUT_ortho_4x12(
        LT(CTL,KC_ESC), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        SC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SC_RSPC,
        KC_LCTL, KC_LALT, LCTL(KC_GRV), KC_LGUI, LT(Nav,KC_ENT), LT(Mouse,KC_TAB), LT(FN,KC_BSPC), LT(Num,KC_SPC), LT(Sym,KC_DEL), KC_APP, KC_RALT, KC_RCTL
    ),
	[Num] = LAYOUT_ortho_4x12(
        KC_ESC, KC_PPLS, KC_7, KC_8, KC_9, KC_PAST, KC_APP, KC_NUM, KC_SCRL, KC_INS, KC_DEL, KC_BSPC,
        KC_GRV, KC_MINS, KC_4, KC_5, KC_6, KC_SLSH, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_TRNS, KC_PENT,
        KC_TRNS, KC_PCMM, KC_1, KC_2, KC_3, KC_EQL, KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_0, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[Sym] = LAYOUT_ortho_4x12(
        KC_TRNS, LGUI(KC_L), LCA(KC_DEL), LCA(KC_END), LCA(KC_INS), KC_PSCR, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_TRNS,
        KC_TRNS, LCTL(KC_Y), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Z), KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R, KC_ENT, KC_DEL, KC_ENT,
        LCTL(KC_ENT), LCTL(KC_GRV), KC_DEL, RCS(KC_V), KC_BSPC, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_INS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2, KC_BTN1, KC_BTN3, KC_BTN4, KC_TRNS, KC_TRNS
    ),
	[FN] = LAYOUT_ortho_4x12(
        KC_TRNS, KC_F12, KC_F7, KC_F8, KC_F9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_F11, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[Nav] = LAYOUT_ortho_4x12(
        KC_TRNS, LGUI(KC_L), LCA(KC_DEL), LCA(KC_END), LCA(KC_INS), KC_PSCR, LSFT(KC_LEFT), LSFT(KC_DOWN), KC_UP, LSFT(KC_RGHT), LSFT(KC_ENT), KC_TRNS,
        KC_TRNS, LCTL(KC_Y), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Z), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ENT, KC_DEL,
        KC_ENT, LCTL(KC_ENT), LCTL(KC_GRV), KC_DEL, RCS(KC_V), KC_BSPC, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [Mouse] = LAYOUT_ortho_4x12(
        KC_TRNS, KC_TILD, KC_AMPR, KC_ASTR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_TRNS, KC_MINS, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_PMNS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS,
        KC_TRNS, KC_SCLN, KC_EXLM, KC_AT, KC_HASH, KC_EQL, KC_PIPE, KC_BSLS, KC_UNDS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
	[CTL] = LAYOUT_ortho_4x12(
        KC_TRNS, LGUI(KC_L), LCA(KC_DEL), LCA(KC_END), LCA(KC_INS), KC_NO, KC_WFWD, KC_WSTP, KC_WREF, KC_WBAK, KC_DEL, KC_BSPC,
        KC_SLEP, KC_PSCR, KC_PWR, KC_NUM, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MSTP, KC_MFFD, KC_MPRV, KC_INS,
        KC_CAPS, KC_SCRL, KC_WAKE, KC_NO, KC_SCRL, KC_CAPS, KC_MUTE, KC_VOLU, KC_VOLD, KC_HOME, KC_UP, KC_END,
        QK_BOOT, DB_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT
    ),
	[Extra] = LAYOUT_ortho_4x12(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
