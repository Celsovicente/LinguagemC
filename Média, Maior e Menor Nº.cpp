#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	int num,s=0,q=0,s1=0,q1=0,q2=0,maior=0,menor=0;
	float Media,Media_par,percentagem;
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&num);
		q++;
		s+=num;
		if(num == 1)
		{
			maior=num;
			menor=num;
		}
		else if(maior < num) 
		{
			maior=num;
		}
		else if(num < menor)
		{
			menor=num;
		}
		if(num %2 == 0)
		{
			q1++;
			s1+=num;
		}
		else
		{
			q2++;
		}
	}while(num!=0);
	Media=s/q;
	Media_par=s1/q1;
	percentagem=q2*100/q;
	printf("\n A media e:\n %f",Media);
	printf("\n A media dos numeros pares e:\n %f",Media_par);
	printf("\n A percentagem dos numeros impares e:\n %f",percentagem);
	printf("\n O maior numero e:\n %i",maior);
	printf("\n O menor numero e:\n %i",menor);
	getchar();
	return 0;
}
