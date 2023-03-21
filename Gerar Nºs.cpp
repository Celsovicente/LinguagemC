#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,dezena,centena,unidade;
	printf("Digite um numero de 3 digitos:\n");
	scanf("%i",&num);
	unidade=((num/1)%10);
	dezena=((num/10)%10);
	centena=((num/100)%10);
	printf("\n A sua unidade e:\n %i",unidade);
	printf("\n A sua dezena e:\n %i",dezena);
	printf("\n A sua centena e:\n %i",centena);
	getchar();
	return 0;
}
