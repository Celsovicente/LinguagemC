#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,quadrado=0,soma_quadrado=0;
	for(num=1;num<=100;num++)
	{
		printf("Digite o %d numero:\n",num);
		scanf("%i",&num);
		if(num>=1 && num<=10)
		{
			quadrado=pow(num,2);
			soma_quadrado+=num;
		}
		if(num==20)
		break;
	}
	printf("\n O Quadrado do numero e:\n %i",quadrado);
	printf("\n A soma dos quadrados e:\n %i",soma_quadrado);
	getchar();
	return 0;
}
