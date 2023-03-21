#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
int a, b;
int soma_primos = 0, cont;

printf("Ponto inicial(a): ");
scanf("%i", &a);
printf("Ponto final(b): ");
scanf("%i", &b);

system("cls");
for(int i = a; i < b; i++)
{
cont = 0;
for(int j=1; j <= i; j++)
{
if(i % j == 0)
{
cont++;
}
}
if(cont == 2)
{
soma_primos += i;
}
}

setlocale(LC_ALL,"po­rtuguese");
printf("A soma dos números primos existentes entre %i e %i é: %i",a, b, soma_primos);
getchar();
return 0;
}
