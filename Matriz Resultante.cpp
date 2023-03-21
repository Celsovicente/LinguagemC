#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv [])
{
	int matriz[12][13],divisor=0,maior=0,matrizA[12][13];
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<13;j++)
		{
			matriz[i][j]=rand()%10;
		}
	}
	printf("A matriz gerada e:\n");
	for(int i=0;i<12;i++) 
	{
		for(int j=0;j<12;j++) 
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n\n");
	}
		for(int i=0;i<12;i++) 
		{
			maior=matriz[i][0];
			for(int j=0;j<12;j++) 
			{
				if(matriz[i][j] > maior )
				{
					maior=matriz[i][j];
				}
			}
		}
		printf("A matriz Resultante  e:\n");
		for(int i=0;i<12;i++) 
		{
			for(int j=0;j<12;j++) 
			{
				matrizA[i][j]=matriz[i][j]/maior;
				printf("[%d]",matriz[i][j]);
			}
			printf("\n\n");
		}
	return 0;
}
