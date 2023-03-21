#include <stdio.h>
#include <stdlib.h>
int main(int arg, char** argv[])
{
int vetor[10], i, soma, quant = 0 , maior_valor = 0 ,menor_valor = 0;
float media;
for(i = 0; i < 10; i++)
{
printf("Digite o %d numero:\n",i + 1);
scanf("%d",&vetor[i]);

soma += vetor[i];
if(vetor[i] == 1)
{
maior_valor = vetor[i];
menor_valor = vetor[i];
}else{

if(vetor[i] > maior_valor) 
maior_valor = vetor[i];

if(vetor[i] < menor_valor)
menor_valor = vetor[i];

}
}
media = soma / 10;

printf(" A Media dos numeros e: %f\n",media);
printf(" O maior valor e: %d \n",maior_valor);
printf("O menor valor e: %d\n",menor_valor);
getchar();
}
