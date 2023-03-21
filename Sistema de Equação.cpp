#include <stdio.h>
#include <stdlib.h>
int main( int argc,char** argv[])
{
	float x,y,a,x1,y1,a1,d1,d;
	int opcao;
	printf("Digite o valor de X:\n");
	scanf("%f",&x);
		printf("Digite o valor de Y:\n");
		scanf("%f",&y);
			printf("Digite o valor de A:\n");
			scanf("%f",&a);
				printf("Digite o valor de X1:\n");
				scanf("%f",&x1);
	        		printf("Digite o valor de Y1:\n");
	        		scanf("%f",&y1);
						printf("Digite o valor de A1:\n");
						scanf("%f",&a1);
	printf("1-Isolar a variavel X\n 2-Isolar a variavel Y\n 3-Isolar a variavel X1\n 4-Isolar a variavel X1\n");
	scanf("%i",&opcao);
	switch(opcao)
	{
		case 1:
			d=x==a-y;
			d1=(x1*a)(x1-y)+y1==a1;
			d1=y==a1-(x*(-1));
			d1=a1/x1;
			d=x==a-y*d1;
			printf("\n O valor de d e:\n %i",d);
			printf("\n O valor de d1 e:\n %i",d1);
			break;
			case 2:
				break;
				case 3:
					break;
					case 4:
						break;
						default:
							printf("\n Erro");
				
	}
	getchar();
	return 0;
}
