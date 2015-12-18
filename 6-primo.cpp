#include <iostream>
using namespace std;

int primo (int numero) {

	int contador=0;
	bool salida=false;

	for (int i=1 ; i<=numero ; i++) {
		if (numero%i==0) {
			contador++;
		}
	}
	
	if (contador<=2) {
		salida=true;
	}
	else {
		salida=false;
	}

	return salida;
}

int main() {

	int numero=0;
	bool resultado;
	
	cout <<"introtuzca el numero que cree que es primo: "<< endl;
	cin >> numero;

	resultado=primo(resultado);

	if (resultado==true) {
		cout << "es primo."<<endl;
	}
	else if (resultado==false) {
		cout << "no es primo."<<endl;
	}
}
