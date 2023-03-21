#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float produto,desconto;
	printf("Digite o valor do Produto:\n");
	scanf("%f",&produto);
	
	desconto=produto*12/100;
	produto-=desconto;
	printf("\n O valor do produto tendo sido descontado e de:\n %f",desconto);
	getchar();
	return 0;
}
