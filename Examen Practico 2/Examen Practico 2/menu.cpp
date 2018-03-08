#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string *Palabras = new string[256];
	int i, j;
	string sAux1, sAux2, sAux3, sAux4;
	string *Sujeto = new string[256];
	string *Adjetivo = new string[256];
	string *Verbo = new string[256];
	string *Advervio = new string[256];
	string *Preposicion = new string[256];
	string *Sustantivo = new string[256];

	ifstream Archivo;

	Archivo.open("oraciones_examen_practico_parcial2.txt", ios::in);

	if (Archivo.fail())
	{
		cout << "No se puede abrir el archivo";
		exit(1);
	}

	while (!Archivo.eof())
	{
		for (int i = 0; i <= 30; ++i)
		{
			getline(Archivo, Palabras[i]);
		}

	}

	Archivo.close();
	//-----------------------------------------------------------------------------------------------------------------------------------------------------
	
	for (i = 0; i < 5; ++i)
	{
		Sujeto[i] = Palabras[i];
	}

	j = 0;
	for (i = 5; i < 10; ++i)
	{
		Adjetivo[j] = Palabras[i];
		j++;
	}

	j = 0;
	for (i = 10; i < 15; ++i)
	{
		Verbo[j] = Palabras[i];
		j++;
	}

	j = 0;
	for (i = 15; i < 20; ++i)
	{
		Advervio[j] = Palabras[i];
		j++;
	}

	j = 0;
	for (i = 20; i < 25; ++i)
	{
		Preposicion[j] = Palabras[i];
		j++;
	}

	j = 0;
	for (i = 25; i < 30; ++i)
	{
		Sustantivo[j] = Palabras[i];
		j++;
	}

	ofstream Archivo2;

	Archivo2.open("Oraciones_Terminadas.txt", ios::out);

	if (Archivo2.fail())
	{
		cout << "No se puede abrir el archivo";
		exit(1);
	}

	srand(time(0));
	for (i = 0; i <= 7; ++i)
	{
		Archivo2 << Sujeto[(rand() % 5)] << " " << Adjetivo[(rand() % 5)] << " " << Verbo[(rand() % 5)] << " " << Advervio[(rand() % 5)] << " " << Preposicion[(rand() % 5)] << " " << Sustantivo[(rand() % 5)] << endl;
	}

	Archivo2.close();

	delete[] Palabras, Adjetivo, Sustantivo, Sujeto, Verbo, Preposicion, Advervio;
	cin.ignore();
	cin.get();
	return 0;

	//Profe ya lo termine se que fue despues pero quize terminar el programa por gusto personal.
}