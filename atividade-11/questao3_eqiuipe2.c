#include <stdio.h>
#include <stdlib.h>
#define nnum 30

/*
Autores: Claudio Henrique, Diúle Fagundes, Juliana Souza, Lucicleide Oliveira.  Data: 10/08/22

    3. Desenvolva um programa que receba trinta números inteiros quaisquer informados
    pelo usuário e exiba a média somente dos números impares positivos.

*/

int main()
{
    //declaração de variáveis
        int num, n=1, media, somatorio=0, quantimpar=0;


    //computacao e entrada de dados
        while (n<=3)
        {
        printf("Informe um numero[%i]: ",n);
        scanf("%d", &num);


        if  (num%2!=0 && num>0)
        {
            somatorio= somatorio+num; 
             quantimpar=quantimpar+1;
        }

        n=n+1;
        }
        
        media =0;
        if (quantimpar>0)
           media=somatorio/quantimpar;

    //Resultados

    printf("A media dos numeros impares e %i", media);

}
