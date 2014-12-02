// Arreglo_04DRMB.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
//FUNCIONA
using namespace std;
int main()
{
	int a[100];
	int n = 1, acum = 0;

	cout << "Los numero pares menos que 100:" << endl;
	for (int i = 0; i < 100; i++)
	{
		a[i] = n++;
		if (a[i] % 2 == 0)
		{
			cout << a[i] << endl;
		}
	}
	system("Pause");
	return 0;
}

