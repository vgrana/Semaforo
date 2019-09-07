/*
 * SemaforoSecuenciado.c
 *
 *  Created on: 6 sep. 2019
 *      Author: valeria
 */
#include "Semaforo1.h"
#include "SemaforoSecuenciado.h"
#include <stdio.h>

int tiempoLuzRoja = 4;
int tiempoLuzAmarilla = 3;
int tiempoLuzVerde = 2;

void EstadoInicial(SemaforoSecuenciado * semSec) {
	semSec->sema.LuzRoja = 0;
	(semSec->TiempoRoja) = 0;
	semSec->sema.LuzAmarilla = 0;
	(semSec->TiempoAmarilla) = 0;
	semSec->sema.LuzVerde = 0;
	(semSec->TiempoVerde) = 0;

}
void SemaforoInicializar(SemaforoSecuenciado * semSec, int LuzAPrender,
		int AsignarTiempoALuz) {
EstadoInicial(semSec);
	if (Roja == LuzAPrender) {
		(semSec->sema.LuzRoja) = 1;
		semSec->TiempoRoja = AsignarTiempoALuz;
		sleep(semSec->TiempoRoja);
	}
	if (Amarilla == LuzAPrender) {
		(semSec->sema.LuzAmarilla) = 1;
		semSec->TiempoAmarilla = AsignarTiempoALuz;
		sleep(semSec->TiempoAmarilla);
	}
	if (Verde == LuzAPrender) {
		(semSec->sema.LuzVerde) = 1;
		semSec->TiempoVerde = AsignarTiempoALuz;
		sleep(semSec->TiempoVerde);
	}

}
void SemaforoImprimir(SemaforoSecuenciado * semSec) {

	if ((semSec->sema.LuzRoja) == 1) {
		printf("la luz roja está prendida\n");
	} else {
		printf("la luz roja está apagada\n");

	}
	if ((semSec->sema.LuzAmarilla) == 1) {
		printf("la luz amarilla está prendida\n");
	} else {
		printf("la luz amarilla está apagada\n");

	}
	if ((semSec->sema.LuzVerde) == 1) {
		printf("la luz verde está prendida\n");
	} else {
		printf("la luz verde está apagada\n");

	}
	printf("\n");
}
void SemaforoPrenderLuz(SemaforoSecuenciado * semSec, int colorLuz,
		int tiempoEncendido) {

	EstadoInicial(semSec);
	if (Roja == colorLuz) {
		semSec->sema.LuzRoja = 1;
		semSec->TiempoRoja = tiempoEncendido;
		sleep(semSec->TiempoRoja);
	}
	if (Amarilla == colorLuz) {
		semSec->sema.LuzAmarilla = 1;
		semSec->TiempoAmarilla = tiempoEncendido;
		sleep(semSec->TiempoAmarilla);
	}
	if (Verde == colorLuz) {
		semSec->sema.LuzVerde = 1;
		semSec->TiempoVerde = tiempoEncendido;
		sleep(semSec->TiempoVerde);
	}
}

void CambiarLuz(SemaforoSecuenciado * semSec, int colorLuz, int tiempoEncendido) {
	EstadoInicial(semSec);
	SemaforoPrenderLuz(semSec, colorLuz, tiempoEncendido);
}

void cicloSemaforo(SemaforoSecuenciado * semSec) {
	EstadoInicial(semSec);
	SemaforoInicializar(semSec, Verde, tiempoLuzVerde);
	SemaforoImprimir(semSec);

	CambiarLuz(semSec, Amarilla, tiempoLuzAmarilla);
	SemaforoImprimir(semSec);

	CambiarLuz(semSec, Roja, tiempoLuzRoja);
	SemaforoImprimir(semSec);

	CambiarLuz(semSec, Amarilla, tiempoLuzAmarilla);
	SemaforoImprimir(semSec);

}

