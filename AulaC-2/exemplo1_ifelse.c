#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Autor: Josildo   Data: 14/07/2022
	- Dado um n�mero inteiro qualquer informar se ele � par ou impar.
*/

// Programa principal

int main()
{
	// Declara��o de vari�veis
	int n;
	
	// Entrada de dados
	printf("Informe o numero: ");
	scanf("%f",&n);

	 if ( n % 2==0 ) 
	 {
		printf(" %i o par.",n);
	 }	 
	 else  
	 {
		printf(" %i o impar.",n);
	 }
}
