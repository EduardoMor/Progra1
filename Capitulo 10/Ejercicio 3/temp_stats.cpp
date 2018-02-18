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

	Lectura()
	{
		iHora = 0;
		dTemperatura = 0;
	}
	Lectura(int iH, double dT)
	{
		iHora = iH, dTemperatura = dT;
	}
	~Lectura() {};
};

istream& operator>> (istream& is, Lectura& r)
{
	int iHora;
	double dTemperatura;

	is >> iHora >> dTemperatura;
	if (!is) return is;
	r = Lectura(iHora, dTemperatura);
	return is;
}

void LecturadeArchivo(vector<Lectura> &Lec);

int main()
{
	vector <Lectura> vTemps;
	string sDato;
	double dMedia;
	double dSuma = 0.0;
	double dPromedio = 0.0;

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

	LecturadeArchivo(vTemps);

	dMedia = vTemps[vTemps.size() / 2].dTemperatura;

	for (int i = 0; i < vTemps.size(); ++i)
	{
		dSuma += vTemps[i].dTemperatura;
	}

	dPromedio = dSuma / vTemps.size();

	cout << "\nLa media de la temperatura es: " << dMedia << endl;

	cout << "El promedio de la temperatura: " << dPromedio;

	cin.ignore();
	cin.get();
	return 0;
}

void LecturadeArchivo(vector<Lectura> &Lec)
{
	ifstream Archivo;

	Archivo.open("raw_temps.txt.", ios::in);

	if (Archivo.fail())
	{
		cout << "No se puedo abrir el archivo";
		exit(1);
	}

	Lectura R;

	while (Archivo >> R)
	{
		Lec.push_back(R);
	}

	Archivo.close();
}