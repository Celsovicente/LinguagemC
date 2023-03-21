#include <stdio.h>
#include <stdlib.h>
void primo (int n1)
{
	int cont;
	for(int i=1;i<=10;i++)
	{
		cont=0;
		for(int j=1;j<n1;j++)
		{
			if(i % j == 0)
			{
				cont++;
			}
			if(cont==2)
			{
				printf("\n O numero e Primo");
			}
			else
			{
				printf("\n O numero Nao e Primo");
			}
		}
	}
}
int main(int argc, char** argv) 
{
	int numero,i;
	for(i=0;i<=10;i++)
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);

    }
	primo(numero);
	
	getchar();
	

	return 0;
}
