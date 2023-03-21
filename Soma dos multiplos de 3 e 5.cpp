#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,soma_mult3_5=0,i;
	for(i=1;i<1000;i++)
	{
		printf("Digite os %d  numeros:\n",i);
		scanf("%i",&num);
		if((num%3 || num%5) == 0)
		{
			soma_mult3_5+=num;
		}
	}
	printf("\n A soma dos multiplos e:\n %i",soma_mult3_5);
	getchar();
	return 0;
}
