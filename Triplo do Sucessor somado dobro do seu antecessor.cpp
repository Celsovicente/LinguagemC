#include<stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int trip_sucess,num;
	printf("Digite um numero:\n");
	scanf("%i",&num);
	trip_sucess=num+3+2;
	printf("\n O triplo do sucessor somado ao dobro do seu antecessor e:\n %i",trip_sucess);
	getchar();
	return 0;
}
