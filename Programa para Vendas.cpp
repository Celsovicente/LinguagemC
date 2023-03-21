#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float valor_parcel=0,valor_total=0,total_pagar=0,comi=0,com1=0,total=0;
	
	printf("Digite um valor total para as vendas:\n");
	scanf("%f",&valor_total);
	total_pagar=valor_total*10/100;
	valor_parcel=valor_total*3;
	comi=(valor_total*5/100)/total_pagar;
	com1=(valor_parcel*5/100)/total_pagar;
	total=(valor_total-total_pagar)+(valor_parcel-comi)+com1;
	printf("\n O valor total e:\n %f",total);
	getchar();
	return 0;
}
