#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[6],i,soma_pares,soma_impar,quant_par=0,quant_impar=0;
	for(i=0;i<6;i++)
	{
		printf("Entre com o valor pra o vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("[%d]\n",vetor[i]);
		if(vetor[i] % 2 == 0)
		{
			soma_pares+=vetor[i];
			quant_par++;
		}
		else
		{
			quant_impar++;
			soma_impar+=vetor[i];
		}
	}
	printf("\n A soma dos numeros pares e:\n %i",soma_pares);
	printf("\n A quantidade de numeros pares e:\n %i",quant_par);
	printf("\n A soma dos numeros impares e:\n %i",soma_impar);
	printf("\n A quantidade de numeros impares e:\n %i",quant_impar);
	getchar();
	return 0;
}
