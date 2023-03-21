#include <stdio.h>
int main()
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%d",&numero);
	int cont = 0;
                for(int i = 1; i <= numero; i++)
                {
                    if(numero % i == 0)
                    {
                        cont++;
                    }
                
                }
                    if(cont == 2)
                {
                    printf("O numero e Primo");
                }
                else
                    {
                        printf("O numero nao e Primo");
                    }
               
                    return 0;
}
