void ingresarValor()
	{
		cout << "Quieres ingresar un valor al vector ? " << endl;
		cout << "SI >>> presiona 1" << endl;
		cout << "NO >>> presiona 0" << endl;
			fflush(stdin);
		cin >> shutdown;
	}
	
void mostrarValores()
{
	for(int i=0; i<size; i++)
	{
		cout <<"["<<i+1<<"]: "<< vector1[i] << endl;
	}
}

void llenarVector()
{
	srand(time(0));
	for(i=0; i<size; i++)
	{
			vector1[i] = 1 + rand() %199;
			cout <<"["<<i+1<<"]: "<< vector1[i] << endl;
	}
}


