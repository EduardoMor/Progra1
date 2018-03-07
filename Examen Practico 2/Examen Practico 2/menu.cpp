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
			getline(Archivo, Palabras[i], '\n');
		}

	}

	Archivo.close();
	//-----------------------------------------------------------------------------------------------------------------------------------------------------
	
	/*for (i = 0; i < 5; ++i)
	{
		Sujeto[i] = Palabras[i];
	}

	for (i = 5; i < 10; ++i)
	{
		Adjetivo[i] = Palabras[i];
	}

	for (i = 10; i < 15; ++i)
	{
		Verbo[i] = Palabras[i];
	}

	for (i = 15; i < 20; ++i)
	{
		Advervio[i] = Palabras[i];
	}

	for (i = 20; i < 25; ++i)
	{
		Preposicion[i] = Palabras[i];
	}

	for (i = 25; i < 30; ++i)
	{
		Sustantivo[i] = Palabras[i];
	}

	for (i = 5; i < 10; ++i)
	{
		for (j = 0; i < 5; ++i)
		{
			Adjetivo[j] = Adjetivo[i];
		}
	}

	srand(time(0));
	for (i = 0; i <= 7; ++i)
	{
		cout << Sujeto[1 + (rand() % 4)] << " " << Adjetivo[1 + (rand() % 4)] << " " << Verbo[1 + (rand() % 6)] << " " << Advervio[1 + (rand() % 6)] << " " << Preposicion[1 + (rand() % 6)] << " " << Sustantivo[1 + (rand() % 6)] << endl;
	}*/

	
	ofstream Archivo2;

	Archivo2.open("Oraciones_Terminadas.txt", ios::out);

	if (Archivo2.fail())
	{
		cout << "No se puede abrir el archivo";
		exit(1);
	}

	/*for (i = 0; i < 5; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}

	Archivo2 << endl << endl;


	for (i = 5; i < 10; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}

	Archivo2 << endl << endl;

	for (i = 10; i < 15; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}

	Archivo2 << endl << endl;

	for (i = 15; i < 20; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}

	Archivo2 << endl << endl;


	for (i = 20; i < 25; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}

	Archivo2 << endl << endl;

	for (i = 25; i < 30; i++)
	{
		Archivo2 << Palabras[i] << " ";
	}*/

	//Profe perdon por no terminarlo como queria pero esta fue la unica opcion que se me ocurrio, trate de hacerlo, igual atras todo en comentarios esta lo que hice o trate de hacer.
	Archivo2 << Palabras[2] << " " << Palabras[19] << " " << Palabras[13] << " " << Palabras[28] << " " << Palabras[9] << endl;

	Archivo2 << Palabras[0] << " " << Palabras[8] << " " << Palabras[7] << endl;

	Archivo2 << Palabras[10] << " " << Palabras[12] << " " << Palabras[25] << " " << Palabras[3] << endl;
	
	Archivo2 << Palabras[4] << " " << Palabras[18] << " " << Palabras[14] << endl;
	
	Archivo2 << Palabras[1] << " " << Palabras[11] << " " << Palabras[21] << " " << Palabras[26] << endl;
	
	Archivo2 << Palabras[20] << " " << Palabras[22] << " " << Palabras[29] << endl;
	
	Archivo2 << Palabras[5] << " " << Palabras[27] << " " << Palabras[6] << endl;
	
	Archivo2 << Palabras[15] << " " << Palabras[16] << " " << Palabras[24] << " " << Palabras[17] << Palabras[23] << endl;

	Archivo2.close();

	delete[] Palabras;
	cin.ignore();
	cin.get();
	return 0;
}