#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>
#include<string.h>
limpar()
{
system("pause");
system("cls");
}
informacao() 
{
system("color 0b");
printf("\n \n ");
printf("\t \t Ol� eu sou o N++, sou o teu advers�rio Mental\n");
printf("\t \t Tu tens o Direito de dizer um n�mero em Que \n\t \t Eu estou a pensar e vice-versa, se tu acertas ganhas, se tu erras eu Ganho\n \n ");
printf("\t \t O Jogo tem 9 Tentativas os N�meros s�o de 0 � 5\n \n ");
}
int numero() 
{
int num = 0;
printf("\n \n ");
printf(" \t \t Muito Bem, Vamos Jogar\n \t \t Ser� Eu a pensar ou Voc� \n \t \t Digite 1 pra ser Eu a pensar\n \t \t Digite 2 pra ser Tu a pensar\n \t \t Digite: ");
scanf("%d", &num);
return num;
}
jogador1(int computador, int jogador) 
{
int i = 1, A = 0, B = 0;
system("cls");
while(i < 10)

{

srand((unsigned) time(NULL));
computador = rand() % 6 ;
printf("\n \n ");
printf("\t \t \tQual � o N�mero que o Computador vai Pensar? \n \t \t Digite: ");
scanf("%d", &jogador);

if(jogador == computador)
{
system("color 0a");
A ++;
printf("\n \n ");
printf("\t \t \tVoc� venceu \n\t \t \tComputador pensou tamb�m Em: %d \n \n", computador);
printf("\t \t \t Voc� pensou Em: %d", jogador);

printf("\t \t \tRest�o %d jogadas \n \n ", i );
limpar();
} 


else if(jogador != computador)
{
system("color 0c");
B++;
printf("\n \n ");
printf("\t \t\tVoc� Perdeu \n\t \t \tComputador pensou Em: %d \n \n", computador);
printf("\t \t \tVoc� pensou Em: %d", jogador);
printf("\t \t \tRest�o %d jogadas \n \n ", i );
limpar();

} 

i++;
}
printf("\n \n ");
printf("\t \t \t\tFim do Jogo\n");

printf("\t \t \t==================�===== \n");
printf("\t \t \t \tPontos \n ");
printf("\t \t \t==================�=====\n");
printf("\t \t \tComputador : %d\n", B );
printf("\t \t \tJogador : %d \n \n ", A );
} 
jogador2(int computador, int jogador) 
{

int i = 1, A = 0, B = 0;
system("cls");

while(i < 10)
{
srand((unsigned) time(NULL));
computador = rand() % 6 ;
printf("\n \n ");
printf("\t \t Digite o N�mero pra o Computador acertar: ");
scanf("%d", &jogador); 
if(computador == jogador)
{
system("color 0c");
B ++;
printf("\n \n ");
printf("\t \t \tComputador venceu \n \t \t \tComputador pensou Em: %d \n", computador);
printf("\t \t \tVoc� pensou Em: %d", jogador);
printf("\t \t \tRest�o %d jogadas \n \n ", i );
limpar();
}
else if(computador != jogador )
{
system("color 0a");
A ++;
printf("\n \n ");
printf("\t \t \tComputador Perdeu \n \t \t \tComputador pensou Em: %d \n", computador);
printf("\t \t \tVoc� pensou Em: %d", jogador);
printf("\t \t \tRest�o %d jogadas \n \n ", i );
limpar();
}

i++;
}
printf("\n \n ");
printf(" \t \t \t \tFim do Jogo\n");
printf("\t \t \t==================�=====\n");
printf("\t \t \t \tPontos\n");
printf("\t \t\t================�=======\n");
printf("\t \t \tComputador : %d\n ", B );
printf("\t \t \tJogador : %d \n \n ", A );



}
verificar(int computador, int jogador){
int num;
num = numero();
if(num == 1)
jogador1(computador, jogador);
else if(num == 2)
jogador2(computador, jogador);
else {
system("color 0c");
system("cls");
printf("\n \n ");
printf("\t \t \t Numero Iv�lido\n \n \n ");
}
} 
main(){
setlocale(LC_ALL, "portuguese");
int computador = 0, jogador = 0, num = 0,i = 1;
informacao();
limpar();
system("color 0a");
verificar(computador, jogador);
getchar();
}
