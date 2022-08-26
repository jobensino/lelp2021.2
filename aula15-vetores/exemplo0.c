#include <stdio.h>
/*
	Autor: 1º semestre
	- Prática de vetores: preechimento e exibição de um vetor
*/
#define tam 5

int main()
{
	float notas[tam];
	int i;
	
	// preenchimento do vetor
	for (i=0;i<tam;i=i+1){
		printf("Informe nota[%i]: ",i+1);
		scanf("%f",&notas[i]);
	}	
	
	// exibição do vetor	
	for (i=0;i<tam;i=i+1){
		printf("nota[%i] = %.2f\n",i+1,notas[i]);
	}
}
