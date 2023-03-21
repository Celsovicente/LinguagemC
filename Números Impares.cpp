#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int numero,i;
	printf("Digite um numero impar:\n");
	scanf("%i",&numero);
	for(i=1;i<=numero;i=i+2)
	{
		printf("\n %i",i);
	}
	getchar();
	return 0;
}
