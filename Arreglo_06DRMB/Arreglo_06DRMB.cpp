// Arreglo_06DRMB.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
//FUNCIONA
using namespace std;
int main()
{
	int A[5];
	int j, n = 5;
	cout << "Arreglo original" << endl;
	for (j = 0; j < 5; j++)
	{
		A[j] = n++;
		cout << A[j] << endl;
	}

	cout << "La copia del arreglo" << endl;

	for (j = 0; j < 5; j++)
	{
		int *p = &A[j];
		cout << *p << endl;
	}

	system("Pause");

	return 0;
}

