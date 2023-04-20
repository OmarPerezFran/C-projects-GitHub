/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 18/04/2023
PROGRAMA: Actividad de programacion 16
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas

DESCRIPCION:
-Busca la historia de las torres de Hanoi y haz un resumen en el documento de word a entregar
-Realizar el juego de las Torres de Hanoi
-No necesita ser gráfico, puede ser textual
-Al menos debe tener 3 discos, con la posibilidad de agregar más, máximo 7
-Debe contabilizar los movimientos y verificar si lo hizo en el tiempo y movimientos adecuados.
-Utiliza recursividad
-Analiza los programas que te dan la pauta del número de movimientos óptimos para ganar las torres
*/


#include <conio.h>
#include <iostream>
using namespace std;


bool off=0;
int  i, j, nivel=2, discos=0, vectorA[2], vectorB[2], vectorC[2], cambio;   //Valores aleatorios de tamaño del vector, para evitar la asignacion de variables dependientes
char modulo, moverDisco;

void printTablero()
{	

	
		
}



int main()
{
	
	cout<<"Con cuantos discos quieres jugar? \n\nMIN: 3 \nMAX: 7\n"<<endl;
	cin>>nivel;
	int vectorA[nivel], vectorB[nivel], vectorC[nivel];
	
	vectorA[0]=1;
	for(i=0; i<nivel; i++)
	{
		vectorA[i]=vectorA[i-1]+1;
	}
	
	for(i=0; i<nivel; i++)
	{
	vectorB[i]=0;
	vectorC[i]=0;
	}
	

//	for(i=0; i<nivel; i++)
//	{
//		cout<<vectorA[i];
//	}
//	cout<<endl;
//	for(i=0; i<nivel; i++)
//	{
//		cout<<vectorB[i];
//	}
//	cout<<endl;
//	for(i=0; i<nivel; i++)
//	{
//		cout<<vectorC[i];
//	}
//	cout<<endl;
	
	cout<<endl;
//	system("cls");
	
	
	cout<<"  |     |     | "<<endl;
	for(j=0; j<nivel; j++)
	{	
		cout<<"  "<<vectorA[j]<<"     "<<vectorB[j]<<"     "<<vectorC[j]<<" "<<endl;
	}
	cout<<" ---   ---   ---"<<endl;	
	cout<<"  A     B     C "<<endl;
	
	////////////////////////////////////////////////////////////////// menu
	cout<<"Que disco quieres tomar? \n\n A \n B \n C"<<endl;
	cin>>modulo;
	if(modulo=='A' || modulo=='a')
	{
		cambio=vectorA[0];
		cout<<"A donde lo quieres mover?"<<endl;
		fflush(stdin);
		cin>>modulo;
		if(modulo=='B' || modulo=='b')
		{
			vectorB[nivel-1]=cambio;
			vectorA[0]=0;
		}
	}

	///////////////////////////////////////////////////////////////			fin menu	
		cout<<"  |     |     | "<<endl;
	for(j=0; j<nivel; j++)
	{	
		cout<<"  "<<vectorA[j]<<"     "<<vectorB[j]<<"     "<<vectorC[j]<<" "<<endl;
	}
	cout<<" ---   ---   ---"<<endl;	
	cout<<"  A     B     C "<<endl;
	

	
	
	
	
	return 0;
}
