// Arreglo_09DRMB.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
//Funciona.
using namespace std;
int fibonacci(int n)
{
	if (n < 2)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num = 0, res = 0;
	printf("::NUMEROS DEFIBONACI::\n");
	printf("Introduce la cantidad de numeros:");
	scanf_s("%d", &num);
	printf("\t");
	for (int i = 0; i <= num - 1; i++)
	{
		res = fibonacci(i);
		printf("%i", res);
	}
	printf("n");
	system("pause");
	return 0;
}



