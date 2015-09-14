#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int f1, f2, N, mmc, aux;

	scanf("%d", &N);

	for (int i = 0; i < N; i++){
	    scanf("%d %d", &f1, &f2);
	    
	    aux = f1 - f2;
	    
	    while(f1 != f2){
    		if(f1 > f2)
                f1 -= f2;
    		else
                f2 -= f1;
	    }
	    printf ("%d\n", f1);
	}
 
    return 0;
}