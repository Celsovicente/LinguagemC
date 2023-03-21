#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int N,A,B,soma=0,quant=0;
	printf("Digite o valor de (N):\n");
	scanf("%i",&N);
	printf("Digite o valor de (A):\n");
	scanf("%i",&A);
	printf("Digite o valor de (B):\n");
	scanf("%i",&B);
	for(int i=A;i<=B;i++)
	{
		if(i % N == 0)
		{
			soma+=i;
			quant++;
		}
	}
	printf("\n A quantidade de elementos multiplos de 7 e:\n %i",quant);
	printf("\n A soma e:\n %i",soma);
	getchar();
	return 0;
}
