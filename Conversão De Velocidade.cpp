#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float velocidade,km=0,minuto=0,conversao=0;
	printf("Digite o valor da Velocidade:\n");
	scanf("%f",&velocidade);
	km=(velocidade*1000)/1;
	minuto=(60*60)/1;
	conversao=(km/minuto);
	printf("\n A conversao para m/s e:\n %f",conversao);
	getchar();
	return 0;
}
