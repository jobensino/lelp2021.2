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

#define tam 30

void preencheVetor(int v[],int n){
	
	int i;
	
	for (i=0;i<n;i++){
		printf("A[%i]: ",i+1);
		scanf("%i",&v[i]);
	} 			
}

void copiaInvertido(int A[],int B[], int n){
	int i,j;

	j = n-1;
	for (i=0;i<n;i++){
		B[j] = A[i];
		j = j-1;
	}
	
}

void exibeDados(int A[],int B[], int n){
	
	int i;
	
	printf("\n\n");
	for (i=0;i<n;i++){
		printf("A[%i] = %i, B[%i] = %i\n",i+1,A[i],i+1,B[i]);
	}
	printf("\n\n");
	
}

int main(){ 
	
	int A[tam],B[tam];
		
	// preenchimento do vetor
	preencheVetor(A,5);
	
	// Copia A para B invertendo ordem dos elementos
	copiaInvertido(A,B,5);
	
	// exibição
	exibeDados(A,B,5);
}

