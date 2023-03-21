#include<stdio.h>
int main(int argc, char** argv) 
{
	int Numero[10],i=0,j=0,cont=0,posicao=0,posicao1=0;
		for(i=1;i<=10;i++)
		{
			printf("Digite um Numero:\n");
			scanf("%i",&Numero[i]);
			cont=0;
			for(j=1;j<=Numero[i];j++)
			{
				if(Numero[i] % j==0)
				{
					cont++;
				}
			}
			if(cont == 2)
			{
				j++;
				printf("O Numero e Primo\n");
			}
			else
			{
				printf("\n O numero nao e Primo\n");	
			}
		}
posicao=Numero[i];
posicao1=i;
printf("\n A posicao do numero primo e:\n %i",posicao);
printf("\n Os numeros primos sao:\n %i",j);
	return 0;
}
