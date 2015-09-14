#include <stdio.h>
#include <stdlib.h>

bool dividerBy(char *number, int divider);

int main(){

	int flag = 0;
	char year[1000];
	bool leap, huluculu, bulukulu;

	while(scanf("%s", year)){

		if (year[0] == 'E' && year[1] == 'O' && year[2] == 'F') return 0;

		if (flag++ > 0)
			printf("\n");

		leap = false; huluculu = false; bulukulu = false;

		/*if (dividerBy(year, 15)){
			printf("divider\n");
		}else{
			printf("not divider\n");
		}*/


		if (!dividerBy(year, 100) || dividerBy(year, 400) && dividerBy(year, 4)){
			leap = true;
			printf("This is leap year.\n");
		}
		if (dividerBy(year, 15)){
			huluculu = true;
			printf("This is huluculu festival year.\n");
		}
		if (dividerBy(year, 55) && leap){
			bulukulu = true;
			printf("This is bulukulu festival year.\n");
		}
		if (!leap && !huluculu && !bulukulu){
			printf("This is an ordinary year.\n");
		}
	}

	return 0;
}

bool dividerBy(char *number, int divider){
	int i = 0, digit, rest = 0, result = 0;

	while(number[i] != '\0'){
		
		digit = number[i++] - '0'; //converte o char na posição i para int
		
		rest = rest * 10 + digit;
		while (rest < divider && rest != 0 && number[i] != '\0'){
			digit = number[i++] - '0';
			rest = rest * 10 + digit;
		}
		if (rest >= divider){
			result = result *10 + rest/divider;
			rest = rest%divider;
		}
	}

	//printf("rest   = %d\n", rest);
	//printf("result = %d\n", result);

	if (rest == 0) return true;
	else return false;
}