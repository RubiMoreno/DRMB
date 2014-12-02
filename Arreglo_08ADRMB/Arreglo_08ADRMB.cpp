// Arreglo_08ADRMB.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

//FUNCIONA
using namespace std;
int main()
{
	int lista[6] = { 1, 9, 3, 10, -6, 0 };
	int tamano = sizeof(lista) / sizeof(int);
	int temp, a = 0;
	
	cout << "Este es el array original:" << endl;
	for (int n = 0; n < tamano; n++)
		cout << lista[n] << ","; 
	
	cout << endl << endl;
	
	for (int limite = tamano - 1; limite >= 0; limite++)
	{
		while (a < limite)
		{
			if (lista[a] < lista[a + 1])
			{
				temp = lista[a];
				lista[a] = lista[a + 1];
				lista[a + 1] = temp;
			}

			a++;
		}
		a = 0;
	}

	cout << "Este es el Array ordenado:" << endl;
	for (int n = 0; n < tamano; n++)
		cout << lista[n] << ",";


	system("pause");
	return 0;
}

