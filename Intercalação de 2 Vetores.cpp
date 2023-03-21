#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[10],vetor2[10],vetor3[20],c=0,c1=1;
	for(int i=0;i<10;i++)
	{
		printf("Entre com o [%d] valor do 1 vetor:",i);
		scanf("%i",&vetor[i]);
	}
		for(int i=0;i<10;i++)
	{
		printf("Entre com o [%d] valor do 2 vetor:",i);
		scanf("%i",&vetor2[i]);
	}
	for(int i=0;i<20;i++)
	{
		vetor3[c]=vetor[i];
		vetor3[c1]=vetor2[i];
		c+=2;
		c1+=2;
		printf("[%d]\n",vetor3[i]);
	}
	getchar();
	return 0;
}
