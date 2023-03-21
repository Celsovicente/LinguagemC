#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv[])
{
	float valor_h_tr=0,numero_h_tr=1,valor_pago=0;
	printf("Digite o valor de horas trabalhados, e o numero de horas trabalhadas:\n");
	scanf("%f%f",&valor_h_tr,&numero_h_tr);
	
	valor_h_tr*=10/100;
	numero_h_tr*=10/100;
	valor_pago=valor_h_tr+numero_h_tr;
	
	printf("\n O valor Pago e de:\n %f",valor_pago);
	getchar();
	return 0;
}
