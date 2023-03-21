#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
 {
	int numero1,numero2;
	printf("Digite 2 numeros:\n");
	scanf("%i%i",&numero1,&numero2);
	printf("\n A soma e:\n %i + %i = %i",numero1,numero2,numero1+numero2);
	printf("\n O produto e:\n %i x %i = %i",numero1,numero2,numero1*numero2);
	printf("\n O quociente e:\n %i / %i = %f",numero1,numero2,numero1 / numero2);
	printf("\n A subtracao e:\n %i - %i = %i",numero1,numero2,numero1 - numero2);
	getchar();
	return 0;
}
