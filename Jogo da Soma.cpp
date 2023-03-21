#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
int main(int argc, char** argv) 
{
	int i=0,j=1;
	int resposta,erros=0,acertos=0;
	char opcao;
	inicio:
	system("color 0b");
		for(j=1;j<=10;j++)
		{
			printf("Qual a resposta %d + %d?",i,j);
			scanf("%d",&resposta);
			
			getchar();
			
			if(resposta !=(i+j))
			{
				erros++;
				printf("Resposta Errada!\n");
			}
			else
			{
				acertos++;
				printf("Resposta Certa!\n");
			}
		}
		printf("Acertos = %d\n",acertos);
		printf("\n Erros = %d\n",erros);
		meio:
			printf("Deseja continuar?\n s-sim\n n-nao:\n");
	        opcao=toupper(getche () );
		    getchar();
			switch(opcao)
			{
				case 'S':
					i++;
					goto inicio;
					break;
				case 'N':
					goto fim;
					break;
					default:
						printf("Opcao invalida\n");
						goto meio;
			}
			fim:
			system("PAUSE");
	return 0;
}
