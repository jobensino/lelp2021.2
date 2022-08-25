#include <stdio.h>
/*
	Autor: 1º semestre
	- Desenvolva um programa que receba um conjunto de salários 
	  e o informe o maior salário. A entrada de dados se encerra 
	  mediante questionamento ao usuário.	  	  
*/

void entradaDados(float *s,int *r)
{
	printf("Informe salario: ");
	scanf("%f",s);
	
	printf("Deseja continuar [1=Sim;0=Nao] ? ");
	scanf("%i",r);
}

void descobreMaior(int c,float s,float *m){
	
	if (c==1){
		*m = s;
	}
	else if (s>*m){
		*m = s;
	}	
}

void mostraDados(float s){
	printf("\nO maior salario = %f \n",s);
}

int main() 
{
	float salario,smaior;
	int resp,c=1;
	
	do {
		
		entradaDados(&salario,&resp);	
		
		descobreMaior(c,salario,&smaior);
		
		c++;
			
	} while (resp==1);
	
	mostraDados(smaior);
		
}
