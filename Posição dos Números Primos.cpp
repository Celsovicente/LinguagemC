#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int vetor[9],cont,posicao_numero_primo;
	for(int i=0;i<9;i++)
	{
		printf("Digite um Numero para inicializar o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<9;i++)
	{
		cont=0;
		for(int j=1;j<=vetor[i];j++)
		{
			if(vetor[i] % j == 0)
			{
				cont++;
			}
			if(cont==2)
			{
				printf("\n O numero e primo\n");
			}
			else
			{
				printf("\n O Numero nao e primo\n");
			}
			posicao_numero_primo=i;
       }
	}
	for(int i=0;i<9;i++)
	{
	printf("[%d]\n",vetor[i]);
    }
	return 0;
}
