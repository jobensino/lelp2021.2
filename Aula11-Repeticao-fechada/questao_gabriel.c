#include <stdio.h>
#include <string.h>

#define nletras 100
#define qtpessoas 5

int main(){


	char nome[nletras], nome_jovem[nletras];
	int c,idade, menor_idade;
	
	for(c=1;c<=qtpessoas;c=c+1){
	
		printf("informe seu nome[%i]: ",c);
		scanf("%[^\n]s", nome);
		
		printf("informe a idade [%i] ",c);
		scanf("%i", &idade); getchar();
		
		if(c==1){
			menor_idade = idade;
			strcpy(nome_jovem,nome);
		}
		else if(idade < menor_idade){
			menor_idade = idade;
			strcpy(nome_jovem,nome);
						
		}
	}
	printf("a menor idade: %i\n", menor_idade);
	printf("nome do mais jovem: %s", nome_jovem);
}
