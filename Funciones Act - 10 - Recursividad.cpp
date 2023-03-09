#include <iostream>
using namespace std;

//void ingresarValor()
//	{
//		cout << "Quieres ingresar un valor al vector ? " << endl;
//		cout << "SI >>> presiona 1" << endl;
//		cout << "NO >>> presiona 0" << endl;
//			fflush(stdin);
//		cin >> shutdown;
//	}
	
//void mostrarValores()
//{
//	i=0;
//	if(i<size);
//	cout <<"["<<i+1<<"]: "<< vector1[i] << endl;
//	i++;
//}

int mostrarValores()
{
	if(i==size)
		return 0;
		
	if(i<=size)
	{
		cout <<"["<<i+1<<"]: "<< vector1[i] << endl;
		i++;
		return mostrarValores();
	}
}

//void llenarVector()
//{
//	srand(time(0));
//	for(i=0; i<size; i++)
//	{
//			vector1[i] = 1 + rand() %199;
//			cout <<"["<<i+1<<"]: "<< vector1[i] << endl;
//	}
//}

int main()
{
	
	mostrarValores(2);
	
	
	
	
	
}

