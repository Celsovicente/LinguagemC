#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float Quilometros,Milhas,n;
	char op;
	printf("Digite um numero para converter:\n");
	scanf("%f",&n);
	printf("Digite a opcao:\n M-Milha:\n Q-Quilometros\n");
	scanf("%c",&op);
	fflush(stdin);
	switch(op)
	{
		case 'M':
		Quilometros=1.609*Milhas;
		printf("\n A conversao em Quilometros e:\n %f",Quilometros);
		break;
			case 'Q':
			Milhas=1.609*Quilometros;
			printf("\n A conversao em Milhas e:\n %f",Milhas);	
			default:
				printf("\n Opcao Invalida!");
				break;
	}
	getchar();
	return 0;
}
