#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int main(){
	int valor,valor_inicial,valor_final,N_linhas,linha,Quad_valor;
	printf("Valor inicial da tabela:\n");
	scanf("%i",&valor_inicial);
	printf("Digite o valor final da Tabela:\n");
	scanf("%i",&valor_final);
	do{
		printf("Numero de linhas da tabela:\n");
		scanf("%i",&N_linhas);
	}while(N_linhas < 2);
	printf("-----------------------");
	printf(" |   valor   |  valor*valor    |");
	printf("-----------------------");
	for(linha=1;linha<=N_linhas;linha++){
		valor=valor_inicial+(valor_final-valor_inicial)/(N_linhas-1)*(linha-1);
		Quad_valor=valor*valor;
		printf("| ",valor," | ",Quad_valor," | ");
		printf("--------------------");
	}
	return 0;
}
