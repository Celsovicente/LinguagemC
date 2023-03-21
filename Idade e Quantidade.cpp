#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	int idade,i,quant=0,quant1=0,quant2=0,quant3=0,quant4=0;
	float Percentagem,Percentagem1;
	for(i=1;i<=8;i++)
	{
		printf("Digite a idade do individuo:\n");
		scanf("%i",&idade);
		if(idade >= 1 && idade <= 15)
		{
			quant++;
		}
		else if(idade >= 16 && idade <= 30)
		{
			quant1++;
		}
		else if(idade >= 31 && idade <= 45)
		{
			quant2++;
		}
		else if(idade >= 46 && idade <= 60)
		{
			quant3++;
		}
		else if(idade > 60)
		{
			quant4++;
		}
	}
	Percentagem=(quant*100)/8;
	Percentagem1=(quant4*100)/8;
	printf("\n A quantidade da 1 faixa etaria e:\n %i",quant);
	printf("\n A quantidade da 2 faixa etaria e:\n %i",quant1);
	printf("\n A quantidade da 3 faixa etaria e:\n %i",quant2);
	printf("\n A quantidade da 4 faixa etaria e:\n %i",quant3);
	printf("\n A quantidade da 5 faixa etaria e:\n %i",quant4);
	printf("\n A Percentagem da primeira faixa etaria e:\n %f",Percentagem);
	printf("\n A Percentagem da quarta faixa etaria e:\n %f",Percentagem1);
	getchar();
	return 0;
}
