#include <stdio.h>
#include <stdlib.h>

int main(){

	int R, pontosM = 0, pontosL = 0, *vet1, *vet2, primeira=0;
	int vetAuxM[3], vetAuxL[3], auxM = 0, auxL = 0;

	bool firstM = true, firstL = true;

	scanf("%d", &R);

	vetAuxM[0] = 0;
	vetAuxM[1] = 0;
	vetAuxM[2] = 0;
	vetAuxL[0] = 0;
	vetAuxL[1] = 0;
	vetAuxL[2] = 0;

	do {

		vet1 = (int*) malloc(sizeof(int) * R);
		vet2 = (int*) malloc(sizeof(int) * R);

		for (int i = 0; i < R; i++){
			scanf("%d", &vet1[i]);
		}

		for (int i = 0; i < R; i++){
			scanf("%d", &vet2[i]);
		}

		for (int i = 0; i < R; i++){
			pontosM += vet1[i];
			pontosL += vet2[i];

			if (firstM){
				vetAuxM[auxM++] = vet1[i];
				if (auxM == 2 && vetAuxM[0] != vetAuxM[1]){
					vetAuxM[0] = vetAuxM[1];
					auxM = 1;
				}else if (auxM == 3 && vetAuxM[1] != vetAuxM[2]){
					vetAuxM[0] = vetAuxM[2];
					auxM = 1;
				}else if (auxM == 3 && vetAuxM[0] == vetAuxM[1] && vetAuxM[1] == vetAuxM[2]){
					firstM = false;
					firstL = false;
					primeira = i;
					pontosM += 30;
				}
			}

			if (firstL){
				vetAuxL[auxL++] = vet2[i];
				if (auxL == 2 && vetAuxL[0] != vetAuxL[1]){
					vetAuxL[0] = vetAuxL[1];
					auxL = 1;
				}else if (auxL == 3 && vetAuxL[1] != vetAuxL[2]){
					vetAuxL[0] = vetAuxL[2];
					auxL = 1;
				}else if (auxL == 3 && vetAuxL[0] == vetAuxL[1] && vetAuxL[1] == vetAuxL[2]){
					firstL = false;
					firstM = false;
					pontosL += 30;
				}
			}else if (primeira == i){
				vetAuxL[auxL++] = vet2[i];
				if (auxL == 3 && vetAuxL[0] == vetAuxL[1] && vetAuxL[1] == vetAuxL[2]){
					pontosL += 30;
				}
			}
		}
		if (pontosM > pontosL){
			printf("M\n");
		}else if (pontosL > pontosM){
			printf("L\n");
		}else{
			printf("T\n");
		}
		scanf("%d", &R);
		pontosM = 0;
		pontosL = 0;
		auxM = 0;
		auxL = 0;
		firstL = true;
		firstM = true;
	}while(R != 0);

	return 0;
}