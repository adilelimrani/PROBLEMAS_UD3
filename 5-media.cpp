#include <iostream>
using namespace std;

double media (double x1, double x2, double x3) {

	double resultado_media;

	resultado_media = (x1+x2+x3)/3.0;

	return resultado_media;
}

int main () {

	double resultado;
	double d1,d2,d3;

	cout << "introduzca los tres numeros para hacer la media: " <<endl;
	cin >> d1 >> d2 >> d3;

	resultado = media (d1,d2,d3);

	cout << "la media es: " << resultado << endl;
	return 0;
}
