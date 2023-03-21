#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int codigo;
	float renda,desconto,poupanca,poupanca1,investimento,total_juros,total_investido;
	do
	{
		printf("\n Digite o Codigo do Cliente:\n 1-Poupanca 1.5%%\n 2-Popanca Plus 2%%\n 3-Fundos de Renda Fixa 4%%\n");
		scanf("%i",&codigo);
		printf("Digite o Valor do Investimento:\n");
		scanf("%f",&investimento);
		if(codigo == 1)
		{
			poupanca1=((investimento*1.5)/100);
			printf("\n A pounpaca de 1.5%% e igual a:\n %f",poupanca1);
		}
		else if(codigo == 2)
		{
			poupanca=((investimento*2)/100);
			printf("\n A poupanca de 2%% e igual a:\n %f",poupanca);
		}
		else if(codigo == 3)
		{
			desconto=((investimento*4)/100);
			renda=investimento-desconto;
			printf("\n O Desconto dos Fundos de Renda Fixa de 4%% e igual a:\n %f",renda);
		}
		if(codigo >= 4)
		{
			printf("\n Opcao Invalida!");
		}
		total_investido=poupanca1+poupanca;
		total_juros=renda;	
	}while(codigo > 0);
	printf("\n O Total de Investimento e de:\n %f",total_investido);
	printf("\n O Total de Juoros Pagos e de:\n %f",total_juros);
	getchar();
	return 0;
}
