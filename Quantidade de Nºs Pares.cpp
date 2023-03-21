#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int num,quant_par;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
		if(num%2==0)
		{
			quant_par++;
		}
		
	}while(num!=0);
	printf("\n A quantidade de numeros pares e:\n %i",quant_par);
	getchar();
	return 0;
}
