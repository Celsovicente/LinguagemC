#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float matriz[3][3],n,i,j;
	printf("Digite um numero real\n");
	scanf("%f",&n);
	printf("A matriz gerada e:\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			matriz[i][j] = rand()%20;
			printf("[%f]",matriz[i][j]);
		}
		printf("\n\n");
	}
	
	printf ("A matriz resultante e: \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			matriz[i][j]*=n;
			printf("[%f]",matriz[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}


