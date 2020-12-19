#ifndef AUTO_H
#define AUTO_H
#include <ctime>

class Auto {
protected:
	int x;
	int y;
	int ancho;
	int alto;
	int matriz[5][4]; //matriz del auto//
	int color[5][4]; // matriz de colores//

public:
	Auto();
	Auto(int&,int,int);
	int velocidad;
	clock_t tempo; //variable para ajustar la velocidad de movimiento del auto//
	clock_t paso; //variable para ajustar la velocidad de movimiento del auto//
	virtual void dibujar();
	virtual void borrar(); // para dibujar, antes debemor borrar
	int getX(){return x;}
	int getY(){return y;}
	int getvel(){return velocidad;}
	
};

#endif

