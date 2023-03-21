#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int polegada;
	float centimetro=2.54;
	printf("Digite o valor da polegada:\n");
	scanf("%i",&polegada);
	printf("\n O valor em centimetro e:\n %d x %f = %f",polegada,centimetro,(polegada*centimetro));
	getchar();
	return 0;
}
