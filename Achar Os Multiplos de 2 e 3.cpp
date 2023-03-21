#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv[])
{
	int vetor[7],i,multiplo2=0,multiplo3=0;
	for(i=0;i<7;i++)
	{
		printf("Digite um numero para o vetor:");
		scanf("%i",&vetor[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("[%i]\n",vetor[i]);
		if(vetor[i] % 2 == 0)
		{
			printf("O numero e multiplo de 2\n");
			multiplo2++;
		}
		if(vetor[i]%3==0)
		{
			printf("O numero e multiplo de 3\n");
			multiplo3++;
		}
	}
	printf("\n Os numeros multiplos de 2 sao:\n %i",multiplo2);
	printf("\n Os numeros multiplos de 3 sao:\n %i",multiplo3);
	getchar();
	return 0;
}
