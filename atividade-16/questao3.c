#include <stdio.h>

/*
	Autor: 1º  semestre
	
	Desenvolver um programa que receba o mês (número obrigatoriamente entre 1 e
	12) e preencha um vetor com temperaturas (graus Celsius) para cada dia daquele
	mês. A partir do vetor de temperaturas, o programa deve exibir a média das
	temperaturas do mês, dia mais quente e quantos dias tiveram temperatura acima
	da média. Considerar que a quantidade de temperaturas pode variar de acordo
	com mês entre 28 a 31 valores.
*/

#define tam 31

int main(){
	
	float T[tam];
	float s,m;
	int mes,n,i;
	
	do{
		printf("Informe o mes [1..12]: ");
		scanf("%i",&mes);
	} while ( !(mes>=1 && mes<=12) );
	
	// descobrindo quantidade dias do mes
	switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			n = 31;
		    break;
		case 2: 
		    n = 28;
		    break;
		default: n = 30;    
	}

	// preencher o vetor de temperaturas
	printf("Temperaturas: \n");
	for (i=0;i<n;i++){
		printf("Dia %i/%i: ",i+1,n);
		scanf("%f",&T[i]);
	}
	
	// calcular a medias das temperaturas
	s = 0;
	for (i=0;i<n;i++){
		s = s+T[i];
	}
	m = s/n;
	
}
