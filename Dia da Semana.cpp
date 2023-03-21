#include<stdio.h>
#include <iostream>
int main(int argc, char** argv) 
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	switch(numero)
	{
		case 1:
			printf("\n Domingo");
			break;
			case 2:
				printf("\n Segunda");
				break;
				case 3:
					printf("\n Terca Feira");
					break;
					case 4:
						printf("\n Quarta Feira");
						break;
						case 5:
							printf("\n Quinta Feira");
							break;
							case 6:
								printf("\n Sexta Feira");
								break;
								case 7:
									printf("\n Sabado");
									break;
									default:
									printf("\n Erro");
									break;	
	}
	getchar();
	return 0;
}
