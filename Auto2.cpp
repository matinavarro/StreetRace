#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto2.h"

using namespace std;
//Constructor//
Auto2::Auto2(int vel, int x0, int y0):Auto(vel,x0,y0){
	velocidad2 = vel;
	int Color = 14;
	
	color[0][0] = Color;
	color[0][1] = Color;
	color[0][2] = Color;
	color[0][3] = Color;
	color[1][0] = Color;
	color[1][1] = Color;
	color[1][2] = Color;
	color[1][3] = Color;
	color[2][0] = Color;
	color[2][1] = Color;
	color[2][2] = Color;
	color[2][3] = Color;
	color[3][0] = Color;
	color[3][1] = Color;
	color[3][2] = Color;
	color[3][3] = Color;
	color[4][0] = Color;
	color[4][1] = Color;
	color[4][2] = Color;
	color[4][3] = Color;
	x = x0;
	y = y0;
}
int Auto2::setvelocidad2(int vel){
	velocidad2 = vel;	
}

void Auto2::update(){
		if(tempo+velocidad2<clock()){
			borrar();
			y++;
			dibujar();
			tempo=clock();
		}
		if(y==26){
			contador_a2++;
			borrar();
			x=(rand()%50)+4;
			y=1;
		}
}

