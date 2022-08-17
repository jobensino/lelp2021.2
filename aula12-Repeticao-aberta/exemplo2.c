#include <stdio.h>

/*
	Autor: Turma ABI-Computa��o
    Desenvolva um programa que receba um conjunto de notas de uma turma 
	e informe a m�dia de turma. A digita��o de notas � encerrada mediante 
	questionamento ao usu�rio e deve-se assegurar que somente 
	notas v�lidas (0 � 10) ser�o informadas. 
*/

int main()
{
	float nota,snota,m;
	int c,resp,cnota;
	
	c = 1;
	snota = 0;
	cnota = 0;
	do {
		do {
			printf("Informe nota[%i]: ",c);
			scanf("%f",&nota);
			if (nota<0 || nota>10){
				printf("\n %f fora do intervalo 0..10\n",nota);
			}
		} while ( !(nota>=0 && nota<=10) );
		
		snota = snota + nota;
		cnota = cnota + 1;
		
		printf("Continua digitacao [1=Sim;0=Nao]? ");
		scanf("%i",&resp);
		
		c = c + 1;
		
	} while (resp==1);
	
	m = 0;
	if (cnota>0) {
		m = snota/cnota;
	}
	printf("\nA media da turma = %f\n",m);
}
