#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_0),                                    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    TD(DANCE_1),    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_ENTER,                                                                       KC_TAB,         KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       KC_ENTER,       
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          SC_RSPC,        
    KC_LEFT_CTRL,   MO(1),          KC_LEFT_GUI,    KC_LEFT_ALT,    LT(3,KC_GRAVE), KC_ENTER,                                                                                                       TD(DANCE_2),    MT(MOD_RALT, KC_SCLN),MT(MOD_RCTL, KC_SLASH),KC_LEFT,        KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_BSPC,        KC_END,                         KC_INSERT,      KC_DELETE,      KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    LCTL(LSFT(KC_ESCAPE)),KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NUM,                                         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_SCRL,        LALT(KC_F4),    LCTL(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,        KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(3),          RGB_SLD,                                                                                                        RGB_MODE_FORWARD,KC_TRANSPARENT, KC_DOT,         KC_HOME,        KC_PGDN,        KC_END,         
    RGB_SPD,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_INSERT,      RGB_SPI
  ),
  [2] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_ESCAPE,      KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_0,        KC_KP_MINUS,    KC_KP_EQUAL,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_3),                                    KC_NUM,         KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ASTERISK, KC_KP_DOT,      KC_KP_ENTER,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_0,        KC_KP_0,        KC_KP_COMMA,    KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_KP_SLASH),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_AUDIO_VOL_UP,KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_AUDIO_VOL_DOWN,KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_MS_ACCEL1,   KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_AUDIO_MUTE,  KC_MS_BTN3,     KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,51}, {43,170,204}, {0,63,204}, {52,255,153}, {225,255,204}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {181,255,221}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {143,255,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {204,255,204}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,63,204}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {74,255,206}, {0,63,204}, {172,255,204}, {172,63,204}, {243,255,204}, {43,170,204}, {172,255,153}, {0,63,204}, {0,63,204}, {172,255,153}, {52,255,153}, {43,153,170}, {0,63,204}, {0,0,153}, {0,0,0}, {43,153,170}, {43,153,170}, {0,0,153}, {0,0,153}, {0,0,153}, {0,63,204}, {43,153,170}, {0,0,153}, {0,0,153}, {0,0,153}, {0,63,204}, {225,255,204}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {204,255,204}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,0,153}, {0,63,204}, {43,170,204}, {172,63,204}, {243,255,204}, {186,255,204}, {0,63,204} },

    [1] = { {0,0,204}, {172,255,204}, {0,255,204}, {0,0,0}, {0,0,0}, {183,255,255}, {31,233,204}, {0,0,0}, {208,238,255}, {0,0,0}, {183,255,255}, {31,233,204}, {0,0,0}, {208,238,255}, {0,0,0}, {183,255,255}, {0,0,0}, {0,0,0}, {208,238,255}, {0,0,0}, {183,255,255}, {0,0,0}, {0,0,0}, {208,238,255}, {143,191,204}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {86,255,204}, {0,0,0}, {0,0,0}, {35,255,135}, {0,0,0}, {0,0,0}, {35,255,135}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,63,204}, {183,255,255}, {0,0,0}, {0,0,0}, {43,63,204}, {43,63,204}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {43,63,204}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {183,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {183,255,255}, {0,0,0}, {0,0,0}, {35,255,135}, {186,255,204}, {0,0,0}, {35,255,135} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {94,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {142,255,221}, {0,0,0}, {0,0,0}, {86,255,85}, {86,255,85}, {86,255,85}, {0,0,0}, {0,0,0}, {74,255,255}, {86,255,85}, {86,255,85}, {86,255,85}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {86,255,85}, {86,255,85}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,51}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,255,221}, {0,255,153}, {0,255,102}, {0,0,0}, {0,0,0}, {114,191,204}, {143,191,204}, {114,191,204}, {0,0,221}, {0,0,0}, {143,191,204}, {143,191,204}, {114,191,204}, {0,0,0}, {0,0,0}, {114,191,204}, {143,191,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {143,153,255}, {143,191,204}, {143,255,153}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,191,204}, {0,0,0}, {0,0,0}, {0,0,0}, {200,191,204}, {200,191,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,191,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
    }
    if(state->count > 3) {
        tap_code16(KC_CALCULATOR);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_CALCULATOR); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CALCULATOR); register_code16(KC_CALCULATOR);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
        tap_code16(KC_CALCULATOR);
    }
    if(state->count > 3) {
        tap_code16(KC_CALCULATOR);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_CALCULATOR); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CALCULATOR); register_code16(KC_CALCULATOR);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CALCULATOR); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
