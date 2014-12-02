// Arreglo_07DRMB.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

//FUNCIONA
using namespace std;
int main()
{
	int const F = 3;
	int const C = 4;

	int matriz[F][C];
	int op = 1;
	cout << "Valores de la matriz" << endl << endl;
	
	for (int i = 0; i < F; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << "Ingrese el numero:";
			cin >> matriz[i][j];
		}
	}
	cout << endl;
	cout << "MATRIZ[m,n]" << endl;

	for (int i = 0; i < F; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cout << matriz[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	cout << "MATRIZ[n,m]" << endl;
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; i < F; j++)
		{
			cout << matriz[j][i] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	


	system("Pause");
	//for (int i = 0)
	return 0;
}

