#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string cidade;
	int a;

	cin >> a;

	if (a == 61)
		cidade = "Brasilia";
	else if (a == 71)
		cidade = "Salvador";
	else if (a == 11)
		cidade = "Sao Paulo";
	else if (a == 21)
		cidade = "Rio de Janeiro";
	else if (a == 32)
		cidade = "Juiz de Fora";
	else if (a == 19)
		cidade = "Campinas";
	else if (a == 27)
		cidade = "Vitoria";
	else if (a == 31)
		cidade = "Belo Horizonte";
	else
		cidade = "DDD nao cadastrado";

	cout << cidade << endl;

	return 0;
}