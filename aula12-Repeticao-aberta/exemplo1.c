#include <stdio.h>

/*
	Autor: Turma ABI-Computa��o
    Desenvolva um programa que receba um conjunto de notas 
	de uma turma e informe a quantidade de estudantes aprovados 
	considerando a nota para aprova��o maior ou igual � 7,0. 
	Uma nota negativa encerra a sequ�ncia de notas.
*/

int main()
{
	float nota;
	int c,caprov;
	
	c = 1;
	caprov = 0;
	
	do {
		printf("Informe nota[%i]: ",c);
		scanf("%f",&nota);
		
		if (nota>=7) {
			caprov++;
		}
		
		c=c+1;
	} while (nota>=0);
	printf("\nQuantidade de aprovados: %i\n",caprov);
	printf("\nPrograma encerrado!!\n");
}
