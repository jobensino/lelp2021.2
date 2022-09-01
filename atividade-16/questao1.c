#include <stdio.h>

/*
Autor: 1º  semestre

Desenvolva um programa que preencha um vetor com trinta números inteiros. Em
seguida deve-se copiar os elementos desse vetor para um outro vetor de tal forma
que seus elementos fiquem invertidos, ou seja, o 1º elemento do primeiro vetor
passa a ser o último do segundo vetor, o 2º elemento passa a ser o penúltimo e
assim por diante. Ao final deve-se exibir os dois vetores de forma a visualizar a
inversão dos elementos.

*/

#define tam 5

int main(){ 
	
	int A[tam],B[tam];
	
	int i,j;
	
	// preenchimento do vetor
	for (i=0;i<tam;i++){
		printf("A[%i]: ",i+1);
		scanf("%i",&A[i]);
	} 		
	
	// Copia A para B invertendo ordem dos elementos
	j = tam-1;
	for (i=0;i<tam;i++){
		B[j] = A[i];
		j = j-1;
	}
	
	// exibição
	for (i=0;i<tam;i++){
		printf("A[%i] = %i, B[%i] = %i\n",i+1,A[i],i+1,B[i]);
	}
}

