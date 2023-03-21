#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,i;
	system("color 0b");
	printf("Digite um numero par:\n");
	scanf("%i",&numero);
	for(i=0;i<=numero;i=i+2)
	{
		printf("\n %i",i);
	}
	getchar();
	return 0;
}
