#include <stdio.h>
int main() {
	int numero, cont = 1;
	for(int i = 1; i <= 10; i++)
	{
		printf("Digite um numero:\n");
		scanf("%d",&numero);
		if(numero % i == 0)
		{
			for(int i=1;i<=numero;i++)
			{
				if((numero % i) == 0)
				{
					cont *= i;
					printf("\n %d\n",i);
			    }
			}
		}
	}
	return 0;
}
