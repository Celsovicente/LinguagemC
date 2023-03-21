#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float quantia_liqu,desconto,quantia_receber;
	printf("Digite o numero de dias a ser trabalhado:\n");
	scanf("%f",&quantia_receber);
	desconto=quantia_receber*8/100;
	quantia_liqu=quantia_receber-desconto;
	printf("\n A quantia liquida e de:\n %f",quantia_liqu);
	getchar();
	return 0;
}
