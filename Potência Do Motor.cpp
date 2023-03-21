#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float potencia,KW=0;
	printf("Digite o valor da Potencia em CV:\n");
	scanf("%f",&potencia);
	KW=potencia*0.736;
	printf("\n A Potencia do motor em KW:\n %f",KW);
	getchar();
	return 0;
}
