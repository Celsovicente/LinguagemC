#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char** argv[]) 
{
	float inscricao, pagamento,desconto;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor da Inscrição:\n");
	scanf("%f",&inscricao);
	pagamento = ((inscricao * 65)/100);
	desconto = inscricao - pagamento;
	printf("O valor do desconto é:\n %f",desconto);
	return 0;
}
