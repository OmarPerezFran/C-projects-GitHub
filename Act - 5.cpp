/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 06/02/2023
PROGRAMA: Actividad de programacion 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Llenado, edición, vaciado y eliminación de valores de vectores
*/

#include <iostream>

using namespace std;

 int shutdown;	//Ingresar valores al vector
 int vector_option;		//opcion para cambiar los valores de los datos del vector
 int suma_vectores;		//sumar vectores
 int vector_sumatoria [3] = {}; 	//vector
 int DeleteEdit;		// Variable para estar camabiando el valor de los datos

 	
	void ingresarValor()
	{
		cout << "Quieres ingresar un valor al vector ? " << endl;
		cout << "SI >>> presiona 1" << endl;
		cout << "NO >>> presiona 0" << endl;
			fflush(stdin);
		cin >> shutdown;
	}
	
	void MostrarValores()
	{
		cout << "Los valores ingresados son: " <<endl;
		for(int j = 0; j < 3; j++)
		{
			cout << vector_sumatoria[j] << endl;
		}
		
		cout << "La suma de los valores ingresados son: " <<endl;
		for(int i = 0; i<3; i++)
		{
			suma_vectores += vector_sumatoria[i];
		}
		cout << suma_vectores << endl;
		suma_vectores = 0;

	}


int main()
{
	
	cout << "Quieres ingresar un valor al vector ? - Ten en cuenta que empieza a contar desde cero " << endl;
	cout << "SI >>> presiona 1" << endl;
	cout << "NO >>> presiona 0" << endl;
		fflush(stdin);
	cin >> shutdown;
		
	if(shutdown == 1)	// Dependiendo de la entrada anterior del usuario se determina si entra o no en el if
	{
		cout << "Ingresa el valor para el espacio No.0 del vector" << endl;
			fflush(stdin);
		cin >> vector_option;
		vector_sumatoria[0] = vector_option;
	}
	
	cout << "Quieres ingresar un valor al vector ? - Ten en cuenta que empieza a contar desde cero " << endl;
	cout << "SI >>> presiona 1" << endl;
	cout << "NO >>> presiona 0" << endl;
		fflush(stdin);
	cin >> shutdown;
	
	if(shutdown == 1)
	{
		cout << "Ingresa el valor para el espacio No.1 del vector" << endl;
			fflush(stdin);
		cin >> vector_option;
		vector_sumatoria[1] = vector_option;
	}
	
	cout << "Quieres ingresar un valor al vector ? - Ten en cuenta que empieza a contar desde cero " << endl;
	cout << "SI >>> presiona 1" << endl;
	cout << "NO >>> presiona 0" << endl;
	fflush(stdin);
	cin >> shutdown;
	
	if(shutdown == 1)
	{
		ingresarValor();
		cout << "Ingresa el valor para el espacio No.2 del vector" << endl;
			fflush(stdin);
		cin >> vector_option;
		vector_sumatoria[2] = vector_option;
		cout << "El vector ha alcanzado su limite (3)" << endl;
	}
	
	MostrarValores();		//Muestra los valores hasta ahora ingresados
	
		cout << "Quieres borrar o editar algun dato del vector? \n Borrar <<< 1 \n Editar <<< 2 \n Salir <<< 0" << endl;
	fflush(stdin);
	cin >> DeleteEdit;
	
	do			//DoWhile que inicia el ciclo de edicion de datos del vector
	{
	
	vector_option = DeleteEdit;
	
	switch(vector_option)	//switch que determina si se quiere borrar algun dato
	{
		case 0:		//si no se quiere borrar ni editar sale
			break;
		case 1:		//Si se quiere borrar se anida otro switch para ver que dato borrar
			cout << "Que dato quieres borrar?" << endl;
			cout << "vector 0 <<< 0 \n vector 1 <<< 1 \n vector 2 <<< 2 " << endl;
				fflush(stdin);
			cin >> vector_option;
			switch(vector_option)
			{
				case 0:
					vector_sumatoria[0] = 0;
					break;
				case 1:
					vector_sumatoria[1] = 0;
					break;
				case 2: 
				vector_sumatoria[2] = 0;
				break;
			}
			break;
		case 2:		//Si se quiere editar se anida otro switch para ver que dato editar
			cout << "Que dato quieres editar?" << endl;
			cout << "vector 0 <<< 0 \n vector 1 <<< 1 \n vector 2 <<< 2 " << endl;
				fflush(stdin);
			cin >> vector_option;
			switch(vector_option)
			{
				case 0:
					cout << "Que valor le quieres dar al vector 0? " << endl;
						fflush(stdin);
					cin >> vector_option;
					vector_sumatoria[0] = vector_option;
					break;
				case 1:
					cout << "Que valor le quieres dar al vector 1? " << endl;
						fflush(stdin);
					cin >> vector_option;
					vector_sumatoria[1] = vector_option;
					break;
				case 2: 
					cout << "Que valor le quieres dar al vector 2? " << endl;
						fflush(stdin);
					cin >> vector_option;
					vector_sumatoria[2]= vector_option;
					break;
			}	//FinSwitchEdit
	}	//FinSwitchEditOrDelete
	
	if(DeleteEdit != 0 )		//Aqui se pregunta otra vez para ver si salir o empezar el ciclo de nuevo
	{
		cout << "Quieres borrar o editar algun dato del vector? \n Borrar <<< 1 \n Editar <<< 2 \n Salir <<< 0" << endl;
			fflush(stdin);
		cin >> DeleteEdit;
	}
	
}	while(DeleteEdit != 0 );         //FinDoWhile
	
		cout << "Quieres vaciar el vector? \n SI <<< 1 \n  NO <<< 0" << endl; //vaciado del vector
			fflush(stdin);
		cin >> vector_option;
		if(vector_option == 1)
		{
			vector_sumatoria[0]= 0;
			vector_sumatoria[1]= 0;
			vector_sumatoria[2]= 0;
		}
	
	cout << "\n";
	MostrarValores();  //Mostrar valores finales y sumados
	
}	//FinMain

