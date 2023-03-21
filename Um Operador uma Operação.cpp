#include<stdio.h>
#include<stdlib.h>
int main(int argc, char argv[])
{
	int resultado,num1,num2;
	char Op;
	printf("Digite 2 numeros e o operador:\n");
	scanf("%c",&Op);
	scanf("%i%i",&num1,&num2);
	fflush(stdin);
	switch(Op)
	{
		case '+':
	   resultado=num1+num2;
	   printf("\n O resultado e:\n %i",resultado);
	   break;
	   case '*':
	   	resultado=num1*num2;
	   	printf("\n O resultado e:\n %i",resultado);
	   	break;
	   	case '-':
	   		resultado=num1-num2;
	   		printf("\n O resultado e:\n %i",resultado);
	   	      case '/':
		   		resultado=num1/num2;
		   		printf("\n O resultado e:\n %i",resultado);
		   		break;
	   				default:
	   				printf("\n Operador invalido");
	}
	getchar();
	return 0;
}
