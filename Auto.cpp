#include "Auto.h"
#include <cstdlib>
#include <conio2.h>
#include <iostream>

using namespace std;
Auto::Auto(){	
};
Auto::Auto(int &vel,int x0,int y0){
		velocidad = vel;
		paso=CLOCKS_PER_SEC/velocidad; //cada cuanto se permite mover el auto//
		tempo=clock(); //inicializa el tempo con el reloj//
		
		matriz[0][0]=0;  
		matriz[0][1]=219; 
		matriz[0][2]=0; 
		matriz[0][3]=219; 
		matriz[1][0]=0;  
		matriz[1][1]=61; 
		matriz[1][2]=47; 
		matriz[1][3]=61; 
		matriz[2][0]=30; 
		matriz[2][1]=61;
		matriz[2][2]=0;  
		matriz[2][3]=61;
		matriz[3][0]=0; 
		matriz[3][1]=61; 
		matriz[3][2]=92; 
		matriz[3][3]=61; 
		matriz[4][0]=0;  
		matriz[4][1]=219; 
		matriz[4][2]=0; 
		matriz[4][3]=219; 
		
		ancho = 5;
		alto = 4;

};

//metodo para dibujar//
void Auto::dibujar(){
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);
			putchxy(x+i,y+k,matriz[i][k]);
		}
	}
}

//metodo para borrar//
void Auto::borrar(){
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			putchxy(x+i,y+k,' ');
		}
	}
}

