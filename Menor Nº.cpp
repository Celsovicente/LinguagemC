#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int a,b;
	printf("Digite um numero:\n");
	scanf("%d %d",&a,&b);
	if(a < b)
	printf("O a e menor\n");
	else if(a == b)
	printf("\n Os numeros sao iguais");
	else
	printf("O b e menor\n");
	getchar();
	return 0;
}
