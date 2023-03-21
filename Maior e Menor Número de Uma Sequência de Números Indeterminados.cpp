#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
  unsigned int int_max,menor,num;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
		if(num == 1)
		{
			menor=num;
			int_max=num;
		}
		else if(num < menor)
		{
			menor=num;
		}
		else if(num > int_max)
		{
			int_max=num;
		}
	}while(num!=0);
	printf("\n O menor numero e:\n %i",menor);
	printf("\n O maior numero e:\n %i",int_max);
	getchar();
	return 0;
}
