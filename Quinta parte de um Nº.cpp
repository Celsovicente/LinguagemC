#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float num;
	float quint_part;
	printf("Digite um numero Real:\n");
	scanf("%f",&num);
	quint_part=num/5;
	printf("\n A quinta parte e:\n %f",quint_part);
	getchar();
	return 0;
}
