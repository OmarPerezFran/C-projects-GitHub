#include <iostream>
using namespace std;


void llenarMatrices(int matriz[][n])
{
	srand(time(0));
	for(i=0; i<12; i++)
	{
		for(int j=0; j<12; j++)
		{
			matriz[i][j] = -200 + rand() %600;
			cout <<"["<<i+1<<"]["<<j+1<<"]:"<< matriz[i][j] << endl;
		}
	}
}

void MostrarMatriz3()
{
		cout << "Matriz resultante (3):" << endl;
	for(i=0;i<filas;i++)
	{
	    for(j=0;j<columnas;j++)
		{
		    cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;
	    }
   }
}
