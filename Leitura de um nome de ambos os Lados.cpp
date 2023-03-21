#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <locale.h>
int main(int argc, char** argv[])
{

int x,y,tam;
setlocale(LC_ALL,"po­rtuguese");
char nome[30];
printf("Digite uma palavra: ");
gets(nome);
tam = strlen(nome);
printf("\n A palavra de tras pra frente e: ");
for (x=tam-1; x >= 0; x--)
printf("%c",nome[x]);
printf("\n\n");
system("pause");
getchar();
return 0;
}
