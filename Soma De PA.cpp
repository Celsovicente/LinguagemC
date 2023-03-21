#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int u1,un,n,Sn;
	printf("Digite o Valor de (u1):\n");
	scanf("%i",&u1);
	printf("Digite o Valor de (un):\n");
	scanf("%i",&un);
	printf("Digite o Valor de (n):\n");
	scanf("%i",&n);
	Sn=((u1+un)/2)*n;
	printf("\n O valor de Sn e:\n %i",Sn);
	getchar();
	return 0;
}
