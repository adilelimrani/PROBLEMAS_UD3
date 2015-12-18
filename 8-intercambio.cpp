#include <iostream>
using namespace std;

void swap (int &a ,int &b) {

	int aux=0;

	aux=a;
	a=b;
	b=aux;
}

int main () {

	int a=2 , b=3;

	cout << "el valor de 'a' antes de swap es: " << a << endl;
	cout << "el valor de 'b' antes de swap es: " << b << endl;

	swap(a,b);

	cout << "el valor de 'a' despues de swap es: " << a << endl;
	cout << "el valor de 'b' despues de swap es: " << b << endl;

	return 0;
}
