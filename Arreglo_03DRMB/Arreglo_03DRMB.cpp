// Arreglo_03DRMB.cpp: define el punto de entrada de la aplicación de consola.
//


#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
//FUNCIONA
using namespace std;
int main()
{
	int vector[11] ,b = 0;

	for (int a = 4; a <= 14; a++)
	{
		vector[b] = a;
		cout << vector[b] << endl;
		b++;
	}
	system("Pause");
	return 0;
}

