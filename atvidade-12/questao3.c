#include <stdio.h>
#include <stdlib.h>


/* Autores: Claudio Henrique, Diule Guerra, Juliana Souza, Lucicleide Oliveira            Data: 17/08/2022

    3. Construa um programa que receba um conjunto de n�meros inteiros cuja
	quantidade de elementos n�o pode ultrapassar 100. Contudo, o usu�rio pode
	encerrar a digita��o a qualquer momento. Ao final da digita��o dos n�meros 
	o programa deve exibir:
	a) O sucessor do maior n�mero primo informado.
	b) A m�dia dos pares positivos m�ltiplos de 3.
      
*/
#define qt_max 100

int main()
{
      //Declara��o de vari�veis
      int num, c=1, resp,div=0,i=0,sucessor=0,maiorprim,p=0,somador=0,contador=0;
      float media;
     
      //Entrada de dados e computa��o
      do
	  {	  		
		printf("\nInforme um numero[%i]:\n ",c);
	  	scanf("%i",&num);

	  	div=0;
		//contagem de divisores 
	  	for(i=1;i<=num;i++)
	  	{
	  		if(num%i==0)
	  		{
	  			div++;
			}
		}
						
		if(div==2)
		{
			if (p==0) {
				maiorprim=num;
			}
			else if(num>maiorprim){
				maiorprim=num;
			}
			p++;
		}

		if(num%3==0 && num%2==0 && num>0) 
		{
			somador=somador+num;
			contador++;				
		}
	  	  	  	
	  	printf("\nDeseja continuar? Digite[1=Sim;0=Nao]\n");
      	scanf("%i",&resp);
	  		  	
	  	c++;
	  	
	  } while( resp==1 && c<=qt_max );

	  if(p>0)
	  {
	  	sucessor = maiorprim+1;
	  	printf(" e o sucessor do maior numero primo informado e: %i",sucessor);
	  }
	  else
	  {
	  	printf("Nao foi informado nenhum numero prinmo");
	  }

	  if(contador>0)
	  {
	  	media = somador/(float)contador;
	  	
	  	printf(" a media dos numeros pares multiplos de 3  positivos e: %f ",media); 	
	  }
	  else
	  {
	  	printf("nao foi informado valores positivos multiplos de 3 ");
	  }
	  
}

/*

			//contagem de divisores 
		  	for(i=1;i<=num;i++)
		  	{
		  		if(num%i==0)
		  		{
		  			div++;
				}
			}
			
			
			if(div==2&&p==0)
			{
				maiorprim=num;
				sucessor=num+1;
				p++;
			}
			else if(div==2&&num>maiorprim)
			{
				maiorprim=num;
				sucessor=num+1;
				p++;
			}
			
			
			if(num%3==0&&num>0)
			{
				somador=somador+num;
				contador++;				
			}
			

				  	  //Resultados
	  if(contador>0)
	  {
	  	media = somador/(float)contador;
	  	
	  	printf(" a media dos numeros multiplos de 3  positivos e: %f ",media); 	
	  }
	  else
	  {
	  	printf("nao foi informado valores positivos multiplos de 3 ");
	  }
	  
	  if(p>0)
	  {
	  	printf(" e o sucessor do maior numero primo informado e: %i",sucessor);
	  }
	  else
	  {
	  	printf("Nao foi informado nenhum numero prinmo");
	  }


*/
