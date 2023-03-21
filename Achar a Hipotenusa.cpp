#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
    float cat_a,cat_b,hipot;
	printf("Digite os valores dos catetos:\n");
	scanf("%f%f",&cat_a,&cat_b);
	hipot=sqrt(pow(cat_a,2)+pow(cat_b,2));
	printf("\n O valor da hipotenusa e:\n %f",hipot);
	getchar();
	return 0;
}
