#include <stdio.h>
int main(int argc, char argv[])
{
	int num,dezena,centena,unidade,milhar;
	printf("Digite um numero de 4 digitos:\n");
	scanf("%i",&num);
	milhar=((num/1000)%10);
	centena=((num/100)%10);
	dezena=((num/10)%10);
	unidade=((num/1)%10);
	if(unidade==milhar && dezena==milhar)
	{
	printf("\n O numero e Polindromo");
	}
	else
	{
		printf("\n O numero nao e Polindromo");
	}
	printf("\n O seu milhar e:\n %i",milhar);
	printf("\n A sua centena e:\n %i",centena);
	printf("\n A sua dezena e:\n %i",dezena);
	printf("\n A sua unidade e:\n %i",unidade);
    getchar(); 
	return 0;
}
