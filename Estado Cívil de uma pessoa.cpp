#include <stdio.h>
#include <stdlib.h>
int main(int argc,char ** argv)
{
	char estado_civil;
	printf("Digite uma letra:\n C-Casado\n S-Solteiro\n V-Viuvo\n D-Divorciado\n");
	scanf("%c",&estado_civil);
	fflush(stdin);
	switch(estado_civil)
	{
		case 'C':
			printf("\n Casado");
			break;
			case 'S':
				printf("\n Solteiro");
			    break;
			    case 'V':
			    	printf("\n Viuvo");
			    	break;
			    	case 'D':
			    		printf("\n Divorciado");
			    		break;
			    		default:
			    			printf("\n Erro");
	}
	getchar();
	return 0;
}
