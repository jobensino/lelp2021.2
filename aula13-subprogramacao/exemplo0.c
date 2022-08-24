#include <stdio.h>
/*
	Autor: 1º semestre
	- Desenvolver um programa que receba dois números e 
	  mostre o resultado da soma desses números.

tipo_dado NOME_SUBPROGRAMA ( PARAMETROS )
{
	código do subprograma
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
	
	// Somar dois números - subproblema-2
	r = soma2num(n1,n2);
	
	// Exibir a soma dos dois números - subproblema-3
	mostraDados(r);	
	
	printf("\nEncerrando programa principal...\n");
}

