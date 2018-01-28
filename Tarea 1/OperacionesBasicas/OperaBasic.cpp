#include <iostream>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int iSuma(int iA, int iB);
int iResta(int iA, int iB);
int iMultiplicacion(int iA, int iB);
int iDivision(int iA, int iB);
int iPotencia(int iA, int iB);
int iModulo(int iA, int iB);
int iMenu();

int main()
{
	int iOpcion = iMenu();
	switch (iOpcion)
	{
		case 1:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese un numero: ";
			cin >> iValor1;
			cout << "\nIngrese otro numero: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iSuma(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}

		case 2:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese un numero: ";
			cin >> iValor1;
			cout << "\nIngrese otro numero: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iResta(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}

		case 3:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese un numero: ";
			cin >> iValor1;
			cout << "\nIngrese otro numero: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iMultiplicacion(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}

		case 4:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese un numero: ";
			cin >> iValor1;
			cout << "\nIngrese otro numero: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iDivision(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}

		case 5:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese la base: ";
			cin >> iValor1;
			cout << "\nIngrese el exponente: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iPotencia(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}

		case 6:
		{
			int iValor1 = 0;
			int iValor2 = 0;

			cout << "Ingrese un numero: ";
			cin >> iValor1;
			cout << "\nIngrese otro numero: ";
			cin >> iValor2;

			cout << "\nEl resultado es: " << iModulo(iValor1, iValor2);

			cin.ignore();
			cin.get();

			break;
		}
	}
}

int iSuma(int iA, int iB)
{
	return (iA + iB);
}

int iResta(int iA, int iB)
{
	return (iA - iB);
}

int iMultiplicacion(int iA, int iB)
{
	return (iA * iB);
}

int iDivision(int iA, int iB)
{
	return (iA / iB);
}

int iPotencia(int iA, int iB)
{
	int iResultado = 0;
	return (iResultado = pow(iA, iB));


}

int iModulo(int iA, int iB)
{
	return (iA % iB);
}

int iMenu()
{
	int iOpcion;
	cout << "1) Suma" << endl;
	cout << "2) Resta" << endl;
	cout << "3) Multiplicacion" << endl;
	cout << "4) Division" << endl;
	cout << "5) Potencia" << endl;
	cout << "6) Modulo" << endl;

	cout << "\nIngrese la operacion que desea hacer: ";
	cin >> iOpcion;
	cout << "\n";

	if (iOpcion > 6 || iOpcion < 1)
	{
		main();
	}

	return iOpcion;
}