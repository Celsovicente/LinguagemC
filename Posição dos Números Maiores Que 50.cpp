#include<stdio.h>
#include<stdlib.h>
int main(int argc,char** argv[])
{
	int vetor[8],i,posicao,numero,quant;
	for(i=0;i<=8;i++)
	{
		printf("Digite um numero para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<=8;i++)
	{
		printf("[%d]\n",vetor[i]);
		if(vetor[i] > 50)
		{
			numero=vetor[i];
			posicao=i;
			quant++;
		}
	}
	printf("\n A quantidade de numeros maiores ou iguais a 50 e:\n %i",quant);
	printf("\n A posicao dos numeros maiores que 50 sao:\n %i",posicao);
	return 0;
}
