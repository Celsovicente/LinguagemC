#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int matriz[6][6],soma=0,menor;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("Entre com um numero para a Matriz:");
			scanf("%i",&matriz[i][j]);
		}
	}
		for(int i=0;i<6;i++)
	    {
		    for(int j=0;j<6;j++)
		   {
			printf("[%i]",matriz[i][j]);
			soma+=matriz[i][j];
			if(i+j == 5-1)
			{
				menor=matriz[i][j];
			}
			else if(matriz[i][j] < menor)
			{
				menor=matriz[i][j];
			}
	      }
	      printf("\n\n");
	}
	printf("\n A soma dos numeros da matriz e:\n %d",soma);
	printf("\n O menor valor da Diagonal Secundaria e:\n %d",menor);
	getchar();
	return 0;
}
