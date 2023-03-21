#include <stdio.h>
#include <stdlib.h>
void multiplo(int a)
{
	if(a%2==0)
	{
		printf("O numero e multiplo de 2");
	}else
	{
		printf("\n O numero nao e multiplo de 2");
	}
}
int main(int argc, char** argv) 
{
	int a;
	printf("Digite um numero:\n");
	scanf("%i",&a);
	
	multiplo(a);
	
	getchar();
	
	return 0;
}
