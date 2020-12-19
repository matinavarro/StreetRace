#include "Obstaculo.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>
#include <cstdio>
#include "Auto.h"
#include "Auto2.h"
#include <ctime>

using namespace std;

Obstaculo::Obstaculo(int vel, int x0, int y0):Auto2(vel,x0,y0){
	int Color = 2;
	
	matriz[0][0]=0;  color[0][0] = Color;
	matriz[0][1]=219; color[0][1] = Color;
	matriz[0][2]=219; color[0][2] = Color;
	matriz[0][3]=0; color[0][3] = Color;
	matriz[1][0]=0;  color[1][0] = Color;
	matriz[1][1]=219; color[1][1] = Color;
	matriz[1][2]=219; color[1][2] = Color;
	matriz[1][3]=0; color[1][3] = Color;
	matriz[2][0]=0; color[2][0] = Color;
	matriz[2][1]=219; color[2][1] = Color;
	matriz[2][2]=219;  color[2][2] = Color;
	matriz[2][3]=0; color[2][3] = Color;
	matriz[3][0]=0;  color[3][0] = Color;
	matriz[3][1]=219; color[3][1] = Color;
	matriz[3][2]=219; color[3][2] = Color;
	matriz[3][3]=0; color[3][3] = Color;
	matriz[4][0]=0;  color[4][0] = Color;
	matriz[4][1]=219; color[4][1] = Color;
	matriz[4][2]=219; color[4][2] = Color;
	matriz[4][3]=0; color[4][3] = Color;
	
	x = x0;
	y = y0;

}


