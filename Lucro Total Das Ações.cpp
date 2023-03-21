#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	char acao='F,P'; 
	int quantidade_superior,quantidade_inferior,lucro,lucro_total,lucro1;;
	do
	{
		printf("Digite a sua Acao (F ou P):\n");
		scanf("%c",&acao);
		printf("Digite o Valor do Lucro:\n");
		scanf("%d",&lucro);
		lucro1+=lucro;
		if(lucro > 1000)
		{
		quantidade_superior++;
	    }
	    else if(lucro < 200)
	    {
	    	quantidade_inferior++;
		}
		lucro_total=lucro+(quantidade_superior+quantidade_inferior);
	}while(acao != 'F');
	printf("\n O Lucro de cada Acao e:\n %d",lucro1);
	printf("\n A Quantidade de cada Acao com lucro superior a 1000 e:\n %d",quantidade_superior);
	printf("\n A Quantidade de cada Acao com lucro inferior a 200 e:\n %d",quantidade_inferior);
	printf("\n O Lucro Total da das Acoes e:\n %d",lucro_total);
	return 0;
} 
