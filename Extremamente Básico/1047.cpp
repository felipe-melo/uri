#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int hI, mI, hF, mF, h, m, minI, minF;

	cin  >> hI >> mI >> hF >> mF;

	minI = hI * 60 + mI;// 471
	minF = hF * 60 + mF;// 330

	if (minI < minF) {
		h = (minF - minI)/60;
		m = (minF - minI)%60;
	}else{
		minI = (24-hI) * 60 - mI;
		h = (minI + minF)/60;
		m = (minI + minF)%60;
	}

	if (h == 0 && m == 0){
		h = 24;
	}

	cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

	return 0;
}