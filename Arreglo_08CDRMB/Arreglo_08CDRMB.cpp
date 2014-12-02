// Arreglo_08CDRMB.cpp: define el punto de entrada de la aplicación de consola.
//


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
//Funciona

int main()
{
	int datos[] = { 5, 7, 9, 14, 4, 2, 1, 4, 65, 32, 11, 15, 74, 1, 1, 95, 20, 2, 10, 22 };
	int x, y, aux;
	cout << "Datos sin ordenar:" << endl;
	for (x = 0; x < 20; x++)
	{
		cout << datos[x] << ",";
	}
	cout << endl;
	for (x = 1; x <= 20; x++)
	{
		for (y = 0; y <= 18; y++)
		{
			if (datos[y] > datos[y + 1])
			{
				aux = datos[y];
				datos[y] = datos[y + 1];
				datos[y + 1] = aux;
			}
		}
	}
	cout << endl << endl << "Datos ordenados:" << endl;
	for (x = 0; x < 20; x++)
	{
		cout << datos[x] << ",";
	}
	cout << endl;
	system("pause");
	return 0;
}

