#include <stdio.h>
#include <stdlib.h>
void par_impar (int a)
{
	if(a % 2 == 0)
	{
		printf("\n O Numero e Par");
	}
	else
	{
	printf("\n O Numero e Impar");	
	}
}
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	
	par_impar(numero);
	getchar ();
	
	return 0;
}
