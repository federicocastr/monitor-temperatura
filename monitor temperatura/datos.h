#ifndef DATOS_H
#define DATOS_H
#include<fstream>
#include "paciente.h"
using namespace std;
class datos : public paciente{
private:
	float temperatura;
	string estado;
	float tempMax;
	float tempMin;
public:
	datos();									//constructores
	datos(string nombre,string apellido, int cedula, int edad, string genero,float temperatura,string estado,float tempMax,float tempMin);
	datos(string nombre,string apellido, int cedula, int edad, string genero);
	void settemperatura(float temperatura);		//setters
	void setestado(string estado);
	void settempMax(float tempMax);
	void settempMin(float tempMin);
	float gettemperatura();						//getters
	string getestado();
	float gettempMax();
	float gettempMin();
	string getEstado();							//metodos
	int getempmax();
	int getempmin();
	void prom();
	void Estado();
	void maxmin();
    void guardar();
};
#endif

