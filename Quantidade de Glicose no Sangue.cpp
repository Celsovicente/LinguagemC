#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float quantidade_glicose;
	printf("Digite a quantidade de Glicose no sangue:\n");
	scanf("%f",&quantidade_glicose);
	if(quantidade_glicose < 100)
	{
		printf("\n Normal");
	}
	else if(quantidade_glicose >= 100 || quantidade_glicose <= 140)
	{
		printf("\n Elevado");
	}
	else if(quantidade_glicose > 140)
	{
		printf("\n Diabetico");
	}
	getchar();
	return 0;
}
