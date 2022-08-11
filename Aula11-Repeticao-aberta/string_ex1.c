#include <stdio.h>
#include <string.h>

#define LIMPABUFFER {char c; while ((c = getchar()) != '\n' && c != EOF);}

#define SZ 100
#define nloop 5

int main()
{
	char nome[SZ];
	int idade,c;
	
	for(c=1;c<=nloop;c++){
		printf("\nFicha: %i\n",c);
		
		printf("  Informe seu nome:  ");
		scanf("%10[^\n]s",nome); LIMPABUFFER
				
		printf("  Qual sua idade %s ? ",nome);
		scanf("%i",&idade); LIMPABUFFER			
	}
		
}
