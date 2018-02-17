#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Point
{
	int iX;
	int iY;
};
istream& operator>>(istream& is, Point& r) 
{
char ch1;          
if (is >> ch1 && ch1 != '(') {   
	// could it be a Reading?                   
	is.unget();                 
	is.clear(ios_base::failbit);              
	return is;          }
	char ch2;        
	int d;      
	int h;       
	double t;     
	is >> d >> h >> t >> ch2;   
	if (!is || ch2 != ')') cout << ("bad reading");
	// messed-up reading         
	r.iX = d;         
	r.iY = h;               
	return is; 
}

int main()
{
	vector<Point> original_points(7);

	for (int i = 0; i < 7; i++)
	{
		cout << "Escribe x: ";
		cin >> original_points[i].iX;

		cout << "Excribe y: ";
		cin >> original_points[i].iY;
	}

	ofstream Archivo;

	Archivo.open("mydata.txt", ios::out);

	if (Archivo.fail())
	{
		cout << "No se puedo abrir el archivo";
		exit(1);
	}

	for (int i = 0; i < 7; i++)
	{
		Archivo << original_points[i].iX << endl;
		Archivo << original_points[i].iY << endl;
	}

	Archivo.close();

	vector<Point> processed_points(7);

	ifstream Archivo2;

	Archivo2.open("mydata.txt", ios::in);

	if (Archivo2.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	while (!Archivo2.eof())
	{
		string temp;
		for (int i = 0; i < 7; i++)
		{
			std::getline (Archivo2, temp);
			processed_points[i].iX = 2GFA;
			Archivo2, processed_points[i].iY;
		}
	}

	Archivo2.close();

	for (int i = 0; i < 7; i++)
	{
		cout << processed_points[i].iX << " ";
		cout << processed_points[i].iY << endl;
	}




	cin.ignore();
	cin.get();
	return 0;
}