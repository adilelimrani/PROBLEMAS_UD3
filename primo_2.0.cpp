#include <iostream>
using namespace std;

int primo (int numero) {

	int contador = 0;
	bool salida = false;

	for (int i=1 ; i<=numero ; i++) {
		if (numero%i==0) {
			contador++;
		}
	}
	if (contador==2) {
		salida=true;
	}
	return salida;
}
int main() {

	int numero=0;
	bool resultado;
	
	while (numero != -1) {
		cout <<"Introtuzca el número: "<< endl;
		cin >> numero;

		resultado=primo(numero);

		if (resultado==true) {
			cout << "Es primo."<<endl;
		}
		else
			cout << "No es primo."<<endl;
	}
	return 0;
}
