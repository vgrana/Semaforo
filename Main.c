/*
 * Main.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
#include <stdio.h>

#include "Semaforo1.h"

int main(void) {

//	Semaforo inicializar;
//
//	SemaforoInicializar(&inicializar, Roja);
//	SemaforoImprimir(&inicializar);
//
//	SemaforoPrenderLuz(&inicializar, Amarilla);
//	SemaforoImprimir(&inicializar);
//
//	ApagarUnaLuz(&inicializar, Amarilla);
//	SemaforoImprimir(&inicializar);
//
//	CambiarLuz(&inicializar, Verde);
//	SemaforoImprimir(&inicializar);
//
//	CambiarLuz(&inicializar, Amarilla);
//	SemaforoImprimir(&inicializar);
//
//	CambiarLuz(&inicializar, Roja);
//	SemaforoImprimir(&inicializar);

//////////////////////////////////////////////////////////////////////////////////////////
//                                 P   A   R  T  E    2                                //
////////////////////////////////////////////////////////////////////////////////////////

	int tiempoLuzRoja = 4;
	int tiempoLuzAmarilla = 2;
	int tiempoLuzVerde = 5;

	SemaforoSecuenciado estadoInicial;

	int contador = 0;
	while (contador < 2) {
		SemaforoInicializar(&estadoInicial, Verde, tiempoLuzVerde);
		SemaforoImprimir(&estadoInicial);

		CambiarLuz(&estadoInicial, Amarilla, tiempoLuzAmarilla);
		SemaforoImprimir(&estadoInicial);

		CambiarLuz(&estadoInicial, Roja, tiempoLuzRoja);
		SemaforoImprimir(&estadoInicial);

		CambiarLuz(&estadoInicial, Amarilla, tiempoLuzAmarilla);
		SemaforoImprimir(&estadoInicial);

		contador += 1;
	}
	return 0;
}
