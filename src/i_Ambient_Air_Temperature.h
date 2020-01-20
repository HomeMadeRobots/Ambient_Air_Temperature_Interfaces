#ifndef I_AMBIENT_AIR_TEMPERATURE_H
#define I_AMBIENT_AIR_TEMPERATURE_H

#include "T_AMBIENT_AIR_TEMPERATURE.h"

/* Client_Server_Interface */
/* Defines an operation allowing to get data from an ambient air temperature sensor. */
class i_Ambient_Air_Temperature {
public :
    /* Synchronous_Operation */
    /* Provides the measured air temperature. */
    virtual void Get_Temperature( T_AMBIENT_AIR_TEMPERATURE* temperature ) = 0;
};

#endif