#include <stdio.h>

/*Equipe 5: Cl�udio Crisostomo, Eveny Neves, Ronald Nepomuceno, Vilmar Pereira e Wesley Luiz                    
   Data de entrega: 31/08/22
Desenvolver um programa que receba dois n�meros ??, ??. Caso ?? seja maior ou
igual ?? calcule e mostre a divis�o inteira ?? � ?? sem utiliza��o de operadores de
divis�o. Caso ?? seja menor que ?? calcule e mostre a multiplica��o ?? * ?? sem a
utiliza��o do operador de multiplica��o.
*/

int comparar(int num1,int num2){
	
  int count=0,i;
 
  if (num1 >= num2){
  	
    while(num1>=num2) //divisao inteira
	{ 
      num1=num1-num2;
      count=count+1;
     } 
	 return count;    
  }
  else   
  {
    for(i = 1; i <= num1; i++) // multiplica��o
	{
     	count = count + num2;
   }
   
   return count;
  }
}

void resultado(int count){
  printf("O resultado foi %i",count);
}

int main(){
  //variaveis
  int x,y,r;
  
  //entrada de dados
  printf("Digite x: ");
  scanf("%d",&x);

  printf("Digite y: ");
  scanf("%d",&y);
  
  //chamando a fun��o de comparar e computa��o
  r = comparar(x,y);
  
  //chamando a subrotina de resultado
  resultado(r);
      
  return 0;
}

