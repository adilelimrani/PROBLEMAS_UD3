#include <iostream>
#include <cmath>

using namespace std;

int cubo_numero (int num) {

	int cubo =0 , impar_inicial=0;

		impar_inicial=pow(num,2)-num+1; //formula del primer impar por el que empieza
		cubo = impar_inicial;
		cout << impar_inicial;

		for (int i=1 ;i<=num-1;i++) {
			impar_inicial= impar_inicial +2;
			cubo = cubo + impar_inicial;
			cout << " + " << impar_inicial;
		}
		cout << " = "<< cubo <<endl;
	return cubo;
}
int main () {

	int numero=0;

	cout << "vamos a calcular el cubo de un numero mediante"; 
	cout << " la formula de nicomano."<<endl;
	cout << "introducir numero: ";
	cin >> numero;
	cout << "el cubo de " << numero << " es: " << cubo_numero(numero) << endl;
	return 0;
}
