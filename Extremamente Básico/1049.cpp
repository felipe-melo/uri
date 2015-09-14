#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

	string a1, a2, a3, r;

	cin >> a1 >> a2 >> a3;

	if (a1 == "vertebrado") {
		if (a2 == "ave") {
			if (a3 == "carnivoro")
				r = "aguia";
			else
				r = "pomba";
		}else{
			if (a3 == "onivoro")
				r = "homem";
			else
				r = "vaca";
		}
	}else{
		if (a2 == "inseto") {
			if (a3 == "hematofago")
				r = "pulga";
			else
				r = "lagarta";
		}else{
			if (a3 == "hematofago")
				r = "sanguessuga";
			else
				r = "minhoca";
		}
	}

	cout << r << endl;

	return 0;
}