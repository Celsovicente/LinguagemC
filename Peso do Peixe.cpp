#include<stdio.h>
main(){
	float peso,pagamento,Excesso_do_quilo;
	printf("Digite o peso do Peixe:\n");
	scanf("%f",&peso);
	if(peso > 50){
		Excesso_do_quilo=peso-50;
		pagamento=400*Excesso_do_quilo;
		printf("\n O Excessso do quilo deste peixe e:\n %f",Excesso_do_quilo);
		printf("\nA sua multa de acordo ao excesso de quilo do peixe sera:\n %f", pagamento,"Kz");
 }else{
 	printf("\n O Senhor nao deve pagar nenhuma multa");
 }
 return 0;
}
