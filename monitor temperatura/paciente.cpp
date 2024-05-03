#include "paciente.h"

paciente::paciente(){
	this->nombre="";
	this->apellido="";
	this->cedula=0;
	this->edad=0;
	this->genero="";
}
paciente::paciente(string nombre,string apellido, int cedula, int edad, string genero){
	this->nombre=nombre;
	this->apellido=apellido;
	this->cedula=cedula;
	this->edad=edad;
	this->genero=genero;
}
void paciente::setnombre(string nombre){
	this->nombre=nombre;
}
void paciente::setapellido(string apellido){
	this->apellido=apellido;
}
void paciente::setcedula(int cedula){
	this->cedula=cedula;
}
void paciente::setedad(int edad){
	this->edad=edad;
}
void paciente::setgenero(string genero){
	this->genero=genero;
}
string paciente::getnombre(){
	return this->nombre;
}
string paciente::getapellido(){
	return this->apellido;
}
int paciente::getcedula(){
	return this->cedula;
}
int paciente::getedad(){
	return this->edad;
}
string paciente::getgenero(){
	return this->genero;
}

