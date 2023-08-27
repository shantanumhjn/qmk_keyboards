#pragma once

#define XXX KC_NO


#define LAYOUT_miryoku( \
K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39  \
) \
LAYOUT( \
K00,  K01,  K02,  K03,  K04,    K05,  K06,  K07,  K08,  K09, \
K10,  K11,  K12,  K13,  K14,    K15,  K16,  K17,  K18,  K19, \
K20,  K21,  K22,  K23,  K24,    K25,  K26,  K27,  K28,  K29, \
XXX,  XXX,  K32,  K33,  K34,    K35,  K36,  K37,  XXX,  XXX  \
)

#define U_POWER_LED_ON_INTERVAL 200
#define U_POWER_LED_OFF_INTERVAL 1800
#define U_KEYSTROKE_LED_ON_INTERVAL 500

#define RGBLIGHT_SLEEP
#define RGBLIGHT_TIMEOUT 600000     // ms to wait until rgblight time out, 600 secs or 10 minutes
