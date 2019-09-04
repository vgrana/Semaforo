/*
 * Semaforo.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
#include "Semaforo1.h"
#include <stdio.h>

void EstadoInicial(Semaforo * sema) {
	sema->Rojo = 0;
	sema->Amarillo = 0;
	sema->Verde = 0;
}

void SemaforoInicializar(Semaforo * sema, int color) {
	EstadoInicial(sema);
	if (Rojo == color) {
		sema->Rojo = 1;
	}
	if (Amarillo == color) {
		sema->Amarillo = 1;
	}
	if (Verde == color) {
		sema->Verde = 1;
	}

}
void SemaforoPrenderLuz(Semaforo * sema, int color) {

EstadoInicial(sema);
	if (Rojo == color) {
		sema->Rojo = 1;
	}
	if (Amarillo == color) {
		sema->Amarillo = 1;
	}
	if (Verde == color) {
		sema->Verde = 1;
	}
}

void ApagarUnaLuz(Semaforo * sema, int color) {
		if (Rojo == color) {
			sema->Rojo = 0;
		}
		if (Amarillo == color) {
			sema->Amarillo = 0;
		}
		if (Verde == color) {
			sema->Verde =0;
		}
	}



void SemaforoImprimir(Semaforo * sema) {
	if ((sema->Rojo) == 1) {
		printf("la luz roja está prendida\n");
	} else {
		printf("la luz roja está apagado\n");

	}
	if ((sema->Amarillo) == 1) {
		printf("la luz amarilla está prendida\n");
	} else {
		printf("la luz amarilla está apagado\n");

	}
	if ((sema->Verde) == 1) {
		printf("la luz verde está prendida\n");
	} else {
		printf("la luz verde está apagada\n");

	}

}

void CambiarLuz(Semaforo * sema, int color) {
	EstadoInicial(sema);
	SemaforoPrenderLuz(sema, color);

}

