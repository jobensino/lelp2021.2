#include <stdio.h>

/*Equipe 5: Cláudio Crisostomo, Eveny Neves, Ronald Nepomuceno, Vilmar Pereira e Wesley Luiz                    
   Data de entrega: 31/08/22
Desenvolver um programa que receba dois números ??, ??. Caso ?? seja maior ou
igual ?? calcule e mostre a divisão inteira ?? ÷ ?? sem utilização de operadores de
divisão. Caso ?? seja menor que ?? calcule e mostre a multiplicação ?? * ?? sem a
utilização do operador de multiplicação.
*/

int mult(int a,int b){
	
	int i, r = 0;
	
	for(i = 1; i <= a; i++) // multiplicação
	{
	 	r = r + b;
	 	printf("%i\n",r);
	}
	
	return r;
	
}

int divi(int a,int b) {
	
	int i, r=0;
    
	while(a>=b) //divisao inteira
	{ 
	  printf("%i - %i\n",a,b);
      a=a-b;
      r=r+1;
    } 
     
	return r;    
	
}

int comparar(int num1,int num2){
	
 
  if (num1 >= num2){  
	 return 1; // divisao    
  }
  else   
  {
    return 2; // multiplicacao
  }
}

void resultado(int opcao,int r){ 
	
  if (opcao==1)	
  	printf("O resultado da divisao %i",r);

  if (opcao==2)	
  	printf("O resultado da multiplicacao %i",r);    
}

int main(){
  //variaveis
  int x,y,r,op;
  
  //entrada de dados
  printf("Digite x: ");
  scanf("%d",&x);

  printf("Digite y: ");
  scanf("%d",&y);
  
  //chamando a função de escolher se multiplica ou divide
  op = comparar(x,y);
  
  if (op==1) 
  	r = divi(x,y);
  else	
  	r = mult(x,y);
  
  //chamando a subrotina de resultado
  resultado(op,r);
      
  return 0;
}

