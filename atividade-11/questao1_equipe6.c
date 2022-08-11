#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Autores: Brenda Oliveira, Bruno Sales, Géssica Lima, Marco Silva e Marta Santos

Construa um programa que resolva os seguintes situacoes:
a. Exiba todos os multiplos de x existentes entre a e b, onde a, b e x sao
numeros quaisquer informados pelo usuario.
b. Exiba somatorio e media dos multiplos de x que sejam par existentes entre
a e b, onde a, b e x sao numeros quaisquer informados pelo usuario.
Deve-se usar o menu de opoes (switch-case opcionalmente) para o usuario
selecionar que item deseja.
*/

int main()
{
	int a,b,x;
	int op, cont,cpar,somapar;
	float media;
	
	printf("Digite o valor de a: ");
	scanf("%i",&a);
	printf("Digite o valor de b: ");
	scanf("%i",&b);
	printf("Digite o valor de x: ");
	scanf("%i",&x);
	
	
	printf("\nDigite 1 para exibir todos os multiplos de %i existentes entre %i e %i\n",x,a,b);
	printf("\nDigite 2 para exibir o somatorio e media dos multiplos de %i que sejam par existentes entre %i e %i\n",x,a,b);
	scanf("%i",&op);
	if(op!= 1 && op!=2)
	{
		printf("\nDeve escolher apenas opcao 1 ou 2!\n");
	}
	else
	{
		switch(op)
		{
			case 1:
			for(cont=a;cont<=b;cont=cont+1)
			{
				if(cont % x == 0)
				{
					printf("%i \t",cont);
				}
			}
			break;
			case 2:
			somapar=0;
			cpar = 0;
			media = 0;
			for(cont=a;cont<=b;cont=cont+1)
			{
				if(cont % 2 == 0)
				{
					if(cont % x == 0)
					{
						cpar=cpar+1;
						somapar = somapar + cont;
					}
				}
			}
			media=0;
			if (cpar>0)
			  media = (float)somapar/cpar;
			
			printf("\nSomatorio: %i",somapar);
			printf("\nMedia: %f",media);
			break;
		}
	}	
}

