/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 07/02/2023
PROGRAMA: Actividad de programacion 6
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Llenado, edición, vaciado y eliminación de matrices
Suma, resta y multiplicacion d ematrices
*/


// Proceso de suma/resta: 1-1, 2-2, 3-3, 4-4...
//	Proceso de Multiplifacion: Primera fila-primera columna, primera fila-segunda columna, segunda fila-primera columna, segunda fila-segunda columna...


#include <iostream>
#include <stdio.h>
using namespace std;

int columnas1,filas1,filas2,columnas2,i,j,opc,shutdown, shutdowndo = 1; 

int main()
{
    do{ 
    cout<<endl;
    cout<<"Ingresa cuantas filas deben llevar las 2 matrices :	(Minimo 2)(Maximo 10)"<<endl;
    cin>>filas1;
    cout<<"Ingresa cuantas columnas deben llevar las 2 matrices :	(Minimo 2)(Maximo 10)"<<endl;
    cin>>columnas1;
    
    filas2=filas1;
    columnas2=columnas1;

    int matriz1[filas1][columnas1];
    for(i=0;i<filas1;i++)
    {
    for(j=0;j<columnas1;j++)
	{
    cout <<"Matriz 1: Espacio: ("<<i+1<<"),"<<"("<<j+1<<")=";
    cin >>matriz1[i][j];
    }
    }
    cout<<endl;

    int matriz2[filas2][columnas2];
    for(i=0;i<filas2;i++)
	{
		    for(j=0;j<columnas2;j++)
			{
			    cout <<"Matriz 2: Espacio: ("<<i+1<<"),"<<"("<<j+1<<")=";
			    cin>>matriz2[i][j];
		    }
	}
    cout<<endl;

    cout<<endl;
    cout<<"Que desea hacer:"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cin>>opc;
    cout<<endl;

    int matriz3[filas1][columnas1];

    switch(opc){
	    case 1:
		    for(i=0; i<filas1; i++)
			{
			    for(j=0; j<columnas1; j++)
				{
				    matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
				    cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;
			    }
		    } 
	    cout<<endl;  
    break;

	    case 2:
		    for(i=0; i<filas1; i++)
			{
		   		for(j=0; j<columnas1; j++)
				{
		   			matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
		    		cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;;
		    	}
		    }
	    cout<<endl;
    break;

    case 3:
		    for(i=0; i<filas1; i++)
			{
		    	for(j=0; j<columnas1; j++)
				{
		    		matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
		    		cout<<"Valor en la posicion: "<<"("<<i+1<<")"<<"("<<j+1<<"): "<<matriz3[i][j]<<endl;
		    	}
		    }
	    cout<<endl;   
	default:
    break;
    }			//FInSwitch
    
    cout << "Quieres editar o borrar una matriz?" << endl;
    cout << "Editar: 1 \n Borrar: 2" << endl;
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
			    for(i=0;i<filas1;i++)
			    {
			    	for(j=0;j<columnas1;j++)
					{
					    cout <<"Matriz 1: Espacio: ("<<i+1<<"),"<<"("<<j+1<<")=";
					    cin >>matriz1[i][j];
				    }
			    }
			cout<<endl;
			}
			
			if(opc == 2)
    		{
				for(i=0;i<filas2;i++)
				{
				    for(j=0;j<columnas2;j++)
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
	    		for(i=0;i<filas1;i++)
				    {
				    	for(j=0;j<columnas1;j++)
						{
						    matriz1[i][j] = 0;
					    }
					}
			cout<<endl;
			}
			if(opc == 2)
    		{
				for(i=0;i<filas2;i++)
				{
				    for(j=0;j<columnas2;j++)
					{
					    matriz2[i][j] = 0;
				    }
				}
			cout<<endl;
			}
		break;
	}
		
	cout << "Matriz resultante:" << endl;
	for(i=0;i<filas1;i++)
	{
	    for(j=0;j<columnas1;j++)
		{
		    cout << matriz3[i][j];
	    }
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
