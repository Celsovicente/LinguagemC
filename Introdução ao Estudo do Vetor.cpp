#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv[])
{
	int vetor[9],maior_numero,menor_numero;
	for(int i=0;i<9;i++)
	{
	printf("Digite o %d numero pra o vetor:",i);
	scanf("%i",&vetor[i]);
	}
	for(int i=0;i<9;i++)
	{
		printf("[%i]\n",vetor[i]);
		if(vetor[i]==0)
		{
			maior_numero=vetor[i];
			menor_numero=vetor[i];	
		}
		else if(vetor[i] > maior_numero)
		{
			maior_numero=vetor[i];
		}
		else if(vetor[i] < menor_numero)
		{
			menor_numero=vetor[i];
		}
	}
printf("\n O maior numero e:\n %i",maior_numero);
printf("\n O menor numero e:\n %i",menor_numero);
return 0;
}
