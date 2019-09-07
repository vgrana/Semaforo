/*
 * Semaforo.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
#include "Semaforo1.h"
#include <stdio.h>


void EstadoInicial1(Semaforo * sema) {
	sema->LuzRoja = 0;
	sema->LuzAmarilla = 0;
	sema->LuzVerde = 0;
}

void SemaforoInicializar1(Semaforo * sema, int colorLuz) {
	EstadoInicial1(sema);
	if (Roja == colorLuz) {
		sema->LuzRoja = 1;
	}
	if (Amarilla == colorLuz) {
		sema->LuzAmarilla = 1;
	}
	if (Verde == colorLuz) {
		sema->LuzVerde = 1;
	}

}
void SemaforoPrenderLuz1(Semaforo * sema, int colorLuz) {

EstadoInicial1(sema);
	if (Roja == colorLuz) {
		sema->LuzRoja = 1;
	}
	if (Amarilla == colorLuz) {
		sema->LuzAmarilla = 1;
	}
	if (Verde == colorLuz) {
		sema->LuzVerde = 1;
	}
}

void ApagarUnaLuz1(Semaforo * sema, int colorLuz) {
		if (Roja == colorLuz) {
			sema->LuzRoja = 0;
		}
		if (Amarilla == colorLuz) {
			sema->LuzAmarilla = 0;
		}
		if (Verde == colorLuz) {
			sema->LuzVerde =0;
		}
	}



void SemaforoImprimir1(Semaforo * sema) {
	if ((sema->LuzRoja) == 1) {
		printf("la luz roja está prendida\n");
	} else {
		printf("la luz roja está apagado\n");

	}
	if ((sema->LuzAmarilla) == 1) {
		printf("la luz amarilla está prendida\n");
	} else {
		printf("la luz amarilla está apagado\n");

	}
	if ((sema->LuzVerde) == 1) {
		printf("la luz verde está prendida\n");
	} else {
		printf("la luz verde está apagada\n");

	}

}

void CambiarLuz1(Semaforo * sema, int colorLuz) {
	EstadoInicial1(sema);
	SemaforoPrenderLuz1(sema, colorLuz);
}

//////////////////////////////////////////////////////////////////////////////////////////
//                                 P   A   R  T  E    2                                //
////////////////////////////////////////////////////////////////////////////////////////

