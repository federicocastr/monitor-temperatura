#include <iostream>
#include "paciente.h"
#include "datos.h"
using namespace std;
int main(){
	string nom,ape,gen;
	int ced, edad,opcion;
	//system("color 4f");
	cout << "\t====== BIENVENIDO ======" << endl ;
	cout << "     INGRESE LOS DATOS DEL PACIENTE    " << endl;
	cout << "Nombre: ";
	cin >> nom;
	cout << "Apellido: ";
	cin >> ape;
	cout << "Cedula: ";
	cin >> ced;
	cout << "Edad: ";
	cin >> edad;
	cout << "Genero: ";
	cin >> gen;
	paciente uno(nom,ape,ced,edad,gen);
	datos puno(nom,ape,ced,edad,gen);
	system("pause");
	system("cls");
	puno.maxmin();
	puno.prom();
	puno.Estado();
	cout << "\t====INFORMACION DE TEMPERATURA====" << endl;
	cout << "Paciente: " << puno.getnombre() <<" " << puno.getapellido() << endl;
	cout << "La temperatura maxima registrada es de: " << puno.gettempMax() << " Celsius" << endl;
	cout << "La temperatura minima registrada es de: " << puno.gettempMin() << " Celsius" << endl;
	cout << "Temperatura promedio: " << puno.gettemperatura() << " Celsius" << endl;
	cout << "Estado del paciente: " << puno.getestado() << endl;
}
