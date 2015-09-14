#include <stdio.h>
#include <stdlib.h>

typedef struct People {
    int position;
    bool isAlive;
    struct People *next;
} People;

People *insert(People *list, int position);
People *startList();

int main(){

	int n, k, nc, quantLive;
	People *peoples;
	People *aux;

	scanf("%d", &nc);

	for (int i = 0; i < nc; i++){
		scanf("%d %d", &n, &k);

		if (k == 1){
			printf("Case %d: %d\n", i+1, n);
			continue;
		}

		aux = peoples = (People*) malloc(sizeof(People));
		peoples->position = 0;
		peoples->isAlive  = true;

		for (int i = 1; i < n; i++){
			peoples = insert(peoples, i);
		}

		peoples->next = aux;

		quantLive = n;

		while(quantLive > 1){
			for (int j = 0; j < k-2; j++){
				aux = aux->next;
			}
			aux->next = aux->next->next;
			aux = aux->next;
			quantLive--;
		}
		printf("Case %d: %d\n", i+1, aux->position+1);
	}

	return 0;
}

People *startList(){
	return NULL;
}

People *insert(People *list, int position){
	People *newPerson   = (People*) malloc(sizeof(People));
	newPerson->position = position;
	newPerson->isAlive  = true;
	list->next          = newPerson;
	return newPerson;
}