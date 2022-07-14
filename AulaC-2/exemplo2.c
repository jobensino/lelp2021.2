#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Autor: Josildo   Data: 14/07/2022
	- Dado três números quaisquer, uma vez que sejam diferentes entre si, selecionar e exibir o maior.
*/

// Programa principal

int main()
{
	// Declaração de variáveis
	float a,b,c;
	
	// Entrada de dados
	printf("Informe o primeiro numero: ");
	scanf("%f",&a);

	printf("Informe o segundo numero: ");
	scanf("%f",&b);

	printf("Informe o terceiro numero: ");
	scanf("%f",&c);
	
	 if ( a!=b && a!=c && b!=c) // os numeros sao diferentes
	 {
	 	if (a>b && a>c){ 
			printf(" %f e o maior.",a);
		}
	 	if (b>a && b>c){ 
			printf(" %f e o maior.",b);
		}
	 	if (c>b && c>a){ 
			printf(" %f e o maior.",c);
		}		
	 }
	 
	 //
	 if ( !(a!=b && a!=c && b!=c) ) // os numeros nao sao diferentes
	 {
	 	printf("Ha numeros iguais entre si.");
	 }
}
