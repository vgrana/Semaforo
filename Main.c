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
