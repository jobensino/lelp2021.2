#include <stdio.h>

/*
Autor: 1�  semestre

Desenvolva um programa que preencha um vetor com trinta n�meros inteiros. Em
seguida deve-se copiar os elementos desse vetor para um outro vetor de tal forma
que seus elementos fiquem invertidos, ou seja, o 1� elemento do primeiro vetor
passa a ser o �ltimo do segundo vetor, o 2� elemento passa a ser o pen�ltimo e
assim por diante. Ao final deve-se exibir os dois vetores de forma a visualizar a
invers�o dos elementos.

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
	
	// exibi��o
	for (i=0;i<tam;i++){
		printf("A[%i] = %i, B[%i] = %i\n",i+1,A[i],i+1,B[i]);
	}
}

