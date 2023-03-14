/*          PRESENTACION
NOMBRE: Omar Perez Franco
FECHA: 13/03/2023
PROGRAMA: Actividad de programacion 12
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION:
Retomada desde la actividad 5;
-Pedir al usario una palabra o frase
-Debe contar el numero de vocales, consonantes y espacios
-Convertir palabara o frase mayuscula a minuscula y viceversa
-Solicitar otra palabra o frase y que se concatene a la anterior
*/

#include <iostream>
using namespace std;

char frase[100], frase2[100];		
int size=100, j, cons,opc, mayus, chars=0, space, a , e, i, o, u;			//c=contador
int minusculas;

void ffrase()
{
	cout<<"Ingresa una frase cualquiera: ";
	gets(frase);
}

int main()
{
	
	
	ffrase();


//for(i=0; i<100; i++)
//cout<<frase[i];


for(j=0; j<size; j++)		
{
	if((frase[j]>=65 && frase[j]<=90) || (frase[j]>=97 && frase[j]<=122) || frase[j]==32)		//Contador de caracteres totales
		chars++;
	
	switch(frase[j])
	{									//Contador de consonantes
		case 66:    
        case 67:
        case 68:
        case 70:
        case 71:
        case 72:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 98:
        case 99:
        case 100:
        case 102:
        case 103:
        case 104:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:cons++;
    break;
	}

	if(frase[j]>=65 && frase[j]<=90)		//Contador de mayusculas
		mayus++;
	
	if(frase[j]>=97 && frase[j]<=122)		//Contador de minusculas
		minusculas++;
	
	switch(frase[j])						//Contador de vocales y espacios
	{
		case ' ':
			space++;
		break;
		case 'a': case 'A':
			a++; 
		break;
		case 'e': case 'E':
			e++; 
		break;
		case 'i': case 'I':
			i++; 
		break;
		case 'o': case 'O':
			o++; 
		break;
		case 'u': case 'U':
			u++; 
		break;
	}
}


cout<<"\nHay "<<chars<<" caracteres en total; de los cuales: \n\n";
cout<<mayus<<" Son mayusculas"<<endl;
cout<<minusculas<<" Son minusculas"<<endl;
cout<<cons<<" Son consonantes"<<endl;
cout<<a+e+i+o+u<<" Son vocales"<<endl;
cout<<space<<" Son espacios"<<endl;



while(true)
{

cout<<"\n---MENU---"<<endl;
cout<<"\n1. Convertir frase a mayusculas"<<endl<<"2. Convertir frase a minusculas"<<endl<<"3. Concatenar"<<endl<<"4. Ingresar otra frase"<<endl<<"0. Salir"<<endl;
cin>>opc;


	switch(opc)
	{
		case 1:
			for(i=0;i<size;i++)
	        	frase[i]=toupper(frase[i]);
	
	    	cout<<frase<<endl;
    	break;
    	
		case 2:
			for(i=0;i<size;i++)
	        	frase[i]=tolower(frase[i]);
	
	    	cout<<frase<<endl;
    	break;
    	
    	case 3:
    		cout<<"Ingresa otra frase para concatenarla a la primera"<<endl;
			cin>>frase2;
			cout<<frase<<" "<<frase2<<endl;
		break;
		
		case 4:
			ffrase();
			gets(frase);
		break;	
		
    	
    	case 0:
    		goto exit;
    	break;
    		
	}			//FinSwitch
}		//FinWhile

	exit:
		
	cout<<"Adios!";
	
}			//FinMain
