#include<stdio.h>
#include<stdlib.h>
main()
{
	char nome;
   unsigned char disciplina,teoricas,praticas;
	printf("Digite o Nome e o tipo de disciplinas que gostas e dominas:\n");
	scanf("%c%c",&nome,&disciplina);
	if(disciplina == praticas)
	{
		printf("\n O Aluno pode fazer cursos Tecnicos como:\n Informatica,\n Quimica,\n Mecanica\n,\n Electrecidade ");
	}
	else
	{
		printf("\n Enfermagem,\n Direito");
	}
	return 0;
	}
