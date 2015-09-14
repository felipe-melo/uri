#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

	double valor, imposto = 0;

	cin >> valor;

	if (valor == 2000.00){
		cout << "Isento\n";
		return 0;
	}

	if (valor >= 3000.00){
		imposto += ((valor - 2000) - (valor - 3000)) * 0.08 + (valor - 3000 > 0 ? valor - 3000 * 0.18 : 0);
	}

	if (valor >= 4500.00) {
		imposto += ((valor - 3000) - (valor - 4500)) * 0.18 +  + (valor - 4500 > 0 ? valor - 4500 * 0.28 : 0);
	}

	cout.precision(2);
	cout << "R$ " << fixed << imposto << endl;

	return 0;
}