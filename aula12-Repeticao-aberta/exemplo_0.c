#include <stdio.h>

/*
	Autor:
	- Exemplo de menu de opções com operação iterativa aberta
*/

int main(){
	
	int op;
	
	do {
		
		printf("1. Calcular median\n");
		printf("2. Descobrir o mais velho\n");
		printf("3. Verificar numero palindromo\n");
		printf("4. Verificar numero primo\n");
		printf("9. Sair\n");
		scanf("%i",&op);
		
		switch (op){
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
		}
		
	} while (op!=9);
}
