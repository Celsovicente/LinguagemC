#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num1;
	float num2;
	printf("Digite um numero inteiro e um real:\n");
	scanf("%i%f",&num1,&num2);
	printf("\n O numero inteiro e:\n %i",num1);
	printf("\n O numero real e:\n %f",num2);
	getchar();
	return 0;
}
