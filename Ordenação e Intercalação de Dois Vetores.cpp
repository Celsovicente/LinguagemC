#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor1[10],vetor2[10],vetor3[20],aux=0,j=0;
	for(int i=0;i<10;i++)
	{
	printf("Entre com um valor para o Vetor1:");
	scanf("%i",&vetor1[i]);
    }
    for(int i=0;i<10;i++)
	{
	for(j=0;j<9;j++)
	{
		if(vetor1[j] < vetor1[j++])
		{
			aux=vetor1[j];
			vetor1[j]=vetor1[j++];
			vetor1[j++]=aux;
	    }
    }
	}
	for(int i=0;i<10;i++)
	{
		printf("Entre com um valor para o Vetor2:");
		scanf("%i",&vetor2[i]);
    }
    for(int i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			if(vetor2[j] < vetor2[j++])
			{
				aux=vetor2[j];
				vetor2[j]=vetor2[j++];
				vetor2[j++]=aux;
		   }
	    }
	}
	for(int i=0;i<10;i++)
	{
		vetor3[j]=vetor1[i];
		j++;
		vetor3[j]=vetor2[i];
		j++;
	}
	for(int i=0;i<10;i++)
	{
	for(j=0;j<9;j++)
	{
	if(vetor3[j] < vetor3[j++])
	{
		aux=vetor3[j];
		vetor3[j]=vetor3[j++];
		vetor3[j++]=aux;
	}
	}	
    }
    for(int i=0;i<10;i++)
	{
		printf("[%i]\n",vetor1[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("[%i]\n",vetor2[i]);
	}
	for(int i=0;i<20;i++)
	{
	printf("[%i]\n",vetor3[i]);
    }
	return 0;
}
