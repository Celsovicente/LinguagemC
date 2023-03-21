#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[5][5],i,j,soma;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf("Entre com um valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(i+j==5-1)
			{
				soma+=matriz[i][j];
			}
		}
		printf("\n\n");
	}
	printf("\n A soma da Diagonal Secundaria e:\n %i",soma);
	getchar();
	return 0;
}
