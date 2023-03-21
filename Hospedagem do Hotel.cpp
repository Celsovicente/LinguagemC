#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int numero_dias,total_conta;
	printf("Digite o numero de dias de Hospedagem no Hotel:\n");
	scanf("%i",&numero_dias);
	if(numero_dias > 15)
	{
		total_conta=numero_dias*5.5;
		printf("\n O total da conta do Usuario e de:\n %d",total_conta);
	}
	else if(numero_dias == 15)
	{
		total_conta=numero_dias*6;
		printf("\n O total da conta do Usuario e de:\n %d",total_conta);
	}
	else if(numero_dias < 15)
	{
		total_conta=numero_dias*8;
		printf("\n O total da conta do Usuario e de:\n %d",total_conta);
	}
	getchar();
	return 0;
}
