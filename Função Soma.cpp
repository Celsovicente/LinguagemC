#include <stdio.h>
#include <stdlib.h>
void soma (int a, int b)
{
int soma;
soma=a+b;
printf("A soma e:\n %i",soma);
}
int main(int argc, char** argv) 
{
	int a,b;
	printf("Digite o 1 numero:\n");
	scanf("%i",&a);
	
	printf("Digite o 2 numero:\n");
	scanf("%i",&b);
	
	soma(a,b);
	getchar();
	return 0;
}
