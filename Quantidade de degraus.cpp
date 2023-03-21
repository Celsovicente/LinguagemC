#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	float quant_degrau,altura_degrau,altura_usuario;
	printf("Digite a altura do usuario e a altura do degrau a atingir:\n");
	scanf("%f%f",&altura_usuario,&altura_degrau);
	quant_degrau=altura_usuario/altura_degrau;
	printf("\n A quantidade de degraus a subir e:\n %f",quant_degrau);
	getchar();
	return 0;
}
