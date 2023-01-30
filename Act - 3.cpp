/*          PRESENTACION
 NOMBRE: Omar Perez Franco
 FECHA: 29/01/2023
 PROGRAMA: Actividad de programacion 3
 CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACION / 2DO SEMESTRE
 PROFESOR: Sergio Franco Casillas
 DESCRIPCION:
 	 Aumentar valores ingresados por medio de un for
	 condicionales con if
	 contadores de acciones realizadas
	 contadores de datos impresos
	 en un ciclo infinito do while
*/

#include <iostream>
using namespace std;

int input;
int shutdown;
int i; 
int Contador;
int x;

int main(int argc, char *argv[]) {
	
	
	do 			//Inicio del ciclo infinito do-while, que cierra con una pregunta al final
	{
	
	cout<<"Ingresa un numero \n";
	cin>>input;								//El valor imgresado va a ser aumentado por medio de los for
	
	
	if (input >= 0 && input < 500)
	{
		
		for(i=input; i<=input+500; i+=5)
		{
			cout << x << ".- " << i << endl;  			//A medida que el input aumenta en cada ciclo también lo hace el contador "x"
			x ++;
		}
		
	}
	
	if (input>=500 && input<=1000)		//Valores entre 500 y 1000
	{
		for(i=input; i<=input+500; i+=10)
		{
			cout  << i << endl;
			x++;
		}
	}
	if (input > 1000)
	{
		cout << "No se puede calcular el valor \n";
	}

	
	cout << "¿Deseas terminar el programa? \n Si = Presiona cualquier tecla \n No = 1  \n";
	cin >> shutdown;			// Opcion de finalizacion del programa
	
	Contador = Contador+1;			//Contadores que aumentan en 1/ciclo
	x = 0;
	
	}
	while(shutdown==1);
	
	
	if(Contador==1)
	{
		cout << "La accion se realizo: " << Contador << " vez";
	}
	if(Contador>1)
	{
		cout << "La accion se realizo: " << Contador << " veces";
	}
	
	return 0;
}


