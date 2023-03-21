#include <stdio.h>
#include <stdlib.h>
void fatorial (int n1)
{
  int i,fatorial=1;
	for(i=1;i<=n1;i++)
	{
	 fatorial*=i;
	}
	printf("\n O fatorial do numero e:\n %i",fatorial);
}
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero inteiro:\n");
	scanf("%i",&numero);
	
	fatorial(numero);
	getchar();
	
	return 0;
}
