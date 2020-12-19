#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include "Auto1.h"

using namespace std;
//Constructor//
Auto1::Auto1(int vel, int x0, int y0):Auto(vel,x0,y0){
	int Color = 2;
	
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
	dibujar();
}
void Auto1::update(){
	if (_kbhit()){
		int tecla = getch();
		switch(tecla){
		case (77):{ // derecha
				if(x<54){
				borrar();
				x++;
				dibujar();
				}
		break;
		}
		case (75):{ // izquierda
				if(x>3){
				borrar();
				x--;
				dibujar();
				}
		break;
		}
		}	
	}
}
