#include <stdio.h>
/*
	Autor: 1� semestre
	- Dados sal�rios de trinta funcion�rios, desenvolver um programa 
	  usando vetores que receba os sal�rios e informe o maior 
	  e o menor sal�rio.
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
	
	// descobrindo a posi��o do maior
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

	// exibi��o
	printf("\nMaior salario = %f, na posicao %i\n",salarios[imaior],imaior+1);
	printf("\nMenor salario = %f, na posicao %i\n",salarios[imenor],imenor+1);
	
}
