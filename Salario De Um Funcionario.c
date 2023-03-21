#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	float salario,novo_salario,aumento_salarial;
	char categoria;
	unsigned char nome;
	printf("Digite o nome do Funcionario:\n");
	scanf("%s",&nome);
	printf("Digite salario do Funcionario:\n");
	scanf("%f",&salario);
	/*
	 A categoria é representa por letras que vão de A até Z
	*/
	printf("Digite a sua categoria:\n");
	scanf("%c",&categoria);
	if (categoria == 'A' || categoria == 'C' || categoria == 'F' || categoria == 'H')
	{
		novo_salario=salario*10/100;
		aumento_salarial=salario+novo_salario;
		printf("\n O Aumento Salarial e de:\n %f",aumento_salarial);
	}
	else if (categoria == 'B' || categoria == 'D' || categoria == 'E' || categoria == 'I' || categoria == 'J' || categoria == 'T')
	{
		novo_salario=salario*15/100;
		aumento_salarial=salario+novo_salario;
		printf("\n O Aumento Salarial e de:\n %f",aumento_salarial);
	}
	else if (categoria == 'K' || categoria == 'R')
	{
		novo_salario=salario*25/100;
		aumento_salarial=salario+novo_salario;
		printf("\n O Aumento Salarial e de:\n %f",aumento_salarial);
	}
	else if (categoria == 'L' || categoria == 'M' || categoria == 'N' || categoria == 'O' || categoria == 'P' || categoria == 'Q' || categoria == 'S')
	{
		novo_salario=salario*35/100;
		aumento_salarial=salario+novo_salario;
		printf("\n O Aumento Salarial e de:\n %f",aumento_salarial);
	}
	else if (categoria == 'U' || categoria == 'V' || categoria == 'X' || categoria == 'Y' || categoria == 'W' || categoria == 'Z')
	{
		novo_salario=salario*50/100;
		aumento_salarial=salario+novo_salario;
		printf("\n O Aumento Salarial e de:\n %f",aumento_salarial);
	}
	getchar();
	return 0;
}
