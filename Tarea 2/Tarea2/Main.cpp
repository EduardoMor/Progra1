#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void iCalculo(int iAncho, int iAltura, int &iResultadoArea, int &iResultadoPerimetro2);


int main()
{
	int iAncho;
	int iAltura;
	int iResultadoArea = 0;
	int iResultadoPerimetro2 = 0;

	cout << "Ingrese las medidas del ancho de un rectangulo: ";
	cin >> iAncho;
	cout << "Ingrese las medidas de la altura de un rectangulo: ";
	cin >> iAltura;

	iCalculo(iAncho, iAltura, iResultadoArea, iResultadoPerimetro2);

	cout << "El area del rectangulo es: " << iResultadoArea << endl;
	cout << "El perimetro del rectangulo es: " << iResultadoPerimetro2 << endl;

	cin.ignore();
	cin.get();

	return 0;
}

void iCalculo(int iAncho, int iAltura, int &iResultadoArea, int &iResultadoPerimetro2)
{
	int iResultadoPerimetro1;
	
	iResultadoArea = iAltura * iAncho;
	iResultadoPerimetro1 = iAltura + iAncho;
	iResultadoPerimetro2 = iResultadoPerimetro1 * 2;
	
}

