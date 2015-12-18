#include <iostream>
using namespace std;

int factorial(int n) {

	int i;
	int acu=1;

	for (i=2; i<=n; i++) {
		acu*= i;
	}
	return acu;
}

int main () {
	int dato;
	int valor;

	cout << "introducir un valor positivo: ";
	cin >> dato;

	valor = factorial (dato);

	cout << "el factorial de " << dato << " es: " << valor<< endl;

	return 0;
}
