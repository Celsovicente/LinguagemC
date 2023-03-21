#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int  n,maior=0,soma=0,quant=0,quant_impar=0,quant_impar2=0;
	float Media=0;
	do 
	{
		printf("Digite um numero:\n");
		scanf("%d",&n);
		soma+=n;
		quant++;
		if(n > maior) 
		{
			maior=n;
		}
		if(n % 2  != 0) 
		{
			quant_impar++;
			quant_impar++;
		}
		else
		quant_impar2=0;
    }
	while(quant_impar2 != 3);
	Media=soma/quant;
	printf("\n A Media e:\n %f",Media);
	printf("n O maior valor e:\n %d",maior);
	return 0;
}
