#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[3][5],i,j,quantidade;
	for(i=0;i<3;i++)
	{
	for(j=0;j<=;j++)
	{
		printf("Digite o %d numero:\n",i,j);
		scanf("%i",&matriz[i][j]);
	}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(matriz[i][j]<=15 && matriz[i][j]<=20)
			{
				quantidade++;
			}
		}
		printf("\n\n");
	}
	printf("\n A quantidade de numeros e:\n %i",quantidade);
	getchar();
	return 0;
}
