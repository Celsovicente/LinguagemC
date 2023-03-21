#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{

	int seg,hora=0,minuto=0,s=0;
	printf("Digite um numero:");
	scanf("%d",&seg);
	if(seg < 60)
	{
		printf("\n %d:%d:%d\n",hora,minuto,s);
	}
	else if(seg >= 60 && seg <= 3600)
	{
		minuto=seg / 60;
	    s=seg % 60;
		printf("\n %d:%d:%d\n",hora,minuto,s);	
	}
	else if(seg > 3600)
	{
		hora=seg / 3600;
		minuto=((seg % 3600) / 60);
		s=seg%minuto;
		printf("\n %d:%d:%d\n",hora,minuto,s);
	}
	getchar();
	return 0;
}
