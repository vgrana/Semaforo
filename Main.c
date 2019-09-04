/*
 * Main.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
#include <stdio.h>

#include "Semaforo1.h"
//#define Rojo 0;
//#define Amarillo 1;
//#define Verde 2;

int main(void) {

	Semaforo inicializar;

//CORRECCION:El SemaforoInicializar deberias llamarlo para todos tus semaforos.
//Acá declaraste cuatro semáforos distintos, entonces deberías inicializar los 4.
//Lo que podrías probar es como un Semaforo cambiar a medida que vas usando las funciones, 
//es decir el mismo semaforo que lo uses varias veces
// por ejemplo:
// Semaforo miSem;
// SemaforoInicializar(&miSem, Rojo )
// SemaforoImprimir(&miSem);
// SemaforoPrenderLuz(&miSem, Amarillo )
// SemaforoImprimir(&miSem);
// CambiarLuz(&miSem, Verde);
// SemaforoImprimir(&miSem);

	
	SemaforoInicializar(&inicializar, Rojo );

	Semaforo prenderLuz;
	SemaforoPrenderLuz(&prenderLuz, Amarillo);

	Semaforo apagarUnaLuz;
	ApagarUnaLuz(&apagarUnaLuz, Amarillo);

	Semaforo cambiarLuz;
	CambiarLuz(&cambiarLuz, Verde);

	Semaforo prenderOtraLuz;
	SemaforoPrenderLuz(&prenderOtraLuz, Amarillo);

	SemaforoImprimir(&inicializar);
	SemaforoImprimir(&prenderLuz);
//	SemaforoImprimir(&apagarUnaLuz);
	SemaforoImprimir(&cambiarLuz);
//	SemaforoImprimir(&prenderOtraLuz);
}
