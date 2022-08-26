#include <stdio.h>
#include <string.h>

/*
	Autor: 1º semestre
	Desenvolver um programa que receba uma frase (com limite de 1000 caracteres)
	informe a quantidade de vogais da frase detalhando cada uma delas.
*/
#define tam 1000

int main(){
	char frase[tam];
	int n,i,cont[5];
	
	printf("Informe a frase: ");
	scanf("%[^\n]s",frase);
	
	n = strlen(frase);
	
	for(i=0;i<5;i++) {
		cont[i] = 0;
	}
	
	for (i=0;i<n;i++){
		switch (frase[i]){
			case 'a': 
			case 'A': cont[0]++;break;	
			case 'e': 
			case 'E': cont[1]++;break;	
			case 'i': 
			case 'I': cont[2]++;break;	
			case 'o': 
			case 'O': cont[3]++;break;	
			case 'u': 
			case 'U': cont[4]++;break;	
		}
	}
	
	printf("\nA frase: %s\n",frase);
	printf("\nQuantidade de vogais\n");
	printf("   A = %i\n",cont[0]);
	printf("   E = %i\n",cont[1]);
	printf("   I = %i\n",cont[2]);
	printf("   O = %i\n",cont[3]);	
	printf("   U = %i\n",cont[4]);	
}
