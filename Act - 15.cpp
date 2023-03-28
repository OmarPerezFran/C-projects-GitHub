/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 28/03/2023
PROGRAMA: Actividad de programacion 15
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas

DESCRIPCION:
	Realizar el juego del Gato
	Pedir el nombre de cada jugador / computadora
	Con la posibilidad de jugar contra la computadora o contra otro usuario
	Contabilizar las partidas ganadas por jugador
	Crea tus propias funciones o librerías
*/

#include <iostream>
#include <conio.h>
using namespace std;

bool off;
char tablero[3][3], jugada, turno;
string opciones = "abcdefghi", jugador1, jugador2;
int i, j, contador;

// Función para imprimir el tablero de juego
void printTablero()
{
	for(i = 0; i<3; i++)
	{
		for(j = 0; j<3; j++)
		{
			if(tablero[i][j]!= NULL)
				cout<<" "<<tablero[i][j];
			else
				cout<<"  ";
		
		if(j!=2)
			cout<<" |";
		
		if(j==2)
		{
			cout<<endl;
			if(i!=2)
			cout<<"------------"<<endl;
		}
		}
	}
	cout<<endl;
}

char Jugadas()
{
	cout<<"Jugadas disponibles"<<endl;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
		cout<<opciones[contador]<<" ) ["<<i<<"],["<<j<<"]";
		if(tablero[i][j] != NULL)
			cout<<" OCUPADO";
			
		contador++;
		cout<<endl;
		}
	}
	contador=0;
	if(turno%2==0)
		cout<<jugador1<<" elige una jugada: "<<endl;

	if(turno%2==1)
		cout<<jugador2<<" elige una jugada: "<<endl;
		
	return getch();	
}

void update(int x, int y)
{
	if(turno%2==0)
	{
		tablero[x][y] = 'X';
	}
	else
	{
		tablero[x][y] = 'O';
	}
	turno++;
}
	
int registrarJugada(char jugada)
{

	if(jugada != NULL && jugada>='a' && jugada<='i')
	{
	
		switch(jugada)
		{
		
		case 'a':
		if (tablero[0][0] == NULL)
		update(0, 0);
		return 1; 
		break;
		
		case 'b':
		if (tablero[0][1] == NULL)
		update(0, 1);
		return 1;
		break;
		
		case 'c':
		if (tablero[0][2] == NULL) 
		update(0, 2);
		return 1;
		break;	
		
		case 'd':
		if (tablero[1][0] == NULL)
		update(1, 0);
		return 1;
		break;
		
		case 'e':
		if (tablero[1][1] == NULL)
		update(1, 1);
		return 1;
		break;
		
		case 'f':
		if (tablero[1][2] == NULL)
		update(1, 2);
		return 1;
		break;
			
		case 'g':
		if (tablero[2][0] == NULL)
		update(2, 0);
		return 1;
		break;
			
		case 'h':
		if (tablero[2][1] == NULL)
		update(2, 1);
		return 1;
		break;
		
		case 'i':
		if (tablero[2][2] == NULL)
		update(2, 2);
		return 1;
		break;
		}	
	}			//If	
	
	return 0;
}

int verificarGanador()
{
	if (tablero[0][0] != NULL && tablero[0][0] == tablero[0][1] && tablero[0][0] == tablero[0][2])
		return 1;
	
	if (tablero[1][0] != NULL && tablero[1][0] == tablero[1][1] && tablero[1][0] == tablero[1][2])
		return 1;
	
	if (tablero[2][0] != NULL && tablero[2][0] == tablero[2][1] && tablero[2][0] == tablero[2][2])
		return 1;
		
	if (tablero[0][0] != NULL && tablero[0][0] == tablero[1][0] && tablero[0][0] == tablero[2][0])
		return 1;
		
	if (tablero[0][1] != NULL && tablero[0][1] == tablero[1][1] && tablero[0][1] == tablero[2][1])
		return 1;
		
	if (tablero[0][2] != NULL && tablero[0][2] == tablero[1][2] && tablero[0][2] == tablero[2][2])
		return 1;
		
	if (tablero[0][0] != NULL && tablero[0][0] == tablero[1][1] && tablero[0][0] == tablero[2][2])
		return 1;
		
	if (tablero[0][2] != NULL && tablero[0][2] == tablero[1][1] && tablero[0][2] == tablero[2][0])
		return 1;
}


void identificarGanador(int turnoanterior)
{
	printTablero();
	if(turno%2==0)
		cout<<"FELICIDADES!, "<<jugador1<<" ha ganado."<<endl;
	if(turno%2==1)
		cout<<"FELICIDADES!, "<<jugador2<<" ha ganado."<<endl<<endl;
}



int main()
{	

volverajugar:
	
	system("cls");
	cout<<"Jugador 1, introduce tu nombre: ";
	cin>>jugador1;
	cout<<"Jugador 2, introduce tu nombre: ";
	cin>>jugador2;

	int numeroTurno = 0;
	int jugadaValida = 0;
	int banderaGanador = 0;
	
	while(numeroTurno<9 && banderaGanador == 0)
	{
		system("cls");
		printTablero();	
		jugadaValida=registrarJugada(Jugadas());
		cout<<endl;
		
		if(jugadaValida==1)
		{
			banderaGanador=verificarGanador();
			numeroTurno++;
		}
	else
	{
		cout<<"Selecciona una jugada disponible!\n"<<endl;
		system("pause");
	}
	}

if(banderaGanador==1)
	system("cls");
	identificarGanador(numeroTurno-1);	
	
	cout<<"Quieres volver a jugar?"<<endl<<"Si--->1\nNo--->0"<<endl;
	cin>>off;
	if(off=true)
		goto volverajugar;
	
	
}



