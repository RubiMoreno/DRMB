// Arreglo_08BDRMB.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
//Funciona
int v[100000], n;
int main()
{
	int valor_temporal;
	for (int q = 0; q < n - 1; q++)
	{
		for (int w = q + 1; w < n; w++)
		{
			if (v[w] < v[q])
			{
				valor_temporal = v[w];
				v[w] = v[q];
				v[q] = valor_temporal;
			}
		} 
	}

	for (int t = 0; t < n; t++)
	{ 
		printf("X + %d\n", v[t]);
	}
	system("pause");
	return 0;
}

