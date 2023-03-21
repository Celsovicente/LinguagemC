#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int matriz[5][5],i,j,soma=0,soma_coluna=0,soma_diagonal_principal=0,soma_diagonal_secundaria=0,soma_matriz=0;
	
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		printf("Entre com o numero para a Matriz:");
		scanf("%i",&matriz[i][j]);
	}
	}
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		soma_matriz+=matriz[i][j];
		if(i==4)
		{
			soma+=matriz[i][j];
		}
		if(j==2)
		{
			soma_coluna+=matriz[i][j];
		}
		if(i==j)
		{
			soma_diagonal_principal+=matriz[i][j];
		}
		if(i+j==5-1)
		{
			soma_diagonal_secundaria+=matriz[i][j];
		}
		
	}
    }
    for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
		printf("[%i]",matriz[i][j]);
	}
	printf("\n\n");
    }
    printf("\n A soma e:\n %i",soma);
    printf("\n A soma da culuna 2 e:\n %i",soma_coluna);
    printf("\n A soma da diagonal principal e:\n %i",soma_diagonal_principal);
    printf("\n A soma da diagonal secundaria e:\n %i",soma_diagonal_secundaria);
    printf("\n A soma dos elementos da matriz e:\n %i",soma_matriz);
    getchar();
	return 0;
}
