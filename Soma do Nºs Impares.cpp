#include<stdio.h>
#include <stdlib.h>
int main(int argc, char argv[])
{
	int num,soma_impar,i;
	do
	{
	for(i=1;i<=50;i++)
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
		if((num%2) != 0)
		{
			soma_impar+=num;
     	}
	}
    }while(num> 50);
    printf("\n Intervalo de numeros invalidos");
    printf("\n A soma dos numeros impares e:\n %i",soma_impar);
	getchar();
	return 0;
}
