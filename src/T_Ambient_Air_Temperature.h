#ifndef T_AMBIENT_AIR_TEMPERATURE_H
#define T_AMBIENT_AIR_TEMPERATURE_H

#include <stdint.h>

/*============================================================================*/
/* Physical_Data_Type */
/*============================================================================*/
/*
Unit : °C
Resolution : 0,0625
Offset : 0
*/
typedef int16_t T_Ambient_Air_Temperature;


/*============================================================================*/
/* Predefined values */
/*============================================================================*/
#define TEMPERATURE_0_DEG_CELCIUS 0
#define TEMPERATURE_0_DOT_5_DEG_CELCIUS 8 /* = 0,5 / 0,0625 */
#define TEMPERATURE_1_DEG_CELCIUS 16
#define TEMPERATURE_2_DEG_CELCIUS 32
#define TEMPERATURE_3_DEG_CELCIUS 48
#define TEMPERATURE_4_DEG_CELCIUS 64
#define TEMPERATURE_5_DEG_CELCIUS 80
#define TEMPERATURE_6_DEG_CELCIUS 96
#define TEMPERATURE_7_DEG_CELCIUS 112
#define TEMPERATURE_8_DEG_CELCIUS 128
#define TEMPERATURE_9_DEG_CELCIUS 144
#define TEMPERATURE_10_DEG_CELCIUS 160
#define TEMPERATURE_15_DEG_CELCIUS 240
#define TEMPERATURE_18_DEG_CELCIUS 288
#define TEMPERATURE_19_DEG_CELCIUS 304
#define TEMPERATURE_20_DEG_CELCIUS 320
#define TEMPERATURE_25_DEG_CELCIUS 400
#define TEMPERATURE_30_DEG_CELCIUS 480
#define TEMPERATURE_40_DEG_CELCIUS 640


#endif
