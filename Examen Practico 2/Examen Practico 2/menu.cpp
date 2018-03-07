#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string *Palabras = new string[256];
	int i, j;
	string sAux1, sAux2, sAux3, sAux4;

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
	//-----------------------------------------------------------------------------------------------------------------------------------------------------
	/*for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
	}

	for (i = 5; i < 10; i++)
	{
		for (j = 5; j < 9; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
	}

	for (i = 10; i < 15; i++)
	{
		for (j = 10; j < 14; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
	}

	for (i = 15; i < 20; i++)
	{
		for (j = 15; j < 19; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
	}

	for (i = 20; i < 25; i++)
	{
		for (j = 20; j < 24; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
	}

	for (i = 25; i < 30; i++)
	{
		for (j = 25; j < 29; j++)
		{
			if (Palabras[j] > Palabras[j + 1])
			{
				sAux1 = Palabras[j];
				Palabras[j] = Palabras[j + 1];
				Palabras[j + 1] = sAux1;
			}
		}
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

	Archivo2 << Palabras[2] << " " << Palabras[19] << " " << Palabras[13] << " " << Palabras[28] << " " << Palabras[9] << endl;

	Archivo2 << Palabras[0] << " " << Palabras[8] << " " << Palabras[7] << endl;

	Archivo2 << Palabras[10] << " " << Palabras[12] << " " << Palabras[25] << " " << Palabras[3] << endl;
	
	Archivo2 << Palabras[4] << " " << Palabras[18] << " " << Palabras[14] << endl;
	
	Archivo2 << Palabras[1] << " " << Palabras[11] << " " << Palabras[21] << " " << Palabras[26] << endl;
	
	Archivo2 << Palabras[20] << " " << Palabras[22] << " " << Palabras[29] << endl;
	
	Archivo2 << Palabras[5] << " " << Palabras[27] << " " << Palabras[6] << endl;
	
	Archivo2 << Palabras[15] << " " << Palabras[16] << " " << Palabras[24] << " " << Palabras[17] << Palabras[23] << endl;

	Archivo.close();
	Archivo2.close();

	delete[] Palabras;
	cin.ignore();
	cin.get();
	return 0;
}