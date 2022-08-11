//Alunos: Ana Carolina,Beatriz,Ingrid,Fernando,Matheus ornellas
/*Dado um numero inteiro qualquer, uma vez que seja positivo, desenvolva um programa:
a. Exibir todos os divisores desse número.
b. Contar todos os divisores desse número e a partir dessa contagem informar se é primo ou não primo

Deve-se usar o menu de opções switch-case opcionalmente para o usuário selecionar que item deseja*/
#include<stdio.h>
#include<stdlib.h>

void divi(int num,int cont){
   if(num >= cont)
   {
      if((num % cont) == 0)
         printf("%d\n", cont);
      divi(num,cont + 1);
      return;
   }
   else
      return;
}





int main(){

int a;
int num=0;
int x;
int i;
 int div=0;
printf("Digite 1 para exibir todos os divisores de um numero\n ou 2 para contar os divisores desse numero e saber se ele e primo ou n\n");
scanf("%d",&a);


   
switch(a){
case 1:

  printf("\nDigite o numero que deseja\n");
   scanf("%d", &num);
   
   printf("\nDivisores\n");
   divi(num,1);
   
   return 0;
   break;
   
   case 2:
   printf("\nDigite o numero que deseja\n");
   scanf("%d", &num);
  for(i = 1; i <= num; i++){
    if (num % i == 0) {
     div++;
    }
  }
  if (div == 2){
 
    printf("%d e primo ,seus divisores:", num);
    printf("\nDivisores\n");
   divi(num,1);}
  else{
 
    printf("O numero %d n e primo,seus divisores:", num);
     printf("\nDivisores\n");
   divi(num,1);

  return 0;
}
break;


default: printf("As opcoes sao 1 e 2");
   }
   
   
   
}

