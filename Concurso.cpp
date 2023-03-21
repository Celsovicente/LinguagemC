#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	float pri_ganhador=0,segun_ganhador=0,terc_ganhador=0;
	double valor=780;
	printf("A quantia a ser ganha e de:\n %f",valor);
	scanf("%f",&valor);
	pri_ganhador=valor*46/100;
	segun_ganhador=valor*32/100;
	terc_ganhador=valor*22/100;
	printf("\n O valor do primeiro ganhador e de:\n %f",pri_ganhador);
	printf("\n O valor do segundo ganhador e de:\n %f",segun_ganhador);
	printf("\n O valor do terceiero ganhador e de:\n %f",terc_ganhador);
	getchar();
	return 0;
}
