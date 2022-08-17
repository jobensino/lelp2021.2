#include <stdio.h>
#include <string.h>

/*
	Autor: Turma ABI-Computação
    Desenvolva um programa que receba nome e idade de um conjunto 
	de pessoas e informe nome e idade da pessoa mais jovem. 
	A idade deve ser validada (somente idades positivas são aceitas). 
	A sequência de dados se encerra mediante questionamento ao usuário. 
*/

int main()
{
	int resp,idade,c,idade_jovem;
	char nome[100],nome_jovem[100];
	
	resp = 1;
	c = 1;
	while (resp==1) {
		printf("Informe nome[%i]: ",c);
		scanf("%[^\n]s",nome);
		
		printf("Informe idade[%i]: ",c);
		scanf("%i",&idade);
		
		while(idade<=0){
			printf("Informe idade[%i]: ",c);
			scanf("%i",&idade);			
		}
		
		// descobre o mais jovem
		if (c==1){
			idade_jovem = idade;
			strcpy(nome_jovem,nome);
		}
		else if (idade<idade_jovem) {
			idade_jovem = idade;
			strcpy(nome_jovem,nome);
		}
		c = c + 1;
		
		printf("Continua digitacao [1=Sim;0=Nao]? ");
		scanf("%i",&resp); getchar();
	}
	printf("\nmais jovem = %s\n",nome_jovem);
	printf("\nidade do mais jovem = %i\n ",idade_jovem);
}
