#include QMK_KEYBOARD_H

#define BL 0
#define FN 1
#define ZN 2
#define HN 3

/*
 * Default HHKB Layout
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ Esc │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │  \  │  `  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │BkSpc│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Ctrl │  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │█████│Enter│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Shift│█████│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │█████│Shift│ Fn  │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│ Alt │ Gui │█████│█████│Space│█████│█████│█████│█████│█████│ Mo2 │ Alt │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[BL] = LAYOUT_60_hhkb(
        KC_ESC,    KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSLS, KC_GRV, \
        KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSPC,      \
        KC_LCTL,   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,       KC_ENT,      \
        KC_LSFT,            KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M, KC_COMM,  KC_DOT, KC_SLSH,      KC_RSFT, MO(FN), \
             KC_LALT, KC_RGUI,              KC_SPC,                         MO(ZN), KC_RALT ),
    /* 1: HHKB Fn layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│MyPC │ F1  │ F2  │ F3  │ F4  │ F5  │ F6  │ F7  │ F8  │ F9  │ F10 │ F11 │ F12 │ Ins │PSCR │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│Caps │ cal |up   │     |     │     │     │ ef- │ ef+ │ vol-│up   │vol+ │mute │del  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │left │ down│right│     │     │     │sat- │sat+ |left |down │Right│█████│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│     │█████│     │     │     │     │     │hue- │hue+ │RGBT │RGBM+|RGBM-│█████│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│     │     │█████│█████│█████│Space│█████│█████│█████│█████│     │     │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[FN]= LAYOUT_60_hhkb(
       KC_MYCM,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_INS,  KC_PSCR, \
       KC_CAPS, KC_CALC, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPD, RGB_SPI, KC_VOLD, KC_UP,   KC_VOLU, KC_MUTE, KC_DEL,  \
       KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_SAI, KC_LEFT, KC_DOWN, KC_RGHT,       KC_PENT,       \
       KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_HUI,  RGB_TOG, RGB_MOD, RGB_RMOD,       KC_TRNS, KC_TRNS, \
             KC_TRNS, KC_TRNS,                   KC_SPC,                         KC_TRNS, KC_TRNS ),
    /* 2: HHKB zn layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│Nlock│ /   │ *   │ -   │ +   │ F13 │ F14 │ F15 │ F16 │ F17 │ F18 │ F19 │ F20 │ F21 |     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  .  │  7  │  8  │  9  │  E  │  F  │  :  │     │     │     │ Up  │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  =  │  4  │  5  │  6  │  C  │  D  │  #  │     |     │ Left│Down │Right│█████│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  0  │█████│  1  │  2  │  3  │  A  │  B  │     │     │     │     │     │█████│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│  ,  │     │█████│█████│█████│Space│█████│█████│█████│█████│     │     │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[ZN]= LAYOUT_60_hhkb(
       KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PMNS,   KC_PPLS,   KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_TRNS, \
       KC_PDOT, KC_P7, KC_P8, KC_P9, KC_E, KC_F, KC_COLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_UP, KC_TRNS, KC_TRNS,  \
       KC_PEQL, KC_P4, KC_P5, KC_P6, KC_C, KC_D, KC_HASH, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT,       KC_PENT,       \
       KC_P0,       KC_P1, KC_P2, KC_P3, KC_A, KC_B, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, MO(HN), \
             KC_PCMM, KC_TRNS,                   KC_SPC,                         KC_TRNS, KC_TRNS ),

    /* 3: HHKB HN layer
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│Nlock│ /   │ *   │ -   │ +   │ F13 │ F14 │ F15 │ F16 │ F17 │ F18 │ F19 │ F20 │ F21 |Reset│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  .  │  7  │  8  │  9  │  E  │  F  │  :  │     │     │     │ Up  │     │     │     │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  =  │  4  │  5  │  6  │  C  │  D  │  #  │     |     │ Left│Down │Right│█████│NPEnt│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│  0  │█████│  1  │  2  │  3  │  A  │  B  │     │     │     │     │     │█████│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│█████│  ,  │     │█████│█████│█████│Space│█████│█████│█████│█████│     │     │█████│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
     */
[HN]= LAYOUT_60_hhkb(
       KC_NLCK,   KC_PSLS,   KC_PAST,   KC_PMNS,   KC_PPLS,   KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  RESET, \
       KC_PDOT, KC_P7, KC_P8, KC_P9, KC_E, KC_F, KC_COLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_UP, KC_TRNS, KC_TRNS,  \
       KC_PEQL, KC_P4, KC_P5, KC_P6, KC_C, KC_D, KC_HASH, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT,       KC_PENT,       \
       KC_P0,       KC_P1, KC_P2, KC_P3, KC_A, KC_B, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, \
             KC_PCMM, KC_TRNS,                   KC_SPC,                         KC_TRNS, KC_TRNS ),
};
