#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[5][5],i,j,soma=0,quant=0;
	float Media;
	system("Color 0b");
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf("Entre com um numero para a Matriz: ");
			scanf("%i",&matriz[i][j]);
		}
		printf("\n\n");
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			printf("[%i]",matriz[i][j]);
			if(i==j)
			{
			soma+=matriz[i][j];
			quant++;
			}
		}
		printf("\n\n");
	}
	Media=soma/quant;
	printf("\n A Media da Diagonal Principal e:\n %f",Media);
	getchar();
	return 0;
}
