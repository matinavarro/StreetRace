#ifndef JUEGO_H
#define JUEGO_H
#include "Auto.h"
#include "Auto1.h"
#include "Auto2.h"
#include "Auto3.h"
#include "Obstaculo.h"

class Juego{
	Auto1 *auto1; 
	Auto2 *auto2; 
	Auto3 *auto3;
	Auto2 *obstaculo;
protected:
public:
	Juego();
	void play();
	int puntaje;
	int nivel;
	int checkCollision();
	void imprimir_nivel_puntaje();
	void dibujar_limites();
	void Mapeado_pantalla();
	
};

#endif

