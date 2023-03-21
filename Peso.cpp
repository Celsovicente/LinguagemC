#include<stdio.h>
int main(int argc, char** argv)
{
    float peso,novo_peso=0;
    printf("Digite o peso do individuo:\n");
    scanf("%f",&peso);
    novo_peso=peso*15/100;
    novo_peso=peso*20/100;
    
    printf("\n A pessoa emagreceu 15 porcento %f:\n",novo_peso);
    printf("\n A pessoa engordou 20 porcento %f:\n",novo_peso);
	return 0;
}
