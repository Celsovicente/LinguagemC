#include <stdio.h>
#include <stdlib.h>
void quantidade_de_numeros_pares (int n1)
{
	int quant_pares=0;
	for(int i=1;i<=15;i++)
	{
	if(n1 % 2 == 0)
	{
		quant_pares++;
		printf("\n O numero e par\n");
	}
	else
	{
	    printf("\n O numero e impar\n");
	}
   }
	printf("\n A quantidade de numero pares e:\n %i",quant_pares);
}
int main(int argc, char** argv) 
{
	int n1;
	for(int i=1;i<=15;i++)
	{
	printf("Digite um numero:\n");
	scanf("%i",&n1);
    }
 quantidade_de_numeros_pares(n1);
	
	getchar();
	return 0;
}
