#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[]){
	int num,soma=0;
	for(int i=1;i<=10;i++)
	{
	printf("Digite o %d numero:\n",num);
	scanf("%i",&num);
		soma+=num;
	}
	printf("\n A soma e:\n %i",soma);
	getchar();
	return 0;
}
