#include <stdio.h>
#include <stdlib.h>
void Divisao_dos_Elementos(int vetor[30])
{
	int vetorB[30],vetorA[30],j,i1;
	for(int i=0;i<30;i++)
	{
		if(vetor[i] > 0)
		{
			vetorA[i1]=vetor[i];
			i1++;
		}
		else if(vetor[i] <= 0)
		{
			vetorB[j]=vetor[i];
			j++;
		}
	}
	for(i1=0;i1<30;i1++)
	{
		printf("[%i]\n",vetorA[i1]);
	}
	for(j=0;j<30;j++)
	{
		printf("[%i]\n",vetorB[j]);
	}
}
int main(int argc, char** argv) 
{
	int vetor[30],i;
	for(i=0;i<30;i++)
	{
		printf("Entre com um Valor para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	void Divisao_dos_Elementos(int vetor[30]);
	getchar();
	return 0;
}
