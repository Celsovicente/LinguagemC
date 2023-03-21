#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[5];
	for(int i=0;i<5;i++)
	{
		printf("Digite o [%i] valor do Vetor:",i);
		scanf("%i",&vetor[i]);
	}
	for(int i=vetor[i];i>0;i--)
	{
		printf("[%i]\n",vetor[i]);
	}
	getchar();
	return 0;
}
