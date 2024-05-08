#include <iostream>
#include "paciente.h"
#include "datos.h"
using namespace std;
int main(){
	string nom,ape,gen;
	int ced, edad,opcion;
	cout<<"bienvenido, ingreselos datos del paciente"<<endl;
	cout<<"nombre"<<endl;
	cin>>nom;
	cout<<"apellido"<<endl;
	cin>>ape;
	cout<<"cedula"<<endl;
	cin>>ced;
	cout<<"edad"<<endl;
	cin>>edad;
	cout<<"genero"<<endl;
	cin>>gen;
	paciente uno(nom,ape,ced,edad,gen);
	datos puno(nom,ape,ced,edad,gen);
	system("pause");
	system("cls");
	puno.maxmin();
	puno.temperatura();
	puno.estado();
	cout<<"informacion de temperatura de "<<puno.getnombre();
	cout<<"la temperatura maxima registrada es de "<<puno.gettempMax()<<endl;
	cout<<"la temperatura minima registrada es de "<<puno.gettempMin()<<endl;
	cout<<"informacion de temperatura promedio "<<puno.gettemperatura()<<endl;
	cout<<"informacion estado del paciente: "<<puno.getestado()<<endl;
}
