#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int un,n,r,u1;
	for(int i=1;i<=20;i++)
	{
	printf("\n Digite o valor de (n):\n");
	scanf("%i",&n);
	printf("Digite o valor de (u1):\n");
	scanf("%i",&u1);
	printf("Digite o valor de (r):\n");
	scanf("%i",&r);
	un=u1+(n-1)*r;
	printf("\n O valor de un e:\n %i",un);
	}
    getchar();
	return 0;
}
