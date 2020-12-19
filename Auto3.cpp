#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
#include "Auto3.h"

using namespace std;
//Constructor//
Auto3::Auto3(int vel, int x0, int y0):Auto(vel,x0,y0){
	velocidad3=vel;
	int Color = 4;
	
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
int Auto3::setvelocidad3(int vel){
	velocidad3 = vel;
}

void Auto3::update(){
		if(tempo+velocidad3<clock()){
			borrar();
			y++;
			if(y%2!=0){
				x=x+2;
				dibujar();
			}else{
				x=x-2;
				dibujar();
			}
			tempo=clock();
			}
		if(y==26){
			contador_a3++;
			borrar();
			x=(rand()%45)+6;
			y=1;
		}
}

