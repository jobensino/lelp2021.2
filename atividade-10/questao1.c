#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*

Dado um número inteiro positivo qualquer, verificar se ele possui cinco dígitos. Em caso
afirmativo, decidir se esse número é palíndromo ímpar (número palíndromo é aquele que
é igual quando lido nos dois sentidos). Exemplos de números palíndromos impares: 98589,
73137 e 10801.
*/

int main()
{
	int n;
	int u,d,c,m,dm,reverso;
	int palindromo;
	
	printf("Digite um numero de 5 digitos inteiro e positivo: ");
	scanf("%i",&n);
	
	u = n % 10;
	d = (n % 100) / 10;
	c = (n % 1000) / 100;
	m = (n % 10000) / 1000;
	dm = n / 10000;
	reverso = (u * 10000 )+ (d * 1000) + (c * 100) + (m * 10) + dm;
	palindromo = n / reverso; 
		
	if(n>0)
	{
		if(n/10000 >=1)
		{
			if(n/10000<=9)
			{
				if(reverso == n && n%2 != 0)
				{
					printf("\nO numero é palindromo impar\n");
				}
				else
				{
					printf("\nO numero nao é palindromo impar\n");
				}
			}
			else
			{
				printf("\nInvalido. Digite conforme foi pedido.\n");
			}
		}
		else
		{
			printf("\nInvalido. Digite conforme foi pedido.\n");
		}
	}
	else
	{
		printf("\nDigite um numero positivo\n");
	}
}

