#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv[])
{
	float numero;
	printf("Digite um numero:\n");
	scanf("%f",&numero);
	printf("\n A raiz cubica e:\n %f",pow(numero,0.5));
	getchar();
	return 0;
}
