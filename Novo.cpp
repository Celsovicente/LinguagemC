#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int n,cont=0,q=0,c;
	do
	{
		printf("Digite um numero :\n");
		scanf("%d",&n);
		if(n == n)
		{
			cont++;
			cont=0;
			q++;
			q=0;
		}
			if(cont == 2)
			{
				if(n % 2 == 0)
				{
					printf("\n O numero e Par");
				}
			}
		for(int i=1;i<=n;i++)
		{
			if(n % i == 0)
			{
				c++;
			}
		}
		if(c == 2)
		{
			printf("\n O numero e Primo!");
		}
	}while(n > 0);
	return 0;
}
