#include <iostream>
#include <list>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string *Palabras = new string[256];
	string Palabras2;
	int i, j, iAux;
	string sAux;

	list<string> *ListaAnagramas = new list<string>[13];

	ifstream Archivo;

	Archivo.open("Anogramas.txt", ios::in);

	if (Archivo.fail())
	{
		cout << "No se puede abrir el archivo";
		exit(1);
	}

	while (!Archivo.eof())
	{
		for (int i = 0; i <= 13; ++i)
		{
			getline(Archivo, Palabras[i], '\n');
		}

	}

	for (i = 0; i < 14; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux;
			}
		}
	}

	for (i = 0; i < 13; i++)
	{
		cout << Palabras[i] << "\n";
	}

	Archivo.close();

	delete[] Palabras;
	cin.ignore();
	cin.get();
	return 0;
}