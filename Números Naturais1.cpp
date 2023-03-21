#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv[])
{
	int Numero,i;
	system("Color 0b");
	printf("Digite um numero:\n");
	scanf("%i",&Numero);
	for(i=Numero;i > -1;i--)
	{
		printf("\n %i",i);
	}
	getchar();
	return 0;
}
