#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(int argc, char** argv)
{
	int n,soma=0,quant=0;
	float Media=0,Percentagem=0;
	for(int i=1;i<20;i++)
	{
		n=Random () % 100;
		printf("%d\n",n);
		if(n % 2 == 0)
		{
			soma+=n;
		}
		else
		{
			quant++;
		}
	}
	Media=soma/20;
	Percentagem=((quant*100)/20);
	printf ("\n A soma dos numeros pares e:\n %d",soma);
	printf ("\n A quantidade dos numeros pares e:\n %d",quant);
	printf ("\n A Media dos numeros impares: e\n %f",Media);
	printf ("\n A Percentagem  dos numeros impares e:\n %f",Percentagem);	
	getchar();
	return 0;
}
