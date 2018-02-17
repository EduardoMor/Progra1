//https://stackoverflow.com/questions/3421817/splitting-int-from-a-string

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;

int main()
{
	string sSuma;
	string sSuma2;
	string Frase;
	char *Caracter;
	char *NextToken;
	int iToken;
	int iResultado = 0;

	ifstream Archivo;

	Archivo.open("Suma.txt", ios::in);

	if (Archivo.fail())
	{
		cout << "No se puedo abrir el archivo";
		exit(1);
	}

	while (!Archivo.eof())
	{
		getline(Archivo, sSuma);
		sSuma2 += " "+ sSuma;
	}

	istringstream Oa(sSuma2);

	while (Oa >> iToken)
	{
		iResultado += iToken;
	}
	cout << iResultado;

	Archivo.close();

	cin.ignore();
	cin.get();
	return 0;
}