#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
	char nome;
	float Md_final,valor_mensal,nova_mensal;
	printf("Digite o nome do Aluno:\n");
	scanf("%c",&nome);
	printf("Digite a media final e a mensalidade:\n");
	scanf("%f%f",&Md_final,&valor_mensal);
	
	if(Md_final>9.0 && Md_final<=10.0)
	{
		
		nova_mensal=valor_mensal*15/100;
		
	printf("\n A nova mensalidade e:\n %f \n O nome do Aluno e:\n %c \n O conceito classificado e:\n A",nova_mensal,nome);
	
	}
	else if(Md_final>7.5 && Md_final<=9.0)
	{
		
		nova_mensal=valor_mensal*10/100;
		
		printf("\n A nova mensalidade e:\n %f \n O nome do Aluno e:\n %c \n O conceito classificado e:\n B",nova_mensal,nome);
	
	}
	else if(Md_final>6.0 && Md_final<=7.5)
	{
		
		nova_mensal=valor_mensal*5/100;
	    
		printf("\n A nova mensalidade e:\n %f \n O nome do Aluno e:\n %c \n O conceito classificado e:\n C",nova_mensal,nome);

	
	}
	else if(Md_final>4.0 && Md_final<=6.0)
	{
		
		nova_mensal=valor_mensal*0/100;
		
	printf("\n A nova mensalidade e:\n %f \n O nome do Aluno e:\n %c \n O conceito classificado e:\n D",nova_mensal,nome);

    
	}
	else if(Md_final <= 4.0) 
	{
    	
		nova_mensal=valor_mensal*0/100;
    
	printf("\n A nova mensalidade e:\n %f \n O nome do Aluno e:\n %c \n O conceito classificado e:\n E",nova_mensal,nome);
	
	}
	getchar();
	return 0;
	}
