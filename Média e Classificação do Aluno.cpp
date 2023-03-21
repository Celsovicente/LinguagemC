#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float nota1,nota2,Media;
	printf("Digite as duas notas e mostre a classificacao:\n");
	scanf("%f%f",&nota1,&nota2);
	Media=(nota1+nota2)/2;
	if(Media >= 9.5)
	{
		printf("\n O Aluno esta aprovado com a Media de %f",Media);
	}
	else
	{
		printf("\n O Aluno esta reprovado com a media de:\n %f",Media);
	}
	if(Media > 20 || Media< 0)
	{
		printf("\n A media e invalida");
	}
	getchar();
	return 0;
}
