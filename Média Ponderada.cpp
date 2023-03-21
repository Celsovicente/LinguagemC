#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float nota,nota2,nota3,peso,peso2,peso3,Media_ponderada;
	printf("Digite os valores das 3 notas:\n");
	scanf("%f%f%f",&nota,&nota2,&nota3);
	printf("Digite os valores dos 3 pesos:\n");
	scanf("%f%f%f",&peso,&peso2,&peso3);
	Media_ponderada=((nota*peso)+(nota2*peso2)+(nota3*peso3))/(peso+peso2+peso3);
	printf("\n A Media ponderada e:\n %f",Media_ponderada);
	getchar();
	return 0;
}
