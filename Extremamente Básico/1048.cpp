#include <stdlib.h>
#include <iostream>

using namespace std;

int reajuste(double sal);

int main() {

	double salario;
	int percent;

	cin >> salario;

	percent = reajuste(salario);

	cout.precision(2);
	cout << "Novo salario: " << fixed << salario + salario * percent/100 << endl;
	cout << "Reajuste ganho: " << fixed << salario * percent/100 << endl;
	cout << "Em percentual: " << percent << " %" << endl;

	return 0;
}

int reajuste(double sal) {
	if (sal < 400.01)
		return 15;

	if (sal < 800.01)
		return 12;

	if (sal < 1200.01)
		return 10;

	if (sal < 2000.01)
		return 7;

	return 4;
}