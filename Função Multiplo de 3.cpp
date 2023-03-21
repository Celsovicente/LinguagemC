#include <stdio.h>
#include <stdio.h>
void multiplo3 (int a)
{
	if(a % 3 == 0)
	{
		printf("\n O numero e multiplo de 3\n");
	}
	else
	{
		printf("\n O numero nao e multiplo de 3\n");
	}
}
int main(int argc, char** argv) 
{
	int a;
	printf("Digite um numero:\n");
	scanf("%i",&a);

	multiplo3(a);
	getchar();
	return 0;
}
