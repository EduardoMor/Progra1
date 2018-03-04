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

	list<string> *ListaAnagramas;

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



	Archivo.close();

	delete[] Palabras;
	cin.ignore();
	cin.get();
	return 0;
}