#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[9],i,soma=0,quant=0,mult3=0,mult2=0,soma_mult3=0,quant_mult2=0;
	float Media;
	for(i=0;i<=9;i++)
	{
	printf("Digite o %d numero:\n",i);
	scanf("%i",&vetor[i]);
	}
	for(i=0;i<=9;i++)
	{
		soma+=vetor[i];
		quant++;
		if( (vetor[i] % 2) == 0)
		{
			mult2++;
			quant_mult2++;
		}
		if(vetor[i] % 3 ==0)
		{
			mult3++;
			soma_mult3+=vetor[i];
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("\n [%i]",vetor[i]);
	}
	Media=soma/quant;
	
	printf("\n A Media dos numeros digitados e:\n %f",Media);
	printf("\n Os numeros multiplos de 2 sao:\n %i",mult2);
	printf("\n Os numeros multiplos de 3 sao:\n %i",mult3);
	printf("\n A soma dos numeros multiplos de 3 sao:\n %i",soma_mult3);
	printf("\n A quantidade de numeros muiltiplos de 2 sao:\n %i",quant_mult2);
	getchar();
	return 0;
}
