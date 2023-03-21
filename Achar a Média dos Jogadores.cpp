#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade,quantidade=0,soma=0,soma1=0,q=0;
	float altura=0,Media_idade=0,peso=0,Media_altura=0,Percentagem=0;
	for(int i=1;i<=5;i++)
	{
		for(int i=1;i<=11;i++)
		{
			printf("Digite a idade, o peso e a altura dos Jogadores:\n");
			scanf("%i%f%f",&idade,&altura,&peso);
			if(idade < 18)
			{
			quantidade++;
		    }
		    soma+idade;
		    soma1+=altura;
		    if(peso > 85)
		    {
		    	q++;
			}
		}
	}
	Media_altura=soma1/55;
	Media_idade=soma/55;
	Percentagem=(q*100)/55;
	printf("\n A quantidade de idades inferiores a 18 e:\n %i",quantidade);
	printf("\n A Media das idades e:\n %f",Media_idades);
	printf("\n A Media das alturas e :\n %f",Media_altura);
	printf("\n A Percentagem dos pesos superiores a 85 e:\n %f",Percentagem);
	getchar();
	return 0;
}
