#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num1,num2,soma,quociente,mult,subtra;
	char Op;
	printf("Digite 2 numros:\n"); 
	printf("Diga a Opcao:\n A-Soma\n S-Subtracao\n M-Multiplicacao\n Q-Quocinte\n E-Erro\n");
	scanf("%c",&Op);
	scanf("%i%i",&num1,&num2);
	fflush(stdin);
	switch(Op)
	{
		case 'A':
			soma=num1+num2;
			printf("\n A soma e:\n %i",soma);
			break;
			case 'S':
				subtra=num1-num2;
				printf("\n A subtracao e:\n %i",subtra);
				break;
				case 'M':
					mult=num1*num2;
					printf("\n A multiplicacao e:\n %i",mult);
					break;
					case 'Q':
						quociente=num1%num2;
				        printf("\n O quociente e:\n %i",quociente);
				        break;
				        case 'E':
				        	printf("\n Opcao invalida");
				        	break;
				        	default:
				        		printf("\n Erro");
				        		break;	
	 }
	 getchar();
	return 0;
						
}
