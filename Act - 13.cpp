/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 13/03/2023
PROGRAMA: Actividad de programacion 12
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
-Tener un banco de al menos 20 palabras
-La computadora va a elegir una al azar y el usuario debe adivinar el resultado
-Si el usuario elige una vocal, se debe penalizar con 1 intento, es decir, tendrá una oportunidad menos
-Contar el número de intentos por jugador
*/



#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int entrada, contador, num, size, i, j, k;

string palabra, palabras[20]={"aegislash", "snorlax", "pikachu", "dragonite", "charizard", "druddigon", "tyranitar", "slowbro", "slowpoke", "greninja", "volcarona", "gengar", "haunter", "zeraora", "talonflame", "tsareena", "gardevoir", "blastoise", "ditto", "dodrio"};
char letra, palabrac[100];

void f_comp()			
{
	//Funcion que comprueba si la letra introducida por el usuario es o no la de la palabra a adivinar sustituyendola en su mismo espacio
	
	for(j=0; j<size; j++)
	{
		if(palabra[j]==letra)			//Si la palabra coincide con la palabra la letras se guarda en la palabra
		{
			palabrac[j]=letra;
			cout<<palabrac[j];	
		}
		else
			cout<<palabrac[j];			//SiNo imprime la palabra (con puros ____)
		
		for(k=0; k<size; k++)				//For que verifica si hay una letra en la palabra completa si es asi sale del for y inicia un nuevo ciclo
		{
			if(isalpha(palabrac[k]))
				break;
		}
	}
}

int main()
{	
	
	system("Title Juego del ahorcado");
	system("Color 0c");
	
	principio:
	
	cout<<"Bienvenido al juego del ahorcado"<<endl;
	cout<<"A continuacion aparecera un contador con tus intentos y los espacios a llenar para completar la palabra, SUERTE!"<<endl;
	cout<<"Tienes un maximo de 10 intentos"<<endl;
	cout<<"Cada que selecciones una vocal se contara un intento adicional\n\n";

	srand(time(0));
	num=rand()%20;
	palabra=palabras[num];
	size=palabra.length();
	
	cout<<palabra<<endl;
	
	strcpy(palabrac, palabra.c_str());
	
	for(i=0; i<size; i++)			//For que reemplaza cada letra de la palabra a adivinar por un guion
		{
			palabrac[i]='_';
		}
	cout<<palabrac<<endl;
	
	for(i=1; i<100; i++)				//For que imprime los intentos del usuario
	{
		cout<<"\n";
		cout<<"Intento No. "<<i<<endl;
		cout<<"Ingresa una letra: ";
		cin>>letra;
		
	switch(letra)						//Verifica si es una vocal y de ahí añade un intento más
	{
		case 0:
			goto exit;
		case 'a': case 'A':
			i++; 
		break;
		case 'e': case 'E':
			i++; 
		break;
		case 'i': case 'I':
			i++; 
		break;
		case 'o': case 'O':
			i++; 
		break;
		case 'u': case 'U':
			i++; 
		break;
	}
		system("cls");
		f_comp();
	}
	
	cout<<"Felicidades completaste la palabra \nVolver a jugar? \nSi<<<1\nNo<<<2"<<endl;
	cin>>entrada;
	switch(entrada)
	{
		case 1:
			goto principio;
		break;
		
		case 2:
			goto exit;
		break;
	}
	
	exit:
		cout<<"finalizaste el programa";
	
	
}

