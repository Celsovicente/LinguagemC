#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
    int vetorA[10],j=0,vetorB[9],vetorC[19],i1=0,j1=0,aux=0;
    int c=0,c1=1;
    for(int i=0;i<10;i++)
    {
    	printf("Entre com um Valor para o 1 Vetor:");
    	scanf("%i",&vetorA[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("Entre com um Valor para o 2 Vetor:");
		scanf("%i",&vetorB[i]);
	}
	for(int i=0;i<20;i++)
	{
	   vetorC[c]=vetorA[i];
	   vetorC[c1]=vetorB[i];
	   printf("[%d]\n",vetorC[i]);	
	}
    
	for(int i=0;i<10;i++)
	{
		for(j1=0;j1<18;j1++)
		{
			if(vetorC[j1] < vetorC[j1+1])
			{
				aux=vetorC[j1];
				vetorC[j1]=vetorC[j1+1];
				vetorC[j1+1]=aux;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("\n [%i]",vetorC[i1]);
	}
	getchar();
	return 0;
}
