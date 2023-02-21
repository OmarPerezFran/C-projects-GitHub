void func_menu()															//Menu
{
	cout << "____________________________ 		  " << endl;
	cout << "| Ingresar un dato         |        1" << endl;
	cout << "| Editar un dato           |        2" << endl;
	cout << "| Borrar un dato           |        3" << endl;
	cout << "| Vaciar un vector         |        4" << endl;
	cout << "| Mostrar datos            |   ->   5" << endl;
	cout << "| Union de vectores        |        6" << endl;
	cout << "| Interseccion de vectores |        7" << endl;
	cout << "| Diferencia               |        8" << endl;
	cout << "| Complemento              |        9" << endl;
	cout << "| Salir del programa       |        0" << endl;
	cout << "----------------------------         " << endl;
	fflush(stdin);
	cin >> opc;
}

void func_enterData()												//Ingreso de datos por parte del usuario
{
	cout << "	<<<Ingresar datos>>> \n\n En que vector quieres ingresar datos? \n Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	cin >> enter_data_vector;
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		cout << "Vector 1: Espacio" <<  opc <<  ": ";			 
		cin >> opc2;
		
		vector1[opc-1] = opc2;
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		cout << "Vector 2: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector2[opc-1] = opc2;
	}
}

void func_editData()																	//Edición de datos por parte del usuario
{
	cout << "<<<Editar datos>>>" << endl;
	cout << "Que vector quieres editar? \n Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;	
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres editar los datos?" << endl;		// Comienza a mostrar meramente la tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		cout << "Vector 1: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector1[opc-1] = opc2;
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres ingresar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		cout << "Vector 2: Espacio" <<  opc <<  ": ";
		cin >> opc2;
		
		vector2[opc-1] = opc2;
	}
}

void func_deleteData()
{
	cout << "<<<Borrar datos>>>" << endl;															//Borrado de datos
	cout << "Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;	
	if(enter_data_vector == 1)							//Vector 1
	{
		cout << "En que posicion quieres borrar los datos?" << endl;		// Comienza a mostrar meramente la tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector1[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 1
		
		vector1[opc-1] = "";
	}
	
	if(enter_data_vector == 2)											//Vector 2
	{
		cout << "En que posicion quieres borrar los datos?" << endl;		// Comienza tabla del vector con sus posiciones para que el usuario eliga
		for(i=0; i<2; i++)
		{
			cout << "|" << vector2[i] << "| ";
		}
		cout << endl;
		fflush(stdin);
		cin >> opc;					//Ingreso de posicion del vector 2
		
		vector1[opc-1] = "";
	}
}

void func_deleteVector()
{
	cout << "<<<Borrar vector>>>" << endl;															//vaciado de vectores
	cout << "Vector 1: Presiona 1 \n Vector 2: Presiona 2" << endl;
	fflush(stdin);
	cin >> enter_data_vector;
		
	if(enter_data_vector == 1)							//Vector 1
	{
		for(i=0; i<2; i++)
		{
			vector1[i] = "";
		}
	}
	
	if(enter_data_vector == 2)							//Vector 2
	{
		for(i=0; i<2; i++)			
		{
			vector2[i] = "";
		}
	}
}


void func_showData()
{
	cout << "<<<Mostrar datos>>>" << endl;
	

		cout << "Vector 1" << endl;
		for(i=0; i<2; i++)
		{
		cout << "|" << vector1[i] << "| ";
		}		
	cout << endl;


		cout << "Vector 2" << endl;
		for(i=0; i<2; i++)
		{
		cout << "|" << vector2[i] << "| ";
		}		
}

void func_MostrarVector1()
{
	for(i=0; i<2; i++)
	{
	cout << "|" << vector1[i] << "| ";
	}
}

void func_MostrarVector2()
{
	for(i=0; i<2; i++)
	{
	cout << "|" << vector2[i] << "| ";
	}
}

