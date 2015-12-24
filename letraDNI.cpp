#include <iostream>
using namespace std;

int main() {

	int numero_dni = 0 , resto = 0;

	do {
		cout << "Introduzca los 8 digitos del D.N.I: ";
		cin >> numero_dni;
	} while (numero_dni <=10000000 && numero_dni >=99999999);
	numero_dni%23 == resto;
	cout << resto << endl;
	if (resto ==0) {
		cout << "La letra del DNI es: T"<< endl;
	}
	if (resto ==1) {
		cout << "La letra del DNI es: R"<< endl;
	}
	if (resto ==2) {
		cout << "La letra del DNI es: W"<< endl;
	}
	if (resto ==3) {
		cout << "La letra del DNI es: A"<< endl;
	}
	if (resto ==4) {
		cout << "La letra del DNI es: G"<< endl;
	}
	if (resto ==5) {
		cout << "La letra del DNI es: M"<< endl;
	}
	if (resto ==6) {
		cout << "La letra del DNI es: Y"<< endl;
	}
	if (resto ==7) {
		cout << "La letra del DNI es: F"<< endl;
	}
	if (resto ==8) {
		cout << "La letra del DNI es: P"<< endl;
	}
	if (resto ==9) {
		cout << "La letra del DNI es: D"<< endl;
	}
	if (resto ==10) {
		cout << "La letra del DNI es: X"<< endl;
	}
	if (resto ==11) {
		cout << "La letra del DNI es: B"<< endl;
	}
	if (resto ==12) {
		cout << "La letra del DNI es: N"<< endl;
	}
	if (resto ==13) {
		cout << "La letra del DNI es: J"<< endl;
	}
	if (resto ==14) {
		cout << "La letra del DNI es: Z"<< endl;
	}
	if (resto ==15) {
		cout << "La letra del DNI es: S"<< endl;
	}
	if (resto ==16) {
		cout << "La letra del DNI es: Q"<< endl;
	}
	if (resto ==17) {
		cout << "La letra del DNI es: V"<< endl;
	}
	if (resto ==18) {
		cout << "La letra del DNI es: H"<< endl;
	}
	if (resto ==19) {
		cout << "La letra del DNI es: L"<< endl;
	}
	if (resto ==20) {
		cout << "La letra del DNI es: C"<< endl;
	}
	if (resto ==21) {
		cout << "La letra del DNI es: K"<< endl;
	}
	if (resto ==22) {
		cout << "La letra del DNI es: E"<< endl;
	}
	return 0;
}
