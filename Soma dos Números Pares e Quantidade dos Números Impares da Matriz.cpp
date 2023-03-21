#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
 {
 	int matriz[5][5],i=0,j=0,soma_par=0,quant_impar=0,p=0;
 	for(i=0;i<5;i++)
 	{
 	    for(j=0;j<5;j++)
 		{
 		    printf("Entre com um Valor para a Matriz:");
 		    scanf("%i",&matriz[i][j]);
 		}
 	}
 	for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
 			if(matriz[i][j] %2 == 0)
 			{
 				soma_par+=matriz[i][j];
			}
			 else
			 {
			 	quant_impar++;
			 }
		 }
	 }
	 for(i=0;i<5;i++)
	 {
	 	for(j=0;j<5;j++)
	 	{
	 	    printf("[%i]",matriz[i][j]);
		}
		 printf("\n\n");
	 }
	printf("\n A soma dos numeros pares e:\n %i",soma_par);
	printf("\n A quatindade de numeros impares e:\n %i",quant_impar);
	getchar();
	return 0;
}
