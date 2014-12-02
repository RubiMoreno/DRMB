// Arreglo_05DRMB.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
	int x = 0, y = 0;
	int m[33];

	do{
		if (x % 3 == 0 && x != 100)
		{
			m[y++] = x;
		}
	} while (x + 1 < 100);
	
	for (y = 0; y < 33; y++)
	{
		cout << m[y] << endl;
	}

	system("pause");
	return 0;
}

