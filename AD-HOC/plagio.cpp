#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Nota {
    char nota[2];
} Nota;

int distance(char original[2], char plagio[2]);

int main(){

	int M, T, dis;

	Nota *musica;
	Nota *trecho;

	scanf("%d %d", &M, &T);

	do{

		musica = (Nota*) malloc(sizeof(Nota) * M);
		trecho = (Nota*) malloc(sizeof(Nota) * T);

		for(int i = 0; i < M; i++)
			scanf("%s", (musica[i].nota));

		for(int i = 0; i < T; i++)
			scanf("%s", (trecho[i].nota));

		dis = distance(musica[0].nota, trecho[0].nota);

		printf("%d\n", dis);

		scanf("%d %d", &M, &T);

	}while(M != 0 && T != 0);

	return 0;
}

int distance(char original[2], char plagio[2]){
	int nota1 = (original[0] - 'A' + 1) + original[0] - 'A';
	int nota2 = (plagio[0]   - 'A' + 1) + plagio[0]   - 'A';
	int aux = 0, dis;

	printf("%d %d\n", nota1, nota2);

	if (original[1] == 'b') nota1--;
	if (original[1] == '#') nota1++;
	if (plagio[1]   == 'b') nota2--;
	if (plagio[1]   == '#') nota2++;

	if ((original[0] <= 'B' || original[0] > 'E') && plagio[0] <= 'E' && plagio[0] > 'B') aux++;
	if ((original[0] <= 'E' && original[0] > 'B') && (plagio[0] > 'E' || plagio[0] <= 'B')) aux++;
	if (original[0] <= 'B' && plagio[0] > 'E') aux+=2;
	//if ((original[0] <= 'E' && original[0] > 'B') && (plagio[0] <= 'E' && plagio[0] > 'B') && original[0] > plagio[0]) aux+=2;
	//if ((original[0] > 'E' || original[0] <= 'B') && (plagio[0] > 'E' || plagio[0] <= 'B') && original[0] > plagio[0]) aux+=2;

	printf("%d\n", aux);

	dis = nota1 - nota2;

	if (dis > 1){  //Se a diferença é maior que 0 nota1 > nota2 (ou seja deu a volta nas notas)
		dis -= 12 + 2;  //deves-se subtrair da quantidade de notas e somar a última relação G-A
	}

	return abs(abs(dis) - aux);
}