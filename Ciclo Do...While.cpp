#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv)
{
	int numero,s=0,s1=0,q=0,q1=0,q2=0,maior=0,menor;
	float Media,Media_pares,Percentagem;
	system("Color 0a");
	do
	{
		printf("Digite um numero:\n");
		scanf("%i",&numero);
		s+=numero;
		q++;
		if(numero % 2 == 0)
		{
			s1+=numero;
			q1++;
		}
		else
		{
			q2++;
		}
		if(numero == 1)
		{
			maior=numero;
			menor=numero;
		}
		else if(numero > maior)
		{
			maior=numero;
		}
		else if(numero < menor)
		{
			menor=numero;
		}
	}while(numero!=30000);
	Media=s/q;
	Media_pares=s1/q1;
	Percentagem=q2*100/q;
	printf("\n A Media total e:\n %f",Media);
	printf("\n A Media dos numeros pares e:\n %f",Media_pares);
	printf("\n A percentagem dos numeros empares e:\n %f",Percentagem);
	printf("\n O maior numero e:\n %i",maior);
	printf("\n O menor numero e:\n %i",menor);
	getchar();
	return 0;
}
