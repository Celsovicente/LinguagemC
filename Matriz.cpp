#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int matriz[3][4],i,j,cont,soma_par,quantidade_impar,soma,quantidade,maior,a;
	float Media,Percentagem_primo;
	system("Color 0b");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Entre com um numero para a Matriz:");
			scanf("%i",&matriz[i][j]);
	
			      cont=0;
			for(a=1;a<=matriz[i][j];a++)
			{
				if((matriz[i][j] % a) == 0)
				{
				cont++;	
				}
			 	if(cont == 2)
				{
					printf("\n O numero e Primo");
					quantidade++;
				}
				else
				{
				printf("\n O numero nao e primo");
				}
			soma+=matriz[i][j];
			if(matriz[i][j] % 2 == 0)
			{
				printf("\nO numero e par");
				soma_par+=matriz[i][j];
			}
			else
			{
				printf("\nO numero e impar\n");
				quantidade_impar++;
			}
			if(i==1 && j==1)
			{
				maior=matriz[i][j];
			}
			else if(matriz[i][j] > maior)
			{
				maior=matriz[i][j];
			}
			}
			}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	Media=soma/20;
	Percentagem_primo=(quantidade*100)/20;

	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A quantidade de numeros impares e:\n %i",quantidade_impar);
	printf("\n A media dos numeros e:\n %4.4f",Media);
	printf("\n A percentagem dos numeros Primos e:\n %f",Percentagem_primo);
	getchar();
	return 0;
}
