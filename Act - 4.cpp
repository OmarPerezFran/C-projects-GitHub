/*          PRESENTACION
 NOMBRE: Omar Perez Franco
 FECHA: 01/02/2023
 PROGRAMA: Actividad de programacion 4
 CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
 INGENIERIA EN COMPUTACION / 2DO SEMESTRE
 PROFESOR: Sergio Franco Casillas
 DESCRIPCION:
 	Elaboracion automatica de la serie fibonacci con un valor de entrada introducido por el usuario
	El cual asimismo determina el ciclo con el cual se itera: for, while, do-while
	El programa sale cuando lo indica el usuario
*/

#include <iostream>

using namespace std;

int shutdown, entrada, ciclo, x = 0, y = 1;				//shutdown: Finalizar proceso, x/y: sirven para los ciclos de iteracion

int main(){
	
	do 			//Inicio del ciclo infinito do-while, que cierra con una pregunta al final
	{
	
		cout << "Ingresa un numero de la serie fibonacci: ";
		cin >> entrada;				//numero que servira de tope en los ciclos de la serie fibonacci
		
		cout << "¿Con que ciclo quieres iterar? \n Selecciona una sola opcion: \n\n 1: For \n 2: While \n 3: Do-While \n" << endl;
		cin >> ciclo;			//Variable para entrar a cada ciclo del switch
		cout << endl;
		
		switch(ciclo)
		{
			
			case 1:					//Serie fibonacci_For loop
				
				for (int i=0; x<=entrada; i++)
				{
					cout << x << endl;
					
					x += y;
						
					y = x-y;
					
				} 
			
		
			case 2:				//Serie fibonacci_While
				
				while(x<=entrada)
				{
				
				x += y;
					
				y = x-y;
				
				if(x <= entrada)
				{
					cout << x << endl;
				}
				
				} 
			
				
			case 3:			//Serie fibonacci_Do-while
				
				do
				{
		
					x += y;
						
					y = x-y;				
					
					if(x <= entrada)
					{
						cout << x << endl;
					}	
				
				} while(x<=entrada);
			
			
	cout << "¿Deseas terminar el programa? \n Si = Presiona cualquier tecla \n No = 1  \n";
	cin >> shutdown;			// Opcion de finalizacion del programa
		}
	}	while(shutdown==1);


}
