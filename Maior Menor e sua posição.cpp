#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv[])
{
system("color 0a");
int vetor[15], i, menor = 0, maior = 0, posicao_maior = 0, posicao_menor = 0;
for(i = 0; i < 15; i++)
{
printf("Entre com o %d numero do vetor: ", i);
scanf("%d", &vetor[i]);
}
for(i = 0; i < 15 ;i++)
{
printf("[%i]\n",vetor[i]);
if(i == 0)
{
maior = vetor[i];
menor = vetor[i];
posicao_maior = i;
posicao_menor = i;

}
else
{

if(vetor[i] > maior)
{
maior = vetor[i];
posicao_maior = i;
}
if(vetor[i] < menor)
{
menor = vetor[i];
posicao_menor = i; 
} 
}
}

printf("\n O maior valor e: %d",maior);
printf("\n O menor valor e: %d",menor);
printf("\n A posicao do maior valor e: %d",posicao_maior);
printf("\n A posicao do menor valor e: %d",posicao_menor);
getchar();
}
