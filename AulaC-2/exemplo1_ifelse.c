#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Autor: Josildo   Data: 14/07/2022
	- Dado um número inteiro qualquer informar se ele é par ou impar.
*/

// Programa principal

int main()
{
	// Declaração de variáveis
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
