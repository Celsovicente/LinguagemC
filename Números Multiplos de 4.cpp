#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,quant_num_mult4;
	do
	{
		printf("Digite um numero positivo:\n");
		scanf("%i",&num);
		if((num % 4) == 0)
		{
			quant_num_mult4++;
			printf("\n E um multiplo de 4\n");
		}
	}while(num!=0);
	printf("\n A quantidade de numeros multiplos de 4 sao:\n %i",quant_num_mult4);
	getchar();
	return 0;
}
