#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char** argv)
 {
    int matriz[6][6],vetor1[6],vetor2[6],maior,menor;
    for(int i=0;i<6;i++)
    {
    	for(int j=0;j<6;j++)
    	{
    		printf("Entre com um valor para a matriz:");
    		scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<6;i++)
	{
		maior=matriz[i][0];
		for(int j=0;j<6;j++)
		{
			if(maior > matriz[i][j])
			{
				maior=matriz[i][j];
			}
			vetor1[i]=maior;
		}
	}
	for(int i=0;i<6;i++)
	{
		menor=matriz[0][i];
		for(int j=0;j<6;j++)
		{
	        if(menor < matriz[i][j])
		    {
			menor=matriz[i][j];
			vetor2[i]=menor;
		    }
	    }
    }
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}

	for(int i=0;i<6;i++)
	{
		printf("\n [%i]",vetor1[i]);
	}
	for(int i=0;i<6;i++)
	{
	printf("\n [%i]",vetor2[i]);
    }
    getchar();
	return 0;
}
