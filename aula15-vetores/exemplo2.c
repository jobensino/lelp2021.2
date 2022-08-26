#include <stdio.h>
/*
	Autor: 1º semestre
	- Dados salários de trinta funcionários, desenvolver um programa 
	  usando vetores que receba os salários e informe o maior 
	  e o menor salário.
*/
#define tam 8

int main()
{
	float salarios[tam];
	int i,imaior,imenor;
	
	// preenchimento do vetor
	for (i=0;i<tam;i=i+1){
		printf("Informe salario[%i]: ",i+1);
		scanf("%f",&salarios[i]);
	}	
	
	// descobrindo a posição do maior
	imaior = 0;
	for (i=1;i<tam;i++){
		if (salarios[i]>salarios[imaior]){
			imaior=i;
		}
	}

	imenor = 0;
	for (i=1;i<tam;i++){
		if (salarios[i]<salarios[imenor]){
			imenor=i;
		}
	}

	// exibição
	printf("\nMaior salario = %f, na posicao %i\n",salarios[imaior],imaior+1);
	printf("\nMenor salario = %f, na posicao %i\n",salarios[imenor],imenor+1);
	
}
