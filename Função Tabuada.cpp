#include <stdio.h>
#include <stdlib.h>
void tabuada (int n1)
{
	int n2;
	for(int n2=1;n2<=12;n2++)
	{
		printf("\n %i x %i = %i",n2,n1,n2*n2);
	}	
}
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	
	tabuada(numero);
	getchar();
	return 0;
}
