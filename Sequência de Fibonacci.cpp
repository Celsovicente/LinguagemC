#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
    int numero_1=0,numero_2=1,cont,n,soma=0;
	printf("Digite a quantidade de numeros:\n");
	scanf("%i",&n);
	for(cont=1;cont<=n;cont++)
	{
		soma=numero_1+numero_2;
		printf("\n A soma e:\n %d",soma);
		numero_1=numero_2;
		numero_2=soma;
	}
	getchar();
	return 0;
}
