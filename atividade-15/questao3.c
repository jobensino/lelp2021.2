#include <stdio.h>
#include <stdlib.h>

/*
Autores: Brenda Oliveira, Bruno Sales, Géssica Lima, Marco Aurélio e Marta Santos

Um professor fez 3 provas durante um semestre, mas só vai levar em conta as
duas notas mais altas para cálculo da média. Desenvolva programa que receba o
valor das 3 notas, mostre como seria a média com essas 3 provas e a média com
as 2 notas mais altas.
*/

void entradaDados(float *x)
{
    printf("\nDigite a nota: ");
    scanf("%f",x);
}

float media(float s)
{
    float media = s/3;

    return media;
}

void escolhe2Maior(int c, float n, float *nmaior1, float *nmaior2)
{
    if(c==1)
    {
        *nmaior1=n;
	}
	else if (c==2) {
		if (n>*nmaior1)
		{
			*nmaior2=*nmaior1;
			*nmaior1=n;			
		}
        else *nmaior2=n;
    }
	else if(n>*nmaior1)
    {
		*nmaior2=*nmaior1; 	
        *nmaior1=n;    
	}
	else  if(n>*nmaior2)
    {
        *nmaior2=n;
    }
}

void exibeDados(float m1,float m2)
{
    printf("\nMedia com as 3 notas = %.1f\n",m1);
    printf("\nMedia com as 2 notas = %.1f\n",m2);
}

int main()
{
    float nota,soma,m1,m2,maior,maior1,maior2;
    int c;
    
	soma = 0;
    for(c=1;c<=3;c++)
    {
        entradaDados(&nota);
        soma = soma+nota;
        escolhe2Maior(c,nota,&maior1,&maior2);
        printf("maior1=%f maior2=%f\n",maior1,maior2);
    }

    m1=media(soma);
    m2=(maior1+maior2)/2;
    
    exibeDados(m1,m2);
}
