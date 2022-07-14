#include <stdio.h>
#include <math.h>

/*
  Autor: Josildo   Data: 19/05/2022
  - Dado um número inteiro qualquer informar seu sucessor 
  	bem como a potenciação desse número por um expoente qualquer.
*/

int main()
{
	int n,e,s,p;
	
	x= 5;
		// entrada de dados
	printf("Informe um inteiro qualquer: ");
	scanf("%i",&n);
	
	printf("Informe o expoente: ");
	scanf("%i",&e);
	
	// computação
	s = n+1;
	p = pow(n,e);
	
	// resultado
	printf("\n n=%i, seu sucessor=%i, %i elevado %i=%i\n",n,s,n,e,p); 
}
