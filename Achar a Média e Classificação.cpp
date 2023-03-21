#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float nota1,nota2,Media;
	printf("Digite as 2 notas:\n");
	scanf("%f%f",&nota1,&nota2);
	Media=(nota1+nota2)/2;
	printf("\n A media das notas e:\n %f",Media);
	printf("\n A classificacao e:");
	if(Media>=0 && Media<=3)
	{
		printf("\n Reprovado");
	}
	else if(Media>=3 && Media<=7)
	{
		printf("\n Exame");
	}else if(Media>=7 && Media<=10)
	{
		printf("\n Aprovado");
	}
	getchar();
	return 0;
}
