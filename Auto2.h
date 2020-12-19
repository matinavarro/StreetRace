#ifndef AUTO2_H
#define AUTO2_H
#include "Auto.h"

class Auto2:public Auto{
	int velocidad2;
public:
	Auto2(){};
	Auto2(int,int,int);
	int contador_a2=0;
	int setvelocidad2(int);
	int getcontador2(){return contador_a2;}
	virtual void update();
};

#endif
