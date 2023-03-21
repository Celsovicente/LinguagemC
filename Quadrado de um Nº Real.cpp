#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc,char** argv)
{
	float num;
	int quadrado;
	printf("Digite um numero Real:\n");
	scanf("%f",&num);
	quadrado=pow(num,2);
	printf("\n O seu quadrado e:\n %i",quadrado);
	getchar();
	return 0;
}
