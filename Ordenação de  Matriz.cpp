#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[5][5],aux=0;
	for(int i=0;i<5;i++) 
	{
		for(int j=0;j<5;j++) 
		{
			matriz[i][j]=1+rand()%100;
		}
	}
		printf("\n A matriz gerada e:\n");
	for(int i=0;i<5;i++) 
	{
		for(int j=0;j<5;j++) 
		{
			printf("[%d]",matriz[i][j]);
		}
		printf("\n\n");
	}
	for(int i=0;i<5;i++) 
	{
		for(int j=0;j<5;j++) 
		{
			for(int i1=0;i1<5;i1++) 
			{
				for(int j1=0;j1<5;j1++)
				 {
				 	if(matriz[i][j] < matriz[i1][j1])
				 	{
				 		aux=matriz[i1][j1];
				 		matriz[i1][j1]=matriz[i][j];
				 		matriz[i][j]=aux;
				 	}
				}
			}
		}
	}
	printf("\n A matriz ordenada de forma Crescente  e:\n");
	for(int i=0;i<5;i++) 
	{
		for(int j=0;j<5;j++) 
		{
			printf("[%d]",matriz[i][j]);
		}
			printf("\n\n");
	}
	getchar();
	return 0;
}
