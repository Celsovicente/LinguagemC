#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float nota=0,nota2=0,Media=0,exame=0,alunos_aprovados=0,alunos_reprovados=0,Media_classe=0;
	float total_da_classe=0;
	for(int i=1;i<=6;i++)
	{
		printf("Digite a primeira nota:\n");
		scanf("%f",&nota);
		printf("Digite a segunda nota:\n");
		scanf("%f",&nota2);
		
		Media=(nota+nota2)/2;
		printf("\n A Media e:\n %f",Media);
		
		if(Media >= 0 && Media <= 3)
		{
			printf("\n Reprovado!\n");
			alunos_reprovados++;
		}
		else if(Media >= 4 && Media <= 7)
		{
			printf("\n Exame\n");
			exame++;
		}
		else if(Media >= 7)
		{
			printf("\n Aprovado\n");
			alunos_aprovados++;
		}
		total_da_classe+=Media;
	}
	Media_classe=total_da_classe/6;
	printf("\n O Total de Alunos para o Exame e:\n %f",exame);
	printf("\n O Total de Alunos Reprovados e:\n %f",alunos_reprovados);
	printf("\n O Total de Alunos Aprovados e:\n %f",alunos_aprovados);
	printf("\n A Media da Classe e:\n %f",Media_classe);
	getchar();
	return 0;
}
