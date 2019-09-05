/*
 * Semaforo.h
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */

#ifndef SEMAFORO_H_
#define SEMAFORO_H_

typedef struct SemaforoSecuenciado {
	Semaforo sema;
	int TiempoRoja;
	int TiempoAmarilla;
	int TiempoVerde;
} SemaforoSecuenciado;
//////////////////////////////////////////////////////////////////////////////////////////
//                                 P   A   R  T  E    1                                //
////////////////////////////////////////////////////////////////////////////////////////
enum Color {
	Roja, Amarilla, Verde
};
enum Estado {
	Apagar, Prender
};
typedef struct Semaforo {
	int LuzRoja;
	int LuzAmarilla;
	int LuzVerde;

} Semaforo;

//void EstadoInicial(Semaforo * sema);
//void SemaforoInicializar(Semaforo * sema, int color);
//void SemaforoPrenderLuz(Semaforo * sema, int color);
//void ApagarUnaLuz(Semaforo * sema, int color);
//void CambiarLuz(Semaforo * sema, int color);
//void SemaforoImprimir(Semaforo * sema);
//////////////////////////////////////////////////////////////////////////////////////////
//                                 P   A   R  T  E    2                                //
////////////////////////////////////////////////////////////////////////////////////////

typedef struct SemaforoSecuenciado {
	Semaforo sema;
	int TiempoRoja;
	int TiempoAmarilla;
	int TiempoVerde;
} SemaforoSecuenciado;


void EstadoInicial(SemaforoSecuenciado * semSec);
void SemaforoInicializar(SemaforoSecuenciado * semSec, int Roja,
		int AsignarTiempoLuzRoja);
void SemaforoImprimir(SemaforoSecuenciado * semSec);
void SemaforoPrenderLuz(SemaforoSecuenciado * semSec, int colorLuz,
		int tiempoEncendido);
void CambiarLuz(SemaforoSecuenciado * semSec, int colorLuz, int tiempoEncendido);
#endif /* SEMAFORO_H_ */
