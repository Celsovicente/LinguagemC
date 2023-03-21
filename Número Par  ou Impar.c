#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv)
	{
		int a;
		printf ("Digite um numero inteiro :\n");
		scanf("%d",&a);
		if(a % 2 == 0)
		{
			printf("O numero %d e par",a);
		}
		else 
		{
			printf("O numero %d e impar",a);
		}
		return 0;
	}

