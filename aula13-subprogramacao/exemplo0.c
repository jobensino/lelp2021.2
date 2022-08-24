#include <stdio.h>
/*
	Autor: 1� semestre
	- Desenvolver um programa que receba dois n�meros e 
	  mostre o resultado da soma desses n�meros.

tipo_dado NOME_SUBPROGRAMA ( PARAMETROS )
{
	c�digo do subprograma
}
tipo_dado: char, int, float, double, void
	  
*/
void mostraDados(int s)
{		
	printf("+===============================+\n");
	printf("\n A soma dos numeros = %i \n",s);	
	printf("+===============================+\n");
}

int soma2num( int a, int b )
{
	int s;
	
	s = a + b;
	
	return s;
}

// programa principal
int main()
{
	int n1,n2;
	int r;
	
	printf("\nIniciando programa principal...\n\n");
	
	//  entrada  de dados - subproblema-1
	printf("Informe n1: ");
	scanf("%i",&n1);
	printf("Informe n2: ");
	scanf("%i",&n2);
	
	// Somar dois n�meros - subproblema-2
	r = soma2num(n1,n2);
	
	// Exibir a soma dos dois n�meros - subproblema-3
	mostraDados(r);	
	
	printf("\nEncerrando programa principal...\n");
}

