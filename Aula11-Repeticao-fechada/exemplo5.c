
#include <stdio.h>
#include <string.h>
/*
Autor:
	Desenvolva um programa que receba nome e idade de trinta 
	pessoas e informe nome e idade do mais jovem.
*/

#define nletras 100
#define qtpessoas 5

int main()
{
	char nome[nletras],nome_jovem[nletras];
	int c,idade,menor_idade;
	
	for (c=1;c<=qtpessoas;c=c+1)
	{ 	
		printf("Informe nome[%i]: ",c);
		scanf("%[^\n]s",nome);
		
		printf("Informe idade[%i]: ",c);
		scanf("%i",&idade); getchar();
		
		if (c==1) // estou no primeiro valor ?
		{
			menor_idade = idade;
			strcpy(nome_jovem,nome);
		}
		else if (idade<menor_idade){
			menor_idade = idade;
			strcpy(nome_jovem,nome);
		}
	
	}
	printf("A menor idade: %i\n",menor_idade);
	printf("Nome do mais jovem: %s\n",nome_jovem);
}
