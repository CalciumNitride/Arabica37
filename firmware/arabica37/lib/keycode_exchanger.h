#include "keymap.h"

#define KC______ KC_TRNS
#define KC_XXXXX KC_NO

//adjust keys
#define KC_RESET RESET
#define KC_LRST  RGBRST
#define KC_LTOG  RGB_TOG
#define KC_LHUI  RGB_HUI
#define KC_LHUD  RGB_HUD
#define KC_LSAI  RGB_SAI
#define KC_LSAD  RGB_SAD
#define KC_LVAI  RGB_VAI
#define KC_LVAD  RGB_VAD
#define KC_LMOD  RGB_MOD
#define KC_SWAP  AG_SWAP
#define KC_NORM  AG_NORM

//layer switch keys
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_ADJST MO(_ADJUST)

//modifiers
#define KC_CTLTB CTL_T(KC_TAB)   // control when hold, tab when tapped
#define KC_SFIME SFT_T(KC_ZKHK) // shift when hold, Zenkaku-hankaku when tapped
#define KC_LOWDL LT(_LOWER, KC_DEL) // LOWER when hold, delete when tapped
#define KC_RAIBS LT(_RAISE, KC_BSPC) // RAISE when hold, backspace when tapped
#define KC_ALTHN ALT_T(KC_HENK) //
#define KC_GUIMH GUI_T(KC_MHEN)
#define KC_DTL   SGUI(KC_LEFT)
#define KC_SCRS  LGUI(KC_PSCR)

//others
#define KC_JCIRC KC_EQL  // for JP ' ^ '
