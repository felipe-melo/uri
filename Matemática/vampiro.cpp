#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

double jogada(int ev1, int ev2, int at, int d);

int main(){

	int ev1, ev2, at, d;
	double prob;

	scanf("%d %d %d %d", &ev1, &ev2, &at, &d);
	
	while(ev1 != 0 && ev2 != 0 && at != 0 && d != 0){
		prob = jogada(ev1, ev2, at, d);
		printf("prob = %.6f\n", prob);
		scanf("%d %d %d %d", &ev1, &ev2, &at, &d);
	}

	return 0;
}

double jogada(int ev1, int ev2, int at, int d){

	double aux = 1.0;

	if (ev1 <= 0) return 1.0;
	if (ev2 <= 0) return at/6.0;
	
	if (ev1 - d > 0)
		aux *= jogada(ev1-d, ev2+d, at, d);
	
	return jogada(ev1+d, ev2-d, at, d) * aux;
}