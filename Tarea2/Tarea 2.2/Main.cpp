#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int iArreglo[5];
	int iContador1, iContador2, iAuxiliar;

	for ( iContador1 = 1; iContador1 <= 5; ++iContador1)
	{
		cout << "Ingrese el numero " << iContador1 << ": ";
		cin >> iArreglo[iContador1];
		cout << endl;

	}

	for (iContador1 = 1; iContador1 <= 5; iContador1++)
	{
		for (iContador2 = 1; iContador2 <= 4; iContador2++)
		{
			if (iArreglo[iContador2] > iArreglo[iContador2 + 1])
			{
				iAuxiliar = iArreglo[iContador2];
				iArreglo[iContador2] = iArreglo[iContador2 + 1];
				iArreglo[iContador2 + 1] = iAuxiliar;
			}
		}
	}

	cout << "Los numero ordenados de menor a mayor son: ";
	for (iContador1 = 1; iContador1 < 6; iContador1++)
	{
		cout << iArreglo[iContador1] << ", ";
	}
	

	cin.ignore();
	cin.get();

	return 0;
}