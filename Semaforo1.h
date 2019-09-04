/*
 * Semaforo.h
 *
 *  Created on: 2 sep. 2019
 *      Author: valeria
 */

#ifndef SEMAFORO_H_
#define SEMAFORO_H_
enum Color {
	Rojo, Amarillo, Verde
};
enum Estado{
	Apagar,Prender
};

typedef struct Semaforo {
	int Rojo;
	int Amarillo;
	int Verde;

} Semaforo;
void EstadoInicial(Semaforo * sema);
void SemaforoInicializar(Semaforo * sema, int color);
void SemaforoPrenderLuz(Semaforo * sema,int color);
void ApagarUnaLuz(Semaforo * sema, int color);
void CambiarLuz(Semaforo * sema, int color);
void SemaforoImprimir(Semaforo * sema);

#endif /* SEMAFORO_H_ */
