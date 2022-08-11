#include <stdio.h>
/*
 Desenvolva um programa que receba nome e preço de uma relação de trinta 
produtos e mostre nome e preço do produto mais caro.
*/
int main(void) {
  int cont;
  float valor;
  float mvalor = 0;
  char nome[30];
  char mvnome[30];
 
  for(cont=1;cont<=30;cont=cont+1)
    {
      printf("digite o valor do produto [%i]:", cont);
      scanf("%f",&valor);
      printf("digite o nome do produto [%i]:", cont);
      scanf("%s",nome);

	  if (cont==1) {
        mvalor = valor;
        strcpy(mvnome,nome);	  	
	  }	
      else if(valor>mvalor)
      {
        mvalor = valor;
        strcpy(mvnome,nome);        
      }
    }
  printf("o produto de maior valor e o %s que custa %f", mvnome,mvalor);
  
  return 0;
}

