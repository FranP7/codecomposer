

/**
 * main.c
 * Proyecto hueco con las bases para poder realizar los ejemplos y proyectos de pr�cticas.
 * Realizado con CCS7.2.
 * Antes de compilar, hay que comprobar que la variable TIVAWARE_INSTALL apunte realmente
 * al directorio donde est� instalado el tivaware, por defecto c:/ti/TivaWare_C_Series_xxx (xxx: version)
 * Se incluyen por defecto librer�as para el manejo de los perif�ricos b�sicos:
 * pines de e/s, timers, pwm's, interrupciones.
 * No se han incluido las librer�as de los puertos de comunicaci�n (uart, ssi, i2c)
 */

//#define PART_TM4C1294NCPDT
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"
#include "inc/tm4c1294ncpdt.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/timer.h"
#include "driverlib/interrupt.h"
#include "driverlib/pwm.h"

int main(void)
{
	return 0;
}

