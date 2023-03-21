#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,soma=0,quant=0;
	float Media;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
		quant++;
		soma+=num;
	}
	while(num > 0);
	Media=soma/quant;
	printf("\n A media e:\n %f",Media);
	getchar();
	return 0;
}
