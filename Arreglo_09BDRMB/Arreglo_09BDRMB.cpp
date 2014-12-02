// Arreglo_09BDRMB.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
//Funciona.
using namespace std;
int main()
{
	int x, y, z ,cont;
	x = 0;
	y = 1;
	printf("0\n1\n", 2);
	for (cont = 1; cont <= 20; cont = cont++)
	{
		z = x + y;
		printf("%d\n", z);
		x = y;
		y = z;
	}
	system("Pause");
	return 0;
}

