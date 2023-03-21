#include <stdio.h>
#include <stdlib.h>
void carater(int n1, int n2)
{
	int opcao;
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			printf("\n A soma e:\n %i + %i = %i",n1,n2,n1+n2);
			break;
			case 2:
				printf("\n A diferenca e:\n %i - %i = %i",n1,n2,n1-n2);
				break;
				case 3:
				printf("\n O produto e:\n %i x %i = %i",n1,n2,n1*n2);
				break;
				case 4:
					printf("\n A soma e:\n %d / %d = %d",n1,n2,n1/n2);
					break;
					default:
					printf("\n Erro");
					break;		
	}
}
int main(int argc, char** argv)
{
	int n1,n2;
	int opcao;
	printf("Digite o 1 numero:\n");
	scanf("%i",&n1);
	
	printf("Digite o 2 numero:\n");
	scanf("%i",&n2);
	
	printf("Escolha a opcao\n 1-Soma\n 2-Subtracao\n 3-Produto1\n 4-Quociente\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
  void  carater (int n1,int n2);
	
	getchar(); 
    }
	return 0;
}
