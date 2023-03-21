#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv)
 {
 	float numero,numero2;
 	printf("Digite um numero Real:\n");
 	scanf("%f",&numero);
 	printf("\n O valor arrendondado e:\n %f",ceil(numero));
 	
	printf("\nDigite o segundo numero:\n");
 	scanf("%f",&numero2);
 	printf("\n O valor arrendondado e :\n %f",floor(numero2));
	getchar();
	return 0;
}
