#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avR/io.h>
  #include <avR/inteRRupt.h>
#endif
#endif

#define LAYOUT_5x7( \
    L11, L12, L13, L14, L15, L16, L17,      \
    L21, L22, L23, L24, L25, L26, L27,      \
    L31, L32, L33, L34, L35, L36, L37,      \
    L41, L42, L43, L44, L45, L46, L47,      \
    L51, L52, L53, L54, L55, L56, L57,      \
                   L61, L62,                \
                             L63, L64,      \
                             L68, L65,      \
                             L67, L66,      \
    R11, R12, R13, R14, R15, R16, R17,      \
    R21, R22, R23, R24, R25, R26, R27,      \
    R31, R32, R33, R34, R35, R36, R37,      \
    R41, R42, R43, R44, R45, R46, R47,      \
    R51, R52, R53, R54, R55, R56, R57,      \
              R66, R67,                     \
    R64, R65,                               \
    R63, R68,                               \
    R62, R61                                \
  ) \
  { \
    { L11, L12, L13, L14, L15, L16, L17,  KC_NO }, \
    { L21, L22, L23, L24, L25, L26, L27,  KC_NO }, \
    { L31, L32, L33, L34, L35, L36, L37,  KC_NO }, \
    { L41, L42, L43, L44, L45, L46, L47,  KC_NO }, \
    { L51, L52, L53, L54, L55, L56, L57,  KC_NO }, \
    { L61, L62, L63, L64, L65, L66, L67,  L68   }, \
    { R11, R12, R13, R14, R15, R16, R17,  KC_NO }, \
    { R21, R22, R23, R24, R25, R26, R27,  KC_NO }, \
    { R31, R32, R33, R34, R35, R36, R37,  KC_NO }, \
    { R41, R42, R43, R44, R45, R46, R47,  KC_NO }, \
    { R51, R52, R53, R54, R55, R56, R57,  KC_NO }, \
    { R61, R62, R63, R64, R65, R66, R67,  R68   }  \
}
