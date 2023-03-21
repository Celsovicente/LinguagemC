#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int vetor[17],matriz[2][5],linha=0,coluna=0;
	for(int i=0;i<=17;i++)
	{
		printf("Entre com um valor para o Vetor:");
		scanf("%i",&vetor[i]);
	}
	for(int i=0;i<=17;i++)
	{
		matriz[linha][coluna]=vetor[i];
		coluna;
		if(coluna > 5)
		{
			coluna++;
			linha=0;
		}
	}

	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=5;j++)
		{
			printf("[%i]",matriz[i][j]);
		}
		printf("\n\n");
	}
	getchar();
	return 0;
}
