#include <stdio.h>
#include <stdlib.h>
void media (int n1)
{
	int quant=0,soma=0;
	float Media=1;
	do
	{
		soma+=n1;
		quant++;
	}while(n1 != 0);
	Media=soma/quant;
	printf("\n A media dos numeros e:\n %2.3f",Media);
}
int main(int argc, char** argv) 
{
	int n1;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&n1);
	}while(n1 != 0);
	
	media(n1);
	getchar();
	
	return 0;
}
