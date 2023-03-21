#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** arfv[])
	{
	int matriz[5][2],i = 0, j = 0, maior = 0 ,menor = 0, linha_maior, linha_menor, coluna_maior = 0 , coluna_menor = 0; 
	printf("Prenche a Matriz [5][2]:\n");
	for(i = 0; i < 5; i++)
	{
	printf("Preenchendo a %i linha da matriz...\n\n", i + 1); 
	for(j = 0; j < 2; j++)
	{
	printf("mat [%i] [%i] = ",i+1,j+1);
	scanf("%i",&matriz[i][j]);
	}
	}
	printf("\n");
	printf("Matriz Prenchida\n \n");
	for(i = 0; i < 5; i++)
	{
	for(j = 0; j < 2; j++)
	{
	printf("[%i] ",matriz[i][j]);
	}
	printf("\n");
	}
	for(i = 0; i < 5; i++)
	{
	for(j = 0; j < 2; j++)
	{
	if(i == 1 && j == 1)
	{
	maior = matriz[i][j];
	menor = matriz[i][j];
	}
	else if(matriz[i][j] > maior)
	{
	maior = matriz[i][j];
	linha_maior = i;
	coluna_maior = j;
	}
	
	}
	}
	for(i = 0; i < 5; i++)
	{
	for(j = 0; j < 2; j++)
	{
	if(matriz[i][j] < menor)
	{
	menor = matriz[i][j];
	linha_menor = i;
	coluna_menor = j;
	}
	}
	}
	printf("\n O maior numero e: %i",maior);
	printf("\n A coluna do maior numero e: %i",coluna_maior);
	printf("\n A linha do maior numero e: %i",linha_menor);
	printf("\n O menor valor e: %i",menor);
	printf("\n A coluna do menor numero e: %i",coluna_menor);
	printf("\n A linha do menor numero e: %i",linha_menor);
	getchar();
	return 0;
}
