// gChart's custom SP10S  driver config options for Anduril
#define MODEL_NUMBER "0631"
#include "hwdef-Sofirn_SP10S.h"
// ATTINY: 1616

#undef BLINK_AT_RAMP_MIDDLE

#define USE_DYNAMIC_UNDERCLOCKING

#define RAMP_LENGTH 150
#define PWM1_LEVELS 20,30,41,54,69,87,106,128,152,179,209,242,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,0
#define PWM2_LEVELS 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,3,3,3,4,4,4,5,5,5,6,6,7,7,8,8,9,9,10,10,11,12,12,13,14,14,15,16,17,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,33,34,35,36,38,39,41,42,43,45,46,48,50,51,53,55,56,58,60,62,64,66,68,70,72,74,76,78,80,83,85,87,90,92,94,97,99,102,105,107,110,113,116,119,121,124,127,130,133,137,140,143,146,150,153,156,160,164,167,171,174,178,182,186,190,194,198,202,206,210,214,219,223,227,232,236,241,246,250,255

#define MAX_1x7135 13
#define HALFSPEED_LEVEL 14
#define QUARTERSPEED_LEVEL 6

#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL 120
#define RAMP_DISCRETE_FLOOR 10
#define RAMP_DISCRETE_CEIL RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

// stop panicking at ~30% power
#define THERM_FASTER_LEVEL 105

// enable 2 click turbo
#define USE_2C_MAX_TURBO