#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,suces,antecesso;
	printf("Digite um numero:\n");
	scanf("%i",&num);
	suces=num+1;
	antecesso=num-1;
	printf("\n O seu sucessor e:\n %i",suces);
	printf("\n O seu antecessor e:\n %i",antecesso);
	getchar();
	return 0;
}
