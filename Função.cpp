#include <stdio.h>
#include <stdlib.h>
 void horaria (int segundos)
 {
 	int h,s,m,r;
 h=segundos / 3600;
 r=h*(segundos / 3600);
 m=r/60;
 s=m*(r / 60);
   printf("\n %i",h);
   printf("\n %i",m);
   printf("\n %i",s);
}
int main(int argc, char** argv) 
{
	int segundos;
	printf("Digite o numero de segundos:\n");
	scanf("%i",&segundos);
	
	horaria(segundos);
	getchar();
	return 0;
}
