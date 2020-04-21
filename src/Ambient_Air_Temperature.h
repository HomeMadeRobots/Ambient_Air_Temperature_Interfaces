#ifndef AMBIENT_AIR_TEMPERATURE_H
#define AMBIENT_AIR_TEMPERATURE_H


/* Arguments */
#include "T_Ambient_Air_Temperature.h"


/*============================================================================*/
/* Client_Server_Interface */
/*============================================================================*/
typedef struct {
    void (*Get_Temperature) ( T_Ambient_Air_Temperature* temperature );
} Ambient_Air_Temperature;


#endif