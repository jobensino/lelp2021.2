#include <stdio.h>

/*
Autor: Josildo 	   Data: 21/07/2022
- Desenvolva um programa que receba vinte números inteiros 
  e mostre quantidade de impares e a média dos pares.
*/

#define qt_nums 20

int main()
{
	int cont,n;
	int cimpar,spar,cpar;
	float m;
	
	cimpar = 0;
	spar = 0;
	cpar = 0;
	for (cont=1;cont<=qt_nums;cont=cont+1)
	{
		printf("\nInforme n[%i]: ",cont);
		scanf("%i",&n);
		
		if (n%2!=0){
			cimpar = cimpar+1;
		}
		if (n%2==0){
			spar = spar + n;
			cpar = cpar + 1;
		}
	}
	printf("A quantidade de impares=%i\n",cimpar);
	m = 0;
	if (cpar>0){
		m = spar/cpar;
	}
	printf("media dos pares = %f",m);
	  
}
