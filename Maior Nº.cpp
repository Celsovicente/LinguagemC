#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num1,num2;
	printf("Digite 2 numeros:\n");
	scanf("%i%i",&num1,&num2);
	if(num1>num2)
	{
	printf("\n O maior numero e num1:\n %i",num1);
    }
    else if(num1 == num2)
    {
    	printf("\n Os numeros sao iguais\n");
	}
	else
	{
	printf("\n  O maior numero e num2:\n %i",num2);
    }
    getchar();
	return 0;
}
