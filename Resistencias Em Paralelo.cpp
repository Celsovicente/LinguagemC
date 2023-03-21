#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv) 
{
  float Rt=1,R1,R2;
	do
	{
	printf("\n Digite o valor da 1 Resistencia:\n");
	scanf("%f",&R1);
	printf("\n Digite o valor da 2 Resistencia:\n");
	scanf("%f",&R2);
	Rt=(R1*R2)/(R1+R2);
	printf("\n A Resistencia total e:\n %f",Rt);	
	}
	while (R1!=0 || R2!=0);
	getchar();
	return 0;
}
