#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float d,d2,d3;
	printf("Digite o valor da 1 distancia:\n");
	scanf("%f",&d);
    printf("Digite o valor da 2 distancia:\n");
	scanf("%f",&d2);
	printf("Digite o valor da 3 distancia:\n");
	scanf("%f",&d3);
	getchar();
	if(d > d2 && d > d3)
	{
		printf("\n O maior valor e da 1 distancia:\n %f",d);
	}
	else if(d2 > d3 && d2 > d)
	{
		printf("\n O maior valor e da 2 distancia:\n %i",d2);
	}
	else if(d3 > d2 && d2 > d)
	{
		printf("\n O maior valor e da 3 distancia:\n %f",d3);
	}
	getchar();
	return 0;
}
