
//Puntero con estructura 

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
	};

int main()
{
	char r;
	int fila=0,columna=0,**pm_notas;
	int *codigo;
	string *nombre;
		
do {
	system("color 71");	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;	
	pm_notas = new  int *[fila];
	codigo = new int [fila];
	nombre = new string [fila];
	for (int i=0;i<fila;i++){
	pm_notas[i] = new int[columna]; 	
	}
	cout<<"\n\t\t\t\tIngrese Notas"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Ingrese el codigo: ";
		cin>>codigo[i];
		cin.ignore();
		cout<<"\nIngrese el nombre: ";
		getline(cin,nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"\nIngrese la Nota "<<++ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
			ii--;
			}
			cout<<"======================================"<<endl;
	}
		system("cls");
		system("color 71");
		cout<<"\n\t\t\t\tMostrar Notas"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"\nCodigo: ";
			cout<<codigo[i]<<endl;
			cout<<"\nNombre: ";
			cout<<nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"\nNotas "<<++ii<<" : ";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			ii--;
			}
			cout<<"======================================"<<endl;
	}
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;
cout << " " << endl;
cout << "\nDesea hacer un nuevo calculo? [S/N]" << endl;
cin >> r;
system("cls");
}while (toupper (r)=='S'); 
	system("PAUSE");
	return 0;
}
