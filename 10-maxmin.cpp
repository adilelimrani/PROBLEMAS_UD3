#include <iostream>
using namespace std;

void maxmin (int &maximo , int &minimo ) {

	int numero=0;

	for (int i=1 ; i<=10 ; i++) {

		cout <<"introduzca numero: ";
		cin >> numero;
		if (numero>maximo) {
			maximo=numero;
		}
		if (numero<minimo) {
			minimo=numero;
		}
	}
}
int main() {

	int maximo=0,minimo=0;
	int resultado;

	maxmin(maximo,minimo);

	cout << "el maximo es: " << maximo << endl;
	cout << "el minimo es: " << minimo << endl;
	return 0;

}
