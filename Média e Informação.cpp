#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float nota,nota1,Media=0;
	printf("Digite as 2 notas:\n");
	scanf("%f%f",&nota,&nota1);
	Media=(nota+nota1)/2;
	printf("\n A Media e: %f\n",Media);
	if(Media >= 7)
	{-
		system("Color 1");
		printf ("\n Aprovado");
	}
	else if(Media < 7 && Media > 3)
	{
		system("Color 6");
		printf("\n Recuperacao ");
	}
	else 
	{
		system("Color 4");
		printf("\n Reprovado");
	}
	return 0;
}
