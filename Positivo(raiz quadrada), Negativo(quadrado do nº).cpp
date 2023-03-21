#include<stdio.h>
#include<math.h>
int main(int argc, char** argv[])
{
	float num,quadrado,raiz;
	printf("Digite um numero:\n");
	scanf("%f",&num);
	if(num > 0)
	{
		raiz=sqrt(num);
		printf("\n A sua raiz e:\n %f",raiz);
	}
	else
	{
		quadrado=pow(num,2);
		printf("\n O seu quadrado e:\n %f",quadrado);
	}
	return 0;
		
	}


