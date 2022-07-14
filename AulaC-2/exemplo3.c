#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	Autor: Josildo   Data: 14/07/2022
    - Dado um número inteiro qualquer, caso seja um valor de 1 à 7, 
	informar o dia da semana correspondente por extenso, do contrário 
	exibir mensagem de erro.
*/

// programa principal

int main()
{
	int d;
	char dia_extenso[30];
	
	// entrada de dados
	printf("Informe um numero entre 1 e 7: ");
	scanf("%i",&d);
	
	switch (d)
	{
		case 1: strcpy(dia_extenso,"Domingo"); 
				break;
		case 2: strcpy(dia_extenso,"Segunda-feira"); 
				break;
		case 3: strcpy(dia_extenso,"Terca-feira"); 
				break;
		case 4: strcpy(dia_extenso,"Quarta-feira"); 
				break;
		case 5: strcpy(dia_extenso,"Quinta-feira"); 
				break;
		case 6: strcpy(dia_extenso,"Sexta-feira"); 
				break;
		case 7: strcpy(dia_extenso,"Sabado"); 
				break;
		default: strcpy(dia_extenso,"Dia invalido!!"); 
 
	}
	
	printf("\n%s\n",dia_extenso);	
}
