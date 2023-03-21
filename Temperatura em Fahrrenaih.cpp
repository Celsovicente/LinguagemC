#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float C,F;
	printf("Digite a temperatura em Fahrrenaih\n");
	scanf("%f",&F);
	C=(F-32)*(5/9);
	printf("\n A conversao em Celsius e:\n %f",C);
	getchar();
	return 0;
}
