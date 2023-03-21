#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void ordenar (int vetor[5])
{
	int i,j,aux;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(vetor[j] > vetor[j+1])
			{
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
    }
    for(i=0;i<5;i++)
    {
    	printf("[%i]\n",vetor[i]);
	}
}
int main(int argc, char** argv) 
{
	int vetor[5],i;
	for(i=0;i<5;i++)
	{
		printf("Entre com um numero para o Vetor:");
		scanf("%i",&vetor[i]);
	}
  void ordenar(int vetor[5]);
	getchar();
	getche();
	return 0;
}
