#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n,soma_impar=0;
	printf("Digite um numero : \n");
	scanf("%d",&n);
	for(int i=1;i<n*2;i++)
	{
		if(i % 2 == 1)
		soma_impar+=i;
	}
	printf("\n A soma e : \n %d",soma_impar);
	return 0;
}
