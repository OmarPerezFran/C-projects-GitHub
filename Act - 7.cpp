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
#include <string>

int vector1[2]={1, 2}, vector2[2]={1, 4}, vector3[4], enter_data_vector, opc, opc2, i, j, len=4;		//Tamaño de los vectores
bool shutdown=1;		//Variable del ciclo infinito del menu


void func_menu()															//Menu
{
	cout << "____________________________ 		  " << endl;
	cout << "| Ingresar un dato         |        1" << endl;
	cout << "| Editar un dato           |        2" << endl;
	cout << "| Borrar un dato           |        3" << endl;
	cout << "| Vaciar un vector         |        4" << endl;
	cout << "| Mostrar datos            |   ->   5" << endl;
	cout << "| Union de vectores        |        6" << endl;
	cout << "| Interseccion de vectores |        7" << endl;
	cout << "| Diferencia               |        8" << endl;
	cout << "| Complemento              |        9" << endl;
	cout << "| Salir del programa       |        0" << endl;
	cout << "----------------------------         " << endl;
	fflush(stdin);
	cin >> opc;
}

void func_enterData()												//Ingreso de datos por parte del usuario
{
	cout << "	<<<Ingresar datos>>> \n\n En que vector quieres ingresar datos? \n Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	cin >> enter_data_vector;
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		cout << "Vector 1: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector1[opc-1] = opc2;
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		cout << "Vector 2: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector2[opc-1] = opc2;
	}
}

void func_editData()																	//Edición de datos por parte del usuario
{
	cout << "<<<Editar datos>>>" << endl;
	cout << "Que vector quieres editar? \n Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;	
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres editar los datos?" << endl;		// Comienza a mostrar meramente la tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		cout << "Vector 1: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector1[opc-1] = opc2;
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		cout << "Vector 2: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector2[opc-1] = opc2;
	}
}

void func_deleteData()
{
	cout << "<<<Borrar datos>>>" << endl;															//Borrado de datos
	cout << "Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;	
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres borrar los datos?" << endl;		// Comienza a mostrar meramente la tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		vector1[opc-1] = 0;
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres borrar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		vector1[opc-1] = 0;
	}
}

void func_deleteVector()
{
	cout << "<<<Borrar vector>>>" << endl;															//vaciado de vectores
	cout << "Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;
		
	if(enter_data_vector == 1)							//Vector 1
	{
		for(i=0; i<2; i++)
		{
			vector1[i] = 0;
		}
	}
	
	if(enter_data_vector == 2)							//Vector 2
	{
		for(i=0; i<2; i++)			
		{
			vector2[i] = 0;
		}
	}
}


void func_showData()
{
	cout << "<<<Mostrar datos>>>" << endl;
	cout << "Que vector quieres mostrar? \n Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> opc;
	
	if(opc == 1)
	{
		cout << "Vector 1" << endl;
		for(i=0; i<2; i++)
		{
		cout << "|" << vector1[i] << "| ";
		}		
	} cout << endl;

	if(opc == 2)
	{
		cout << "Vector 2" << endl;
		for(i=0; i<2; i++)
		{
		cout << "|" << vector2[i] << "| ";
		}		
	} cout << endl;
}

int main()
{


while(shutdown == 1)
{
	
	func_menu();
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
			cout << "<<<Union de vectores>>>" << endl;
			
			for(i=0; i<2; i++)
			{
				vector3[i] = vector1[i];
			}
			
			for(i=0; i<2; i++)
			{
				vector3[i+2] = vector2[i];
			}
			
			for(i=0; i<4; i++)
			{
				if(vector3[i]!=vector3[i-1] || vector3[i]!=vector3[i-2] || vector3[i]!=vector3[i-3])
				{
				
				cout <<"|" <<  vector3[i] << "| ";
				}
			}
			
			
			cout << endl;
			
			
		}				//Fin Case 6 (Union)
		break;
		
		case 7 :
		{
			
		}						//Fin Case 7 (Interseccion)
		break;
		
		case 0 :
		{
			cout << "Babye";
			shutdown = 0;
		}
		break;
	
	}				//FinSwitch Menu
}
	
	
	
	return 0;
}
