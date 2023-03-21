#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int nota,nota2,opcao;
	float Media,peso,peso2;
	printf("Digite a 1 nota:\n");
	scanf("%d",&nota);
	printf("Digite a 2 nota:\n");
	scanf("%d",&nota2);
	printf("Escolha a Opcao Desejada\n 1-Media Aritmetica\n 2-Media Ponderada\n 3-Sair\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
		printf("\n A Media e:\n %d + %d = %f",nota,nota2,(nota+nota2)/2);
			break;
			case 2:
				printf("\n Digite os dois Pesos:\n");
				scanf("%f%f",&peso,&peso2);
				Media=((nota*peso)+(nota*peso2))/(peso+peso2);
				printf("\n A Media Ponderada e:\n %f",Media);
				break;
				case 3:
					printf("\n Sair!");
					break;
					default:
						printf("\n Opcao Invalida!");
						break;
	}
	getchar();
	return 0;
}
