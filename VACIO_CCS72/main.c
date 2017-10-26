

/**
 * main.c
 * Proyecto hueco con las bases para poder realizar los ejemplos y proyectos de prácticas.
 * Realizado con CCS7.2.
 * Antes de compilar, hay que comprobar que la variable TIVAWARE_INSTALL apunte realmente
 * al directorio donde está instalado el tivaware, por defecto c:/ti/TivaWare_C_Series_xxx (xxx: version)
 * Se incluyen por defecto librerías para el manejo de los periféricos básicos:
 * pines de e/s, timers, pwm's, interrupciones.
 * No se han incluido las librerías de los puertos de comunicación (uart, ssi, i2c)
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

