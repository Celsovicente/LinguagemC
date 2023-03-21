#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade,soma=0,quant=0;
	float Media_idade;
	do
	{	
		printf("Digite uma idade:\n");
		scanf("%i",&idade);
		soma+=idade;
		quant++;
	}while(idade!=0);
	Media_idade=soma/quant;
	printf("\n A Media das idades e:\n %f",Media_idade);
	getchar();
	return 0;
}
