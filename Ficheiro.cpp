#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void ProcessarFicheiros(FILE *, unsigned int []);
void ImprimirResultados (unsigned int []);
int main(int argc, char** argv) 
{
	FILE *PtFich;
	unsigned int ContCaracteres[26];
	if( argc < 2)
	{
		fprintf(stderr,"Uso: %s ficheiro\n",argv[0]);
		exit (EXIT_FAILURE);
	}
	if((PtFich = fopen (argv[1], "r"))==NULL)
	{
		fprintf(stderr,"Erro na abertura do ficheiro %s\n",argv[1]);
		exit (EXIT_FAILURE);
	}
	ProcessarFicheiros (PtFich,ContCaracteres);
	ImprimirResultados (ContCaracteres);
	fclose(PtFich);
	return EXIT_SUCCESS;
	getchar();
	return 0;
}
