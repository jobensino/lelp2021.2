#include <stdio.h>
/*
	Autor: 1º semestre
	- Dado uma turma de vinte alunos, desenvolver um programa 
	  usando vetores que permita informar as notas da turma. 
	  Após preenchimento deve-se acrescer todas notas de 0,5 ponto 
	  e exibir as notas na ordem inversa  (do último valor informado 
	  para o primeiro).
*/
#define tam 8

int main()
{
	float notas[tam];
	int i;
	
	// preenchimento do vetor
	for (i=0;i<tam;i=i+1){
		printf("Informe nota[%i]: ",i+1);
		scanf("%f",&notas[i]);
	}	
	
	// acrescentar 0.5 
	for (i=0;i<tam;i++){
		notas[i]=notas[i]+0.5;
	}
	
	// exibição do vetor ordem inversa
	for (i=tam-1;i>=0;i=i-1){
		printf("nota[%i] = %.2f\n",i+1,notas[i]);
	}
}
