/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 13/03/2023
PROGRAMA: Actividad de programacion 14
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
-Directorio con datos personales de los compañeros del salon
-Los datos son: nombre, apellidos, ciudad, estado, municipio, calle, edad, estatura en cm
-Solicitar los datos de 5 compañeros
-Realizar una buena presentacion
-Buscar la manera que el contenido se pueda guardar y recuperar en un archivo de texto
*/

#include <string>
#include <iostream>
using namespace std;

bool off=1;
int i=0, num=5, cases;

struct directorio
{
	string nombre;
	string apellidos;
	string ciudad;
	string estado;
	string Municipio;
	string municipio;
	string calle;
	int edad;
	int estatura;
	
}d1, d2, d3, d4, d5;


//void ffull()
//{
//	i+=1;
//	cout<<"Usuario Num. "<<i<<" :"<<endl;			//Llenado de datos
//		cout<<"Nombre/s: ";
//		getline(cin, d[i].nombre);					
//		cout<<"Apellidos: ";
//		getline(cin, d[i].apellidos);					
//		cout<<"Ciudad: ";
//		getline(cin, d[i].ciudad);					
//		cout<<"Estado: ";
//		getline(cin, d[i].estado);					
//		cout<<"Municipio: ";
//		getline(cin, d[i].municipio);					
//		cout<<"Calle: ";
//		getline(cin, d[i].calle);					
//		cout<<"Edad: ";
//		cin>>d[i].edad;
//		cout<<"Estatura en cm: ";
//		cin>>d[i].estatura;
//		cout<<endl;
//}
// 
//void fshow()
//{
//	cout<<"-Datos ingresados: "<<endl;			//Impresion de datos ingresados
//		cout<<"Nombre/s: ";
//		cout<<d[i].nombre<<endl;
//		cout<<"Apellidos: ";
//		cout<<d[i].apellidos<<endl;
//		cout<<"Ciudad: ";
//		cout<<d[i].ciudad<<endl;
//		cout<<"Estado: ";
//		cout<<d[i].estado<<endl;
//		cout<<"Municipio: ";
//		cout<<d[i].municipio<<endl;
//		cout<<"Calle: ";
//		cout<<d[i].calle<<endl;
//		cout<<"Edad: ";
//		cout<<d[i].edad<<endl;
//		cout<<"Estatura en cm: ";
//		cout<<d[i].estatura<<"\n\n";
//}

int main()
{
system("Title Directorio");

directorio d[num];


while(off==1)
{									

	cout<<"---MENU---"<<endl;
	cout<<"Llenar datos<<<Presiona 1"<<endl;
	cout<<"Mostrar datos<<<Presiona 2"<<endl;
	cout<<"Salir<<<Preiona 0"<<endl;
	cin>>cases;
	
	switch(cases)
	{
		case 1:								//Llenado de datos
		if(i!=0)
			i+=1;
		else
		{
		cout<<"Usuario Num. "<<i<<" :"<<endl;			
		cout<<"Nombre/s: ";
		getline(cin.ignore(), d[i].nombre);					
		cout<<"Apellidos: ";
		getline(cin, d[i].apellidos);					
		cout<<"Ciudad: ";
		getline(cin, d[i].ciudad);					
		cout<<"Estado: ";
		getline(cin, d[i].estado);					
		cout<<"Municipio: ";
		getline(cin, d[i].municipio);					
		cout<<"Calle: ";
		getline(cin, d[i].calle);					
		cout<<"Edad: ";
		cin>>d[i].edad;
		cout<<"Estatura en cm: ";
		cin>>d[i].estatura;
		cout<<endl;	
		}
			break;
		
		case 2:
		cout<<"-Datos ingresados: "<<endl;			//Impresion de datos ingresados
		cout<<"Nombre/s: ";
		cout<<d[i].nombre<<endl;
		cout<<"Apellidos: ";
		cout<<d[i].apellidos<<endl;
		cout<<"Ciudad: ";
		cout<<d[i].ciudad<<endl;
		cout<<"Estado: ";
		cout<<d[i].estado<<endl;
		cout<<"Municipio: ";
		cout<<d[i].municipio<<endl;
		cout<<"Calle: ";
		cout<<d[i].calle<<endl;
		cout<<"Edad: ";
		cout<<d[i].edad<<endl;
		cout<<"Estatura en cm: ";
		cout<<d[i].estatura<<"\n\n";		break;
			
		case 0:
			off=0;
		break;	
	}			//Fin switch
}				//Fin while	
}				//Fin main
