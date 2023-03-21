#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	system("Color 0b");
	int numero,i;
	printf("Digite um numero impar:\n");
	scanf("%i",&numero);
	for(i=numero;i>0;i=i-2)
	{
		printf("\n %i",i);
	}
	getchar();
	return 0;
}
