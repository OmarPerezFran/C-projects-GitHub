/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 06/03/2023
PROGRAMA: Actividad de programacion 10
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Retomada desde la actividad 5;
-Llenado, edición, vaciado y eliminación de valores de vectores

-Implementacion de funciones
-LLenado random del arreglo desde 1-50 espacios los cuales serán indicados por el usuario
-Implementados algoritmos de ordenamiento: bubblesort y quicksort
-Implemenatdo algoritmo de busqueda: busqueda binaria
*/

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

bool shutdown=true;		//While infinito
int vector1[50], i, size, opc, opc2, aux;


#include "Funciones Act - 10.cpp"


int main()
{
	
	cout << "Los valores del arreglo seran llenados aleatoriamente.\n\nCuantos espacios quieres llenar? MAX.50" << endl;
	fflush(stdin);
	cin >> size;
	
	llenarVector();
	
	cout << "\n---MENU--- \n\n Borrar <<< 1 \n Editar <<< 2 \n Vaciar <<< 3 \n Ordenar mediante Bubble Sort <<< 4 \n Ordenar mediante Quick Sort <<< 5 \n Busqueda binaria << 6\n Salir <<< 0" << endl;
	fflush(stdin);
	cin >> opc;
	if(opc==0)
		shutdown=false;
	
while(shutdown==true)
{
	switch(opc)
	{
		case 1:
			cout<<"\n BORRADO DE DATOS"<<endl;
			cout << "Los valores ingresados son:" <<endl;
			mostrarValores();		//Muestra los valores hasta ahora ingresados
	
			cout << "Que espacio quieres borrar?" << endl;
			fflush(stdin);
			cin >> opc;
			vector1[opc-1] = 0 ;
			
			cout << "\n Valores editados:" <<endl;
			mostrarValores();		//Muestra los valores borrados
		break;
		
		case 2:
			cout<<"\n EDICION DE DATOS"<<endl;
			cout << "Los valores ingresados son:" <<endl;
			mostrarValores();		//Muestra los valores hasta ahora ingresados
	
			cout << "Que espacio quieres editar?" << endl;
			fflush(stdin);
			cin >> opc;
			cout << "Que valor le quieres dar al espacio "<<opc<<"?" << endl;
			fflush(stdin);
			cin >> opc2;
			vector1[opc-1] = opc2;
			
			cout << "\n Valores editados:" <<endl;
			mostrarValores();		//Muestra los valores editados
		break;
		
		case 3:
			cout<<"\n VACIADO DEL VECTOR"<<endl;
			
			cout << "Los valores ingresados son:" <<endl;
			mostrarValores();		//Muestra los valores hasta ahora ingresados
			
			for(i=0; i<size; i++)
			{
				vector1[i] = 0;
			}
			
			cout << "\n Vector vaciado" << endl;
			cout << "Valores editados:" <<endl;
			mostrarValores();		//Muestra los valores vaciados
		break;
		
		case 4:
			cout<<"\n BUBBLE SORT"<<endl;
			
			cout << "Los valores ingresados son:" <<endl;
			mostrarValores();				//Muestra los valores hasta ahora ingresados
			
			for(i=1; i<size; i++)
			{
				if(vector1[i]<vector1[i-1])
				{
					aux=vector1[i];
					vector1[i]=vector1[i-1];
					vector1[i-1]=aux;
				}
				if(vector1[i-2]>vector1[i-1])
					i=-1;
			}
			cout << "Valores ordenados:" <<endl;
			mostrarValores();		//Muestra los valores ordenados
		break;
		
		case 5:
			shutdown=false;
		break;
		
		case 6:
			shutdown=false;
		break;
		
		case 0:
			shutdown=false;
		break;
	}	
	
	cout << "\n---MENU--- \n\n Borrar <<< 1 \n Editar <<< 2 \n Vaciar <<< 3 \n Ordenar mediante Bubble Sort <<< 4 \n Ordenar mediante Quick Sort <<< 5 \n Busqueda binaria << 6\n Salir <<< 0" << endl;
	fflush(stdin);
	cin >> opc;

}
		
cout<<"Babye";
		
	
}	//FinMain

