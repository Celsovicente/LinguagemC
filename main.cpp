#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[6][6],aux=0;
	for(int  i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			matriz[i][j]=rand()%30;
		}
	}
	printf("A matriz gerada e:");
		for(int  i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n\n");
	}
		for(int  i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			aux=matriz[2][j];
			matriz[2][j]=matriz[i][4];
			matriz[i][4]=aux;
			if(i == j)
			{
				aux=matriz[i][j];
				matriz[i][j]=matriz[i][4];
				matriz[i][4]=aux;
			}
		}
	}
	printf("\n A nova matriz depois de efectuada as trocas e:\n");
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("[%d]",matriz[i][j]);
		}
			printf("\n\n");
	}
	return 0;
}
