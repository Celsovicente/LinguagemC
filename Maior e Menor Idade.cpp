#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade,maior_idade=0,menor_idade=1;
	do
	{
		printf("Digite a idade do usuario:\n");
		scanf("%i",&idade);
		if(idade == 1)
		{
			maior_idade=idade;
			menor_idade=idade;
		}
		else if(idade > maior_idade)
		{
			maior_idade=idade;
		}
		else if(idade < menor_idade)
		{
			menor_idade=idade;
		}
	}
	while(idade != 0);
	printf("\n A maior idade e:\n %i",maior_idade);
	printf("\n A menor idade e:\n %i",menor_idade);
	getchar();
	return 0;
}
