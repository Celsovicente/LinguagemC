#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[2][2],maior=0,matriz1[2][2],i1=0,j1=0;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Entre com um Valor para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	{
		printf("[%i]",matriz[i][j]);
		if(matriz[i][j] == 0)
		{
			maior=matriz[i][j];
		}
		else if(maior < matriz[i][j])
		{
			maior=matriz[i][j];
		}
	}
	printf("\n\n");
   }
     printf("\n O maior valor da matriz e:\n %i",maior);
     printf("\n A nova Matriz e:\n");
   
  	for(int i=0;i<2;i++)
	{
	for(int j=0;j<2;j++)
	 {
		matriz1[i1][j1]=maior*matriz[i][j];
	    printf("[%d]",matriz1[i][j]);
	 }
	   printf("\n\n");
	}
	getchar();
	return 0;
}
