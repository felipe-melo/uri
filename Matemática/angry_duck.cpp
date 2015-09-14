#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159
#define G  9.80665

int main(){

	double h, a, v, x, tempo;
	int p1, p2, n;

	scanf("%lf", &h);
	scanf("%d %d", &p1, &p1);
	scanf("%d", &n);

	while (scanf("%lf %lf", &a, &v) > 0){

		tempo = sqrt(2 * h / G);

		x = v * cos(a) * tempo;
		
		if (x >= p1 && x <= p2){
			printf("%.5lf -> DUCK\n", x);
		}else{
			printf("%.5lf -> NUCK\n", x);
		}
	}

	return 0;
}