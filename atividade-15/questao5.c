#include<stdio.h>

/*
Autor:Marco Silva, Gessica Lima, Brenda Oliveira, Bruno Sales e Marta
Data: 30/08/2022

Construa um programa que receba um conjunto de números inteiros e informe o sucessor primo do maior primo informado. O processo de digitação se encerra mediante questionamento ao usuário

*/

int ehPrimo(int n) {

 int resul=0, i;
 
 for(i=2; i<=n/2; i=i+1)
 {
      if(n % i == 0)
      {
       resul = resul + 1;
      }
 }
   
 return resul == 0;	
 
}

int maiorPrimo(int p, int x, int m)
{
 	int n = m;
 	int resul=0, i;
   
   if(ehPrimo(x))
   {
    if(p==1)
    {
      n = x;
    }
    else if(x > m)//Maior numero primo
    {
      n = x;
    }
   }
   
   return n;
}

int sucessorPrimo(int maiorPrimo)
{
int i,achou=0;

for (i=maiorPrimo + 1;achou==0;i++) {
	if (ehPrimo(i)) {
		achou = i;
	} 
}
 
return achou;

}

void entradaDado(int *Pmaior, int *Suc)
{
 int i=0, num, resp, sucess, theMaior;
 
 do
 {
  i++;
 
  printf("\nInforme um numero: ");
  scanf("%i",&num);
 
  theMaior=maiorPrimo(i,num,theMaior);
 
  printf("Deseja continuar ? [1 = Sim; 0 = Nao]: ");
  scanf("%i",&resp);
 
  }while(resp==1);

  sucess=sucessorPrimo(theMaior);
 
  *Pmaior = theMaior;
  *Suc = sucess;
}


void mostraDado(int mR, int sC)
{

 printf("\nO numero maior primo eh %i", mR);
 printf("\nO sucessor eh %i", sC);

}

int main() //Principal
{

int prim, sR;

entradaDado(&prim, &sR);

mostraDado(prim,sR);

}

