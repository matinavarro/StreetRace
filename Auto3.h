#ifndef AUTO3_H
#define AUTO3_H
#include "Auto.h"

class Auto3:public Auto{
	int velocidad3;
public:
	Auto3(){};
	Auto3(int,int,int);
	int contador_a3=0;
	int setvelocidad3(int);
	int getcontador3(){return contador_a3;}
	void update();
};

#endif
