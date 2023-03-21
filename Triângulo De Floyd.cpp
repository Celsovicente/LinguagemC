#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero,i,c,j=1;
	printf("Digite a quantidade de numeros:\n");
	scanf("%i",&numero);
	system("color 0b");
	for(i=0;i<=numero;i++)
	{
		for(c=0;c<=i;c++)
		{
			printf("%i",j);
			j++;
		}
		printf("\n");
	}
	getchar();
	return 0;
}
