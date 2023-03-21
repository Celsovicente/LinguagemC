#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) 
{
	float venda,venda_final,desconto,acrescimo;
	int opcao;
	printf("Digite o valor da Venda:\n");
	scanf("%f",&venda);
    printf("Escolha a Opcao de Pagamento:\n 1-Venda a Vista com desconto de 10%%\n 2-Venda a Prazo 30 Dias com desconto de 5%%\n ");
	printf("3-Venda a Prazo 60 Dias com o mesmo preco\n 4-Venda a Prazo 90 Dias com acrescimo de 5%%\n");
	printf(" 5-Venda com Cartao de Debito com desconto de 8%%\n 6-Venda com Cartao de Credito desconto de 7%%\n");
	scanf("%i",&opcao);
	fflush(stdin);
	switch(opcao)
	{
		case 1:
			desconto=((venda*10)/100);
			venda_final+=(venda-desconto);
			printf("\n A Venda final e:\n %f",venda_final);
			break;
			case 2:
				desconto=((venda*5)/100);
				venda_final+=(venda-desconto);
				printf("\n A Venda final e:\n %f",venda_final);
				break;
				case 3:
					venda_final+=venda;
					printf("\n A Venda final e:\n %f",venda_final);
					break;
					case 4:
						acrescimo=((venda*5)/100);
						venda_final+=(venda+acrescimo);
						printf("\n A Venda final e:\n %f",venda_final);
						break;
						case 5:
							desconto=((venda*8)/100);
							venda_final+=(venda-desconto);
							printf("\n A Venda final e:\n %f",venda_final);
							break;
							    case 6:
								desconto=((venda*7)/100);
								venda_final+=(venda-desconto);
								printf("\n A Venda final e:\n %f",venda_final);
								break;
								default:
									printf("\n Opcao Invalida");
									break;
	}
	getchar();
	return 0;
}
