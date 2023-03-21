#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	int vetor[14],i,j,vetor2[9],quat,quantidade;
	for(i=0;i<14;i++)
	{
		printf("Digite o numero da matricula do curso de Logica:");
		scanf("%i",&vetor[i]);
	}
	for(j=0;j<9;j++)
	{
		printf("Digite o numero da matricula do curso de Linguagem de Programacao:");
		scanf("%i",&vetor2[j]);
	}

    getchar();
	return 0;
}
