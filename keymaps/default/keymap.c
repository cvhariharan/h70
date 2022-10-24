#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │esc│ ~ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │Bsp│Del│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │SP+│TAB│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │SP-│Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │Ent|
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Hom│Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ ? │ ↑ │ + │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │End│Ctl│GUI│Alt│Spc│Spc│   │   │Spc│Spc│Alt│ ← │ ↓ │ → │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x14(
        KC_ESC,             KC_GRAVE,  KC_1,   KC_2,       KC_3,       KC_4,   KC_5,   KC_6,    KC_7,    KC_8,      KC_9,       KC_0,          KC_BSPC,  KC_DELETE,
        KC_KB_VOLUME_UP,    KC_TAB,    KC_Q,   KC_W,       KC_E,       KC_R,   KC_T,   KC_Y,    KC_U,    KC_I,      KC_O,       KC_P,          KC_LBRC,  KC_RBRC,
        KC_KB_VOLUME_DOWN,  KC_CAPS,   KC_A,   KC_S,       KC_D,       KC_F,   KC_G,   KC_H,    KC_J,    KC_K,      KC_L,       KC_SCLN,       KC_QUOT,  KC_ENT,
        KC_HOME,            KC_LSFT,   KC_Z,   KC_X,       KC_C,       KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM,   KC_DOT,     KC_QUESTION,   KC_SLSH,  KC_UP,
        KC_END,             KC_LCTL,   KC_LGUI,  KC_LALT,  KC_SPC,     KC_SPC, KC_NO, KC_NO,    KC_SPC,  KC_SPC,    KC_RALT,    KC_LEFT,       KC_DOWN,  KC_RIGHT
    )
};

