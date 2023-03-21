#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char** argv) 
{
	int n,n1,soma=0,soma1=0;
	printf("Digite o primeiro numero:\n");
	scanf("%i",&n);
	printf("Digite o segundo numero:\n");
	scanf("%i",&n1);
	for(int i=1;i<n;i++)
	{
		if(n % i == 0)
		{
			soma+=i;
		}
	}
		for(int i=1;i<n1;i++)
		{
			if(n1 % i == 0)
			{
				soma1+=i;
			}
		}
		if(soma == n1 && soma1 == n)
		{
			printf("\n Os numeros sao Amigos");
		}
		else
		{
			printf("\n Os numeros nao sao Amigos!");
		}
	getchar();
	return 0;
}
