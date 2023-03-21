#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,fatorial=1,cont;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	for(cont=1;cont<=numero;cont++)
	{
		fatorial*=cont;
	}
	printf("\n O Fatorail do numero e:\n %d",fatorial);
	getchar();
	return 0;
}
