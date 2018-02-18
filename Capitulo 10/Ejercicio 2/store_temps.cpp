#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <fstream>

using namespace std;

struct Lectura
{
	int iHora;
	double dTemperatura;
};

int main()
{
	vector <Lectura> vTemps;
	string sDato;

	ofstream Archivo;

	Archivo.open("raw_temps.txt.", ios::out);

	if (Archivo.fail())
	{
		cout << "No se puedo abrir el archivo";
		exit(1);
	}

	for (int i = 0; i < 50; ++i)
	{

		cout << "Escribe la hora y temperatura: ";
		getline(cin, sDato);

		Archivo << sDato << endl;
	}

	Archivo.close();

	return 0;
}