#include <stdio.h>
#include <stdlib.h>
void maior_menor (int n1)
{
	int maior,menor,i;
	for(i=1;i<=5;i++)
	{
		if(n1==1)
		{
			maior=n1;
			menor=n1;
		}
		else if(n1 > maior)
		{
			maior=n1;
		}
		else if(n1 < menor)
		{
			menor=n1;
		}
	}
	printf("\n O maior numero e:\n %i",maior);
	printf("\n O menor numero e:\n %i",menor);
}
int main(int argc, char** argv) 
{
	int numero,i;
	for(i=1;i<=5;i++)
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);
	}
	
	maior_menor(numero);
	
	getchar();
	
	return 0;
}
