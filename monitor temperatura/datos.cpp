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
	ifstream archivo("temperaturas.txt");
	
	float x,numt=0,prom=0,sum=0;
	while (!archivo.eof()){
		numt++;
		archivo>>x;
		sum+=x;
		prom=sum/numt;
	}
	settemperatura(prom);	
}

void datos::Estado () { 
	
	string estad;
	if(temperatura<35){
		estad="HIPOTERMIA";
	}
	else{
		if(35<=temperatura && temperatura<=37){
			estad="ESTABLE";
		}
		else{
			if(temperatura>37){
				estad="FIEBRE";
			}
		}
	}
	setestado(estad);
	
}

void datos::maxmin () {
	float max=0;
	float min=999;
	int cedu;
	float m;
	float tmax, tmin, temp;
	string est;
	string d;
	buscart.open("temperaturas.txt",ios::in);
	while(!buscart.eof()){
		buscart >> m;
		if(m>=max){
			max=m;
		}
		if(m<=min){
			min=m;
		}
	}
	buscart.close();
	buscarh.open("historial.txt", ios::in);
		buscarh >> cedu;
		buscarh >> tmax;
		buscarh >> tmin;
		buscarh >> temp;
		buscarh >> est;
		if (max >= tmax) {
			max = tmax;
		}
		if (tmin <= min) {
			min = tmin;
	}
	settempMax(max);
	settempMin(min);
}
void datos::guardar(){
	historial.open("historial.txt",ios::in);
	historial << cedula<<endl;
	historial<<tempMax<<endl;
	historial<<tempMin<<endl;
	historial<<temperatura<<endl;
	historial<<estado<<endl;
}
