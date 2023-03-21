#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int matriz[6][6],soma=0;
	float Media=0;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("Entre com um valor para  Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("[%d]",matriz[i][j]);
		    if(i > j)
		    {
		    	soma+=matriz[i][j];
			}
		}
		printf("\n\n");
	}
	Media=soma/36;
	printf("\n A Media dos Numeros abaixo da Diagonal Principal e:\n %f",Media);
	getchar();
	return 0;
}
