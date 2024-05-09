#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
using namespace std;
class paciente{
protected:
	string nombre;
	string apellido;
	int cedula;
	int edad;
	string genero;
public:
	paciente();		//definir constructores
	paciente(string nombre,string apellido, int cedula, int edad, string genero);
	void setnombre(string nombre);		//setters
	void setapellido(string apellido);
	void setcedula(int cedula);
	void setedad(int edad);
	void setgenero(string genero);
	string getnombre();		//getters
	string getapellido();
	int getcedula();
	int getedad();
	string getgenero();
        void guardar();
};
#endif
