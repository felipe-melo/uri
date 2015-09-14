#include <stdio.h>
#include <stdlib.h>

long long fatorial(long num);

int main(){
	long n, m;
	unsigned long long int soma;

	while(scanf("%ld %ld", &n, &m) > 0 && !(n == 0 && m == 0)){
		soma = fatorial(n) + fatorial(m);
		printf("%lld\n", soma);
	}

	return 0;
}

long long fatorial(long num){
	if (num == 0) return 1;
	return num * fatorial(num - 1);
}