#include <iostream>
using namespace std;


int factorial (int n) {

	int valor=1;

	for (int i=2 ; i<=n ; i++) {
		valor *= i;
	}
	return valor;
}
int combinatorio (int a, int b) {
	return (factorial(a)/(factorial(b)*factorial(a-b)));
}
void imprimirfactorial (int n) {
	cout << "\nEl factorial de " << n << " es: "
		<< factorial(n) << endl;
}
int main () {
	int valor=0;
	cout << "Introducir numero entero positivo: " << endl;
	cin >> valor;

	imprimirfactorial (valor);

	cout << "combinatorio de " << valor << " sobre 2 es: "
	<< combinatorio(valor,2) << endl;
}
