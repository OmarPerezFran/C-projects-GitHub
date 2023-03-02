/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 01/03/2023
PROGRAMA: Actividad de programacion 9
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Llenado, edición, vaciado y eliminación de matrices
Suma, resta, multiplicacion y division de matrices
*/



int columnas=12, filas=12;
int matriz1[12][12], matriz2[12][12], matriz3[12][12], i, j, opc, shutdown, shutdowndo = 1 ; 
const int n=12;

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Funciones Act - 9.cpp"


using namespace std;


int main()
{
	


cout<<"Llenado de matriz 1"<<endl;
llenarMatrices(matriz1);
cout<<endl<<"Llenado de matriz 2 \n"<<endl;
llenarMatrices(matriz2);



	
    do{ 
    
    cout<<endl;
    cout<<"Que desea hacer:"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    cin>>opc;
    cout<<endl;

    int matriz3[12][12];

    switch(opc){
	    case 1:
		    for(i=0; i<filas; i++)
			{
			    for(j=0; j<columnas; j++)
				{
				    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
				    cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;
			    }
		    } 
	    cout<<endl;  
    break;

	    case 2:
		    for(i=0; i<filas; i++)
			{
		   		for(j=0; j<columnas; j++)
				{
		   			matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
		    		cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;;
		    	}
		    }
	    cout<<endl;
    break;

   case 3:
		    for(i=0; i<filas; i++)
			{
		    	for(j=0; j<columnas; j++)
				{
					matriz3[i][j] = 0;
					for(int z=0; z<filas; z++)
						{
							matriz3[i][j] += matriz1[i][z] * matriz2[z][j];
							cout << "Valor en la posicion: " << "(" << i+1 << ")" << "(" << j+1 << "):" << matriz3[i][j] << endl;
						}
		    	}
		    }
	    cout<<endl;   
    break;
    
    case 4:
    	cout<<"Division \n\n Que matriz quieres que sea el numerador? \n Matriz 1: 1 \n Matriz 2: 2";
    	fflush(stdin);
    	cin >> opc;
    	if(opc==1)
    	{
		    for(i=0; i<filas; i++)
			{
		    	for(j=0; j<columnas; j++)
				{
					matriz3[i][j] = 0;
					for(int z=0; z<filas; z++)
						{
							matriz3[i][j] += matriz1[i][z] / matriz2[z][j];
							cout << "Valor en la posicion: " << "(" << i+1 << ")" << "(" << j+1 << "):" << matriz3[i][j] << endl;
						}
		    	}
		    }
		}
		
	    	if(opc==2)
    	{
		    for(i=0; i<filas; i++)
			{
		    	for(j=0; j<columnas; j++)
				{
					matriz3[i][j] = 0;
					for(int z=0; z<filas; z++)
						{
							matriz3[i][j] += matriz2[i][z] / matriz1[z][j];
							cout << "Valor en la posicion: " << "(" << i+1 << ")" << "(" << j+1 << "):" << matriz3[i][j] << endl;
						}
		    	}
		    }
		}
	    cout<<endl;   
    break;
    }			//FInSwitch
    
    cout << "Quieres editar, borrar o mostrar una matriz?" << endl;
    cout << "Editar: 1 \n Borrar: 2 \n Mostrar: 3" << endl;
    fflush(stdin);
    cin >> opc;
    
    
do{

    switch(opc)
    {
    	case 1:
    		cout << "Que matriz quieres editar?" << endl;
    		cout << "Matriz 1: 1 \n Matriz 2: 2" << endl;
    		fflush(stdin);
    		cin >> opc;
    		
    		if(opc == 1)
    		{
			    for(i=0;i<filas;i++)
			    {
			    	for(j=0;j<columnas;j++)
					{
					    cout <<"Matriz 1: Espacio: ("<<i+1<<"),"<<"("<<j+1<<")=";
					    cin >>matriz1[i][j];
				    }
			    }
			cout<<endl;
			}
			
			if(opc == 2)
    		{
				for(i=0;i<filas;i++)
				{
				    for(j=0;j<columnas;j++)
					{
					    cout <<"Matriz 2: Espacio: ("<<i+1<<"),"<<"("<<j+1<<")=";
					    cin>>matriz2[i][j];
				    }
				}
			cout<<endl;
			}
		break;
		
    	case 2:
    		cout << "Que matriz quieres borrar?" << endl;
    		cout << "Matriz 1: 1 \n Matriz 2: 2" << endl;
    		fflush(stdin);
    		cin >> opc;
    		if(opc == 1)
    		{
	    		for(i=0;i<filas;i++)
				    {
				    	for(j=0;j<columnas;j++)
						{
						    matriz1[i][j] = 0;
					    }
					}
			cout<<endl;
			}
			if(opc == 2)
    		{
				for(i=0;i<filas;i++)
				{
				    for(j=0;j<columnas;j++)
					{
					    matriz2[i][j] = 0;
				    }
				}
			cout<<endl;
			}
		break;
		
		case 3:
			cout<<"Matriz 1"<<endl;
			for(i=0;i<filas;i++)
				{
				    for(j=0;j<columnas;j++)
					{
					    cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz1[i][j]<<endl;
				    }
				}
				
			cout<<"Matriz 2"<<endl;
			for(i=0;i<filas;i++)
				{
				    for(j=0;j<columnas;j++)
					{
					    cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz2[i][j]<<endl;
				    }
				}
		
		
		break;
	}
   
    cout<<endl;	
	
	cout << "Quieres borrar o editar algun dato de alguna matriz? \n  Editar <<< 1 \n  Borrar <<< 2 \n Salir <<< 0" << endl;
	fflush(stdin);
	cin >> opc;
		
}while(shutdowndo != 0); 		//FInDoWhile


    cout<<endl;
    cout<<"Quieres vaciar y repetir el proceso?"<<endl;
    cout<<"1. SI"<<endl;
    cout<<"2. NO"<<endl;
    cin>>shutdown;
    cout<<endl;

   }while(shutdown==1);			//FinDoWhile
}		//FinMain
