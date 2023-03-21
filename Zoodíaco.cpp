#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char** argv) 
{
    int opcao;
    printf("Escolha opcao de acordo com o seu Aniversario:\n");
    printf("\n 1-De 21 de Janeiro ate 19 de Fevereiro\n 2-De 20 de Fevereiro ate 20 de Marco\n 3-De 21 de Marco ate 20 de Abril");
    printf("\n 4-De 21 de Abril ate 20 de Maio\n 5-De 21 de Maio ate 20 de Junho\n 6-De 21 de Junho ate 21 de Julho");
    printf("\n 7-De 22 de Julho ate 22 de Agosto\n 8-De 23 de Agosto ate 22 de Setembro\n 9-De 23 de Setembro ate 22 de Outubro");
    printf("\n 10-De 23 de Outubro ate 21 de Novembro\n 11-de 22 de Novembro ate 21 de Dezembro\n 12-De 22 de Dezembro ate 20 de Janeiro\n");
    scanf("%i",&opcao);
    getchar();
    switch(opcao)
    {
    	case 1:
    		printf("\n O seu Signo e Aquario");
    		break;
    			case 2:
    			printf("\n O seu Signo e Peixes");
    			break;
    				case 3:
    				printf("\n O seu Signo e Aries");
    				break;
    					case 4:
    					printf("\n O seu Signo e Touro");
    					break;
    						case 5:
    						printf("\n O seu Signo e Gemeos");
    						break;
    							case 6:
    							printf("\n O seu Signo e Cancer");
    								break;
							    		case 7:
							    		printf("\n O seu Signo e Leao");
							    		break;
								    		case 8:
								    		printf("\n O seu Signo e Virgem");
								    		break;
										    		case 9:
										    		printf("\n O seu Signo e Libra");
										    		break;
												    	case 10:
												    	printf("\n O seu Signo e Escorpiao");
												    	break;
														    	case 11:
														    	printf("\n O seu Signo e Sagitario");
														    	break;
														    		case 12:
														    		printf("\n O seu Signo e Capricornio");
														    		break;
														    		default:
														    			printf("\n Opcao Invalida!");
														    			break;
	}
	getchar();
	return 0;
}
