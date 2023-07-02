// Super alt tab
bool is_alt_tab_active = false; // ADD this near the beginning of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.

enum custom_keycodes {          // Make sure have the awesome keycode ready
  ALT_TAB = SAFE_RANGE,
  KVM1,
  KVM2,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) { // This will do most of the grunt work with the keycodes.
    case ALT_TAB:
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        alt_tab_timer = timer_read();
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    case KVM1:
      if (record->event.pressed) {
        tap_code_delay(KC_LCTL,25);
        tap_code_delay(KC_LCTL,25);
        tap_code(KC_1);
      } else {
            // when keycode QMKBEST is released
      }
      break;
    case KVM2:
      if (record->event.pressed) {
        tap_code_delay(KC_LCTL,25);
        tap_code_delay(KC_LCTL,25);
        tap_code(KC_2);
      } else {
            // Null when keycode is released
      }
      break;
  }
  return true;
}

void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 1250) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}
