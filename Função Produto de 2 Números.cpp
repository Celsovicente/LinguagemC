#include <stdio.h>
#include <stdlib.h>
void produto (int n1, int n2)
{
	int produto;
	produto=n1*n2;
	printf("\n O produto e:\n %i",produto);
}
int main(int argc, char** argv) 
{
	int numero1,numero2;
	printf("Digite o 1 numero:\n");
	scanf("%i",&numero1);
	
	printf("Digite o 2 numero:\n");
	scanf("%i",&numero2);
	
	produto(numero1,numero2);
	getchar();
	return 0;
}
