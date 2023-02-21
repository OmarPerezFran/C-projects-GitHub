/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 14/02/2023
PROGRAMA: Actividad de programacion 7
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Operaciones de conjutnso entre dos vectores
Operaciones de Unión, Intersección, Diferencia y complemento
Inserción de valores por parte del usuario
Datos textuales y numéricos (strings)
Borrado y edición de elementos
Vaciado de conjuntos
*/

#include <iostream>
using namespace std;

string vector1[2]={"1", "2"}, vector2[2]={"1", "4"}, vector3[4], opc2;
int enter_data_vector, opc, i, j, len=4, vector;		//Tamaño de los vectores
bool shutdown=1, repetido=false;		//Variable del ciclo infinito del menu

#include "funciones_act7.cpp"				//Libreria con las funciones



int main()
{


while(shutdown == 1)
{
	
	cout << "____________________________ 		  " << endl;
	cout << "| Ingresar un dato         |        1" << endl;
	cout << "| Editar un dato           |        2" << endl;
	cout << "| Borrar un dato           |        3" << endl;
	cout << "| Vaciar un vector         |        4" << endl;
	cout << "| Mostrar datos            |   ->   5" << endl;
	cout << "| Operaciones de conjuntos |        6" << endl;
	cout << "| Salir del programa       |        0" << endl;
	cout << "----------------------------         " << endl;
	fflush(stdin);
	cin >> opc;
		
	switch(opc)
	{
		case 1:
		{
			func_enterData();
		}
		break;
		
		case 2:
		{
			func_editData();
		}
		break;
		
		case 3:
		{
			func_deleteData();
		}
		break;
		
		case 4:
		{
			func_deleteVector();
		}
		break;
		
		case 5:
		{
			func_showData();
		}
		break;
		
		case 6:
		{
			cout << "Que operacion quieres realizar?: " << endl;
			cout << "________________________________		  " << endl;
			cout << "| Union                        |        1" << endl;
			cout << "| Interseccion                 |        2" << endl;				//Menú de operaciones
			cout << "| Diferencia Vector1 - Vector2 |        3" << endl;
			cout << "| Diferencia Vector2 - Vector1 |        4" << endl;
			cout << "| Complemento Vector 1         |        5" << endl;
			cout << "| Complemento Vector 2         |        6" << endl;
			cout << "--------------------------------         " << endl;
			fflush(stdin);
			cin >> opc;
			
			switch(opc)
			{
				case 1:
				{
					func_showData();
					cout << endl << endl;
					cout << "<<<Union de vectores>>>" << endl;
		
					func_MostrarVector1();
					
					for(i=0; i<2; i++)
					{
						repetido=false;
						for(j=0; j<2; j++)
						{
							if(vector2[i]==vector1[j])
							{
							repetido=true;
							break;
							}
						}
						if(!repetido)
						{
							cout << "|" << vector2[i] << "| ";						
						}
					}		
				}				//Fin Case 6->1 (Union)	
			
		
		
							
				case 2:
				{
					func_showData();
					cout << endl << endl;
					cout << "<<<Interseccion de vectores>>>" << endl;
								
					for(i=0; i<2; i++)
					{
						repetido=false;
						for(j=0; j<2; j++)
						{
							if(vector2[i]==vector1[j])
							{
							repetido=true;
							break;
							}
						}
						if(repetido)
						{
							cout << "|" << vector2[i] << "| ";						
						}
					}
					cout << endl;	
				}				//Fin Case 6->2 (Interseccion)
				
				case 3:
				{
					func_showData();
					cout << endl << endl;
					cout << "<<<Diferencia de vectores>>>" << endl;
								
					for(i=0; i<2; i++)
					{
						repetido=false;
						for(j=0; j<2; j++)
						{
							if(vector2[i]==vector1[j])
							{
							repetido=true;
							break;
							}
						}
						if(!repetido)
						{
							cout << "|" << vector2[i] << "| ";						
						}
					}
					cout << endl;	
				}				//Fin Case 6->2 (Diferencia (A-B, B-A)				
				
				
				
				
				
				
			}				//Fin Switch de operaciones		
		
		}	
	}				//FinSwitch Menu
}					//FinWhile
	
	
	
}					//FinMain
