#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char argv[])
{
	int num1,num2,soma;
	printf("Digite 2 numeros inteiros:\n");
	scanf("%i%i",&num1,&num2);


	printf("\n A soma dos numeros e:\n %i + %i = %i",num1,num2,(num1 + num2));
	printf("\n O produto e:\n %i  X %i = %i",num1,num2,(num1 * pow(num2,2)));
	printf("\n O Quadrado do primeiro numero e:\n %f",pow(num1,2));
	printf("\n A soma da raiz quadrada e:\n %d + %d = %f",num1,num2,sqrt((pow(num1,2))+(pow(num2,2))));
	printf("\n O Seno da diferenca do primeiro numero pelo segundo e:\n %i - %i = %f",num1,num2, sin(num1 - num2));
	printf("\n O modulo do primeiro numero e:\n %f",fabs(num1));
 getchar();
  return 0;
}
