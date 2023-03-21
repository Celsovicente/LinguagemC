#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[10],soma_par=0,quant_par=0,quant_impar=0;
	for(int i=0;i<10;i++)
	{
		printf("Digite o %d numero:",i);
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("[%d]\n",vetor[i]);
		if( vetor[i] % 2 == 0)
		{
			soma_par+=vetor[i];
			quant_par++;
		}
		else
		{
			quant_impar++;
		}
	}
	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A quantidade dos numeros pares e:\n %i",quant_par);
	printf("\n A quantidade dos numeros impares e:\n %i",quant_impar);
	getchar();
	return 0;
}
