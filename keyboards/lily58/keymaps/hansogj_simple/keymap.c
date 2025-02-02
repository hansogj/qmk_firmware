#include QMK_KEYBOARD_H



enum custom_keycodes {
    VDI_HOME = SAFE_RANGE
};
enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'


 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_RGUI
),
*/


 [_QWERTY] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,      KC_3,    KC_4,   KC_5,                                                              KC_6,   KC_7,    KC_8,      KC_9,     KC_0,     KC_ENT,
        KC_TAB,     KC_Q,       KC_W,      KC_E,    KC_R,   KC_T,                                                              KC_Y,   KC_U,    KC_I,      KC_O,     KC_P,     KC_LBRC,
        KC_LSFT,    KC_A,       KC_S,      KC_D,    KC_F,   KC_G,                                                              KC_H,   KC_J,  KC_K,        KC_L,       KC_SCLN,    KC_QUOT,
        KC_LCTL,    KC_Z,       KC_X,      KC_C,    KC_V,   KC_B,            KC_NUBS,         KC_DEL,                          KC_N,   KC_M,   KC_COMM,  KC_DOT,      KC_SLSH,    KC_ENT,
                KC_LALT,        KC_LGUI,        MO(_LOWER),      KC_SPC,                                                KC_BSPC,      MO(_RAISE),     KC_RALT,    MO(_ADJUST)
),


[_LOWER] = LAYOUT(
     KC_TRNS ,  KC_F1 ,  KC_F2 ,  KC_F3 ,  KC_F4 , KC_F5 ,                                                            KC_RBRC ,  KC_NUHS ,  KC_PSLS ,  KC_PAST ,  KC_PMNS ,  KC_MSTP ,
     VDI_HOME ,  KC_F6 ,  KC_F7 ,  KC_F8 ,  KC_F9 ,  KC_F10 ,                                                  KC_GRV ,  KC_P7 ,  KC_P8 ,  KC_P9 ,  KC_PPLS ,  KC_TRNS ,
     KC_TRNS ,  KC_F11 ,  KC_F12 ,  LCA(KC_UP) ,  KC_DLR ,  KC_TRNS ,                                                 KC_PDOT ,   KC_P4 ,  KC_P5 ,  KC_P6 ,  KC_PCMM ,  KC_TRNS ,
     KC_TRNS ,  KC_TRNS ,  LCA(KC_LEFT) ,  LCA(KC_DOWN) ,  LCA(KC_RGHT) ,  KC_TRNS ,        KC_TRNS ,   KC_TRNS ,     KC_P0 ,  KC_P1 ,  KC_P2 ,  KC_P3 ,  KC_PEQL ,  KC_TRNS ,
                         KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,                                                KC_TRNS ,  MO(_ADJUST) ,  KC_TRNS ,  KC_TRNS

),

[_RAISE] = LAYOUT(
     KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,                                                KC_GRV ,  KC_RBRC ,  KC_BSLS ,  KC_MINS ,  KC_EQL ,  KC_MUTE ,
     KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,                                                KC_INS ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_HOME ,  KC_PGUP ,
     KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,                                                KC_DEL ,  KC_NO ,   KC_UP ,  KC_NO ,  KC_END ,  KC_PGDN ,
     KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,         KC_TRNS ,  KC_TRNS ,           KC_PCMM ,  KC_LEFT ,  KC_DOWN ,  KC_RGHT ,  KC_PEQL ,  KC_TRNS ,
                                 KC_TRNS ,  KC_TRNS ,  MO(_ADJUST) ,  KC_TRNS ,                                                KC_DEL ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS
),

  [_ADJUST] = LAYOUT(
         KC_B ,   TG(0) ,  TG(1) ,  TG(2) ,  KC_NO ,  KC_NO ,                                                          KC_PSCR ,  KC_NUM ,  KC_PAUS ,  KC_NO ,  KC_NO , KC_NO ,
         KC_NO ,  TO(0) ,  TO(1) ,  TO(2) ,  KC_NO ,  KC_NO ,                                                            KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,
         KC_NO ,  DF(0) ,  DF(1) ,  DF(2) ,  KC_NO ,  KC_NO ,                                                        KC_NO ,    KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,
         KC_TRNS ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,                                    KC_NO ,  KC_NO ,         KC_NO ,  KC_NO ,  KC_NO ,  KC_NO ,
                                                     KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS ,         KC_TRNS ,  KC_TRNS ,  KC_TRNS ,  KC_TRNS

  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
  return state;
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }


    switch (keycode) {
        case VDI_HOME:
            if (record->event.pressed) {
                // When key is pressed
                register_code(KC_LCTL);
                register_code(KC_LALT);
                register_code(KC_PAUSE);
                unregister_code(KC_LCTL);
                unregister_code(KC_LALT);
                unregister_code(KC_PAUSE);
                wait_ms(100);
                register_code(KC_DOWN);
                unregister_code(KC_DOWN);
                wait_ms(100);
                register_code(KC_ENT);
                unregister_code(KC_ENT);
            }
            break;
    }

  return true;
}
