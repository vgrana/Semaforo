/*
 * Semaforo.c
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */
#include "Semaforo1.h"
#include <stdio.h>

//void EstadoInicial(Semaforo * sema) {
//	sema->LuzRoja = 0;
//	sema->LuzAmarilla = 0;
//	sema->LuzVerde = 0;
//}
//
//void SemaforoInicializar(Semaforo * sema, int colorLuz) {
//	EstadoInicial(sema);
//	if (Roja == colorLuz) {
//		sema->LuzRoja = 1;
//	}
//	if (Amarilla == colorLuz) {
//		sema->LuzAmarilla = 1;
//	}
//	if (Verde == colorLuz) {
//		sema->LuzVerde = 1;
//	}
//
//}
//void SemaforoPrenderLuz(Semaforo * sema, int colorLuz) {
//
//EstadoInicial(sema);
//	if (Roja == colorLuz) {
//		sema->LuzRoja = 1;
//	}
//	if (Amarilla == colorLuz) {
//		sema->LuzAmarilla = 1;
//	}
//	if (Verde == colorLuz) {
//		sema->LuzVerde = 1;
//	}
//}
//
//void ApagarUnaLuz(Semaforo * sema, int colorLuz) {
//		if (Roja == colorLuz) {
//			sema->LuzRoja = 0;
//		}
//		if (Amarilla == colorLuz) {
//			sema->LuzAmarilla = 0;
//		}
//		if (Verde == colorLuz) {
//			sema->LuzVerde =0;
//		}
//	}
//
//
//
//void SemaforoImprimir(Semaforo * sema) {
//	if ((sema->LuzRoja) == 1) {
//		printf("la luz roja está prendida\n");
//	} else {
//		printf("la luz roja está apagado\n");
//
//	}
//	if ((sema->LuzAmarilla) == 1) {
//		printf("la luz amarilla está prendida\n");
//	} else {
//		printf("la luz amarilla está apagado\n");
//
//	}
//	if ((sema->LuzVerde) == 1) {
//		printf("la luz verde está prendida\n");
//	} else {
//		printf("la luz verde está apagada\n");
//
//	}
//
//}
//
//void CambiarLuz(Semaforo * sema, int colorLuz) {
//	EstadoInicial(sema);
//	SemaforoPrenderLuz(sema, colorLuz);
//}

//////////////////////////////////////////////////////////////////////////////////////////
//                                 P   A   R  T  E    2                                //
////////////////////////////////////////////////////////////////////////////////////////

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

