#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,quadrado=0,soma_quadrado=0;
	for(int i=1;i<=100;i++)
	{
		printf("\n Digite o %d numero:\n",i);
		scanf("%i",&num);
		if(num >= 1 && num <= 10)
		{
			quadrado=pow(num,2);
			printf("\n O Quadrado e:\n %d",quadrado);
			soma_quadrado+=num;
		}
		if(num == 20)
		break;
	}
	printf("\n A soma dos quadrados e:\n %i",soma_quadrado);
	getchar();
	return 0;
}
