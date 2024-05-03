#include "datos.h"
ifstream buscart;
ifstream buscarh;
ofstream historial;
datos::datos ( ) {
	this->temperatura=0;
	this->estado="";
	this->tempMax=0;
	this->tempMin=0;
}

datos::datos (string nombre, string apellido, int cedula, int edad, string genero, float temperatura, string estado, float tempMax, float tempMin)
:paciente(nombre,apellido,cedula,edad,genero){
	this->temperatura=temperatura;
	this->estado=estado;
	this->tempMax=tempMax;
	this->tempMin=tempMin;
}
datos::datos(string nombre,string apellido, int cedula, int edad, string genero)
	:paciente(nombre,apellido,cedula,edad,genero){
}

void datos::settemperatura (float temperatura) {
	this->temperatura=temperatura;
}

void datos::setestado (string estado) {
	this->estado=estado;
}

void datos::settempMax (float tempMax) {
	this->tempMax=tempMax;
}

void datos::settempMin (float tempMin) {
	this->tempMin=tempMin;
}

float datos::gettemperatura ( ) {
	return temperatura;
}

string datos::getestado ( ) {
	return estado;
}

float datos::gettempMax ( ) {
	return tempMax;
}

float datos::gettempMin ( ) {
	return tempMin;
}

void datos::prom () {
	
}

void datos::Estado () {
	
}

void datos::maxmin () {
	float max=0;
	float min=999;
	float a;
	buscart.open("temperaturas.txt",ios::in);
	while(!buscart.eof()){
		buscart>>a;
		if(a>=max){
			max=a;
		}
		if(a<=min){
			min=a;
		}
	}
	buscart.close();
	buscarh.open("historial.txt",ios::in);
	while(!buscarh.eof()){
		buscarh>>a;
		if(a>=max){
			max=a;
		}
		if(a<=min){
			min=a;
		}
	}
	settempMax(max);
	settempMin(min);
	buscarh.close();
	historial.open("historial.txt");
	historial<<max<<endl;
	historial<<min;
}
