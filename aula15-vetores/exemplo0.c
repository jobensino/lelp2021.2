#include <stdio.h>
/*
	Autor: 1� semestre
	- Pr�tica de vetores: preechimento e exibi��o de um vetor
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
	
	// exibi��o do vetor	
	for (i=0;i<tam;i=i+1){
		printf("nota[%i] = %.2f\n",i+1,notas[i]);
	}
}
