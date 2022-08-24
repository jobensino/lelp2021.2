#include <stdio.h>
/*
	Autor: 1º semestre
	- Dado um número inteiro obrigatoriamente não negativo 
	  deve-se exibir seu fatorial.
	  
tipo_dado NOME_SUBPROGRAMA ( PARAMETROS )
{
	código do subprograma
}
tipo_dado: char, int, float, double, void
	  
*/

double fatorial(double x) 
{
	// referencia master-da-web
	
	double fat;
	
	for (fat=1;x>1;x=x-1){
		fat=fat*x;
	}	
	
	return fat;
}

void mostraDados(double fat,double y)
{		
	printf("+===============================+\n");
	printf("\n O fatorial de %.0lf = %.0lf \n",y,fat);	
	printf("+===============================+\n");
}

int main()
{
	double n,f;
	
	// entrada de dados - subproblema-1
	do {
		printf("Informe n: ");
		scanf("%lf",&n);
	} while(n<0);

	// Calcular fatorial - subproblema-2
	f = fatorial(n);
	
	// Exibição de dados - subproblema-3
	mostraDados(f,n);		
}
