#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Autores: Claudio Henrique, Diule Guerra, Juliana Souza, Lucicleide Oliveira            Data: 17/08/2022

    4. Desenvolva um programa que receba nome, sexo e nota finais (entre 0 e 10) de
	um conjunto de alunos. O programa deverá exibir o nome e nota da mulher que
	obteve a melhor nota e se a menor nota foi de um homem. As notas só devem ser
	aceitas se estiverem no intervalo entre 0 e 10. O sexo só deve ser aceito se for
	masculino ou feminino. A leitura dos dados é encerrada mediante questionamento
	ao usuário. 
*/

int main()
{
      //Declaração de variáveis
      int resp, c=1, verificador,f=0,m=0;
      char nome[100], sexo[100],  sexomenor[100], masc[10]="m", fem[10]="f",nomefem[100],nomemasc[100];
      float nota, maiorfem=0,menornota;
    
      //Entrada de dados e computação
      do
	  {
	  	printf("Informe o nome da pessoa[%i]: ",c);
	  	scanf("%s",nome);
	  	
	  	do
	  	{
	  		printf("Informe o sexo da pessoa[%i] Digite[feminino ou masculino]: ",c);
	  		scanf("%s", sexo);
			
			if( !(0==strcmp(sexo,fem) || 0==strcmp(sexo,masc)))			
	  		{
	  			printf("\nValor invalido!\n");
			}
			 			
		}while(0!=strcmp(sexo,masc) && 0!=strcmp(sexo,fem));
	
		
		do{
				printf("Informe a nota da pessoa[%i]: ",c);
	  		    scanf("%f",&nota);
				
		}while( !(nota>=0 && nota<=10) ) ;	
	  	
	  	// descobrindo maior nota entre as mulheres
		if(strcmp(sexo,fem)==0)
	  	{
			if(f==0){
	  			maiorfem=nota;				
	  			strcpy(nomefem,nome);
			}
			else if (nota>=maiorfem){
	  			maiorfem=nota;				
	  			strcpy(nomefem,nome);				
			}
			f++;
		}  
		
		// descobrindo a menor nota e o sexo 
		if(c==1)
		{
	  		menornota=nota;
	  		strcpy(sexomenor,sexo);
		}
		else if (nota<menornota)
  		{
	  		menornota=nota;
	  		strcpy(sexomenor,sexo);
		}
		printf("deseja continuar? Digite[1 = sim / 0 = nao]: ")	;
		scanf("%i",&resp);	
		c++;
      	
	}while(resp==1);
	
	//Resultados
	if(f>0)
	{
		printf("a maior nota feminina: %s - : %f ",nomefem,maiorfem);	
	}
	else
	{
		printf("nao foi informado nenhuma nota feminina ");	
	}
	
	if(strcmp(sexomenor,masc)==0)
	{
		printf("a menor nota foi de um homem. ");
    }
	else
	{
		printf("a menor notao nao foi nota masculina");
	}	
}

