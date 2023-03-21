#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(int argc, char** argv)
{
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	switch(numero)
	{
		case 1:
			printf("\n Um");
			break;
			case 2:
				printf("\n Dois");
				break;
				case 3:
				  printf("\n Tres");
				  break;
					case 4:
					printf("\n Quatro");
					break;
					case 5:
						printf("\n Cinco");
						break;
							case 6:
							printf("\n Seis");
							break;
								case 7:
								printf("\n Sete");
						     	break;
									case 8:
									printf("\n Oito");
									break;
										case 9:
										printf("\n Nove");
										break;
												case 10:
												printf("\n Dez");
												break;
													case 11:
													printf("\n Onze");
													break;
														case 12:
														printf("\n Doze");
														break;
															default:
															printf("\n Erro");
															break; 
	}
	getchar();
	return 0;
}
