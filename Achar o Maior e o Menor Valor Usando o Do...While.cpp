#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int num,maior=0,menor=1,negativo=0;
	do
	{
		printf("Digite um valor:\n");
		scanf("%i",&num);
		if(num == 1)
			if(num < 0)
	    {
			negativo++;
			printf("\n O numero e Negativo!");
			
		}
		if(num == 1)
		{
			maior=num;
			menor=num;
		}
		else if(num > maior)
		{
			maior=num;
		}
		else if(num < menor)
		{
			menor=num;
		}
	}while(num != 0);
	printf("\n O maior valor e:\n %i",maior);
	printf("\n O menor valor e:\n %i",menor);
	getchar();
	return 0;
}
