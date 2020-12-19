#include "Juego.h"
#include <iostream>
#include <conio2.h>
#include "Auto2.h"
#include "Auto3.h"
#include "Auto1.h"
#include "Obstaculo.h"

using namespace std;
Juego::Juego(){
	auto1 = new Auto1(1,25,25);
	auto2 = new Auto2(150,20,1);
	auto3 = new Auto3(130,35,1);
	obstaculo = new Obstaculo(125,10,1);
}

void Juego::dibujar_limites(){
	for (int i= 0; i<30; i++){
		for(int k=0; k<30;k++){
			textcolor(4);
			putchxy(2,1+i,'|');
			putchxy(59,1+k,'|');
		}
	}	
	for (int i= 0; i<30; i++){
		for(int k=0; k<30;k++){
		textcolor(4);
		putchxy(1,1+i,'|');
		putchxy(60,1+k,'|');
		}
	}	
}

void Juego::imprimir_nivel_puntaje(){
	puntaje = auto2->getcontador2()+auto3->getcontador3()+obstaculo->getcontador2();
	gotoxy(85,2);
	cout<<"Puntaje: "<<puntaje;	
	
		switch(puntaje){
		case(0):{
			nivel=1;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			break;
		}
		case(20):{
			nivel=2;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;
			auto2->setvelocidad2(120);
			auto3->setvelocidad3(100);
			break;
		}
		case(40):{
			nivel=3;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(100);
			auto3->setvelocidad3(80);
			break;
			
		}
		case(60):{
			nivel = 4;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(80);
			auto3->setvelocidad3(60);
			break;
		}
		case(80):{
			nivel = 5;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(60);
			auto3->setvelocidad3(40);
			break;
		}
		case(100):{
			nivel = 6;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(100);
			auto3->setvelocidad3(90);
			break;
		}
		case(120):{
			nivel = 7;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(90);
			auto3->setvelocidad3(70);
			break;
		}
		case(140):{
			nivel = 8;
			gotoxy(86,3);
			cout<<"Nivel: "<<nivel;	
			auto2->setvelocidad2(70);
			auto3->setvelocidad3(50);
			break;
		}
	}
}
void Juego::Mapeado_pantalla(){//Informacion en pantalla
	gotoxy(62,1);
	cout<<"=======================STREET RACE=========================";
	gotoxy(64,6);//Posicion donde se muentra el texto
	cout<<"El auto se mueve con las teclas de izquierda y Derecha, "<<endl;
	gotoxy(64,7);
	cout<<"Debes esquivar los autos, y a medida que vas pasando "<<endl;
	gotoxy(64,8);
	cout<<"cada uno de ellos sumas 1 punto que se ira acumulando"<<endl;
	gotoxy(64,9);
	cout<<"y cada 20 puntos, la velocidad de los autos aumentan."<<endl;
}
int Juego::checkCollision(){
	
	int x1 = auto1->getX();
	int y1 = auto1->getY();
	
	int x2 = auto2->getX();
	int y2 = auto2->getY();
	
	int x3 = auto3->getX();
	int y3 = auto3->getY();
	
	int x4 = obstaculo->getX();
	int y4 = obstaculo->getY();
	
	int ancho = 3;
	int alto = 4;
	
	
	if(x1 > (x2 - ancho) && x1 < (x2 + ancho) && 
	   y1 > (y2 - alto) && y1 < (y2 + alto))
	{return 2;}
	   
	if(x1 > (x3 - ancho) && x1 < (x3 + ancho) && 
		y1 > (y3 - alto) && y1 < (y3 + alto))
	{return 2;}
		
	if(x1 > (x4 - ancho) && x1 < (x4 + ancho) && 
		y1 > (y4 - alto) && y1 < (y4 + alto))
	{return 2;}
		  
		  return 0;
}
void Juego::play(){
	dibujar_limites();
	Mapeado_pantalla();
	bool game_on = true;
	while(game_on) {;
		imprimir_nivel_puntaje();
		auto1->update();
		auto2->update();
		auto3->update();
		obstaculo->update();
		if (checkCollision() == 2){
			game_on = false;
		}
	}

	
}
