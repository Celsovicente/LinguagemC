#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int Numero,i;
	printf("Digite um numero para achar a tabuada:\n");
	scanf("%d",&Numero);
	for(i=Numero;i<=100;i++)
	{
		printf("\n %2d x %2d= %2d",Numero,i,Numero*i);
		Numero++;
	}
	getchar();
	return 0;
}
