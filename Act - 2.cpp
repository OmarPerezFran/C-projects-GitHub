/*          PRESENTACION
 NOMBRE: Omar Perez Franco
 FECHA: 26/01/2023
 PROGRAMA: Actividad de programacion 2
 CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
 INGENIERIAçA EN COMPUTACION / 2DO SEMESTRE
 PROFESOR: Sergio Franco Casillas
 DESCRIPCION: 6 caracteres de escape y 6 cadenas de control de tipos de salida
*/

#include <stdio.h>

int main()

{

//6 cadenas de control de tipos de salida

char name[100];
printf("Tu nombre?\n");
scanf("%s", name);			// Ingreso de un string
printf("%s", name);

int x =100;
scanf("%d", &x);			// Ingreso de enteros
printf("%d", x);

float suma1 = 12;
int suma2 = 18;						// Suma de entero y flotante; El resultado se vuelve flotante
printf("%f", suma1 + suma2);

float num2 = 12;
scanf("%e", &num2);			// Tipo float, devuelve el exponencial de un numero
printf("%e", num2);

int num1 = 12;
scanf("%d", &num1);			// Conversion de decimal a octal
printf("%o", num1);

int num1 = 12;
scanf("%o", &num1);			// Conversion de octal  a hexadecimal
printf("%x", num1);






//6 caracteres de escape
// \n, \t, \?,	avance de linea, tabulacion, signo de interrogacion, 
printf("\n\n Nombre\? \n \tOmar Perez Franco \n\n Carrera\? \n \tIngenieria en computacion \n Apodo\? \n");

//\",	comillas dobles
char apodo[25] = "\tEl chanclas \n\n";
printf("%s", apodo);

//\r, \v,	retorno de carro, tabulacion vertical

printf("1234 \v 5678\r9");


return 0;

}
