#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,unidade=0,dezena=0,centena=0,milhar=0;
	printf("Digite um numero de 4 digitos:\n");
	scanf("%i",&num);
	
	unidade=((num/1000)%10);
	dezena=((num/100)%10);
	centena=((num/10)%10);
	milhar=((num/1)%10);
	
	printf("\n A sua unidade e:\n %i",unidade);
	printf("\n A sua dezena e:\n %i",dezena);
	printf("\n A sua centena e:\n %i",centena);
	printf("\n O seu milhar e:\n %i",milhar);
	getchar();
	return 0;
}
