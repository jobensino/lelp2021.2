#include<stdio.h>
#include<math.h>
/* Autores: Brenda Oliveira, Bruno Sales, G�ssica Lima, Marco Silva e Marta Santos
Desenvolva um programa que receba as m�dias finais de vinte alunos e exiba 
quantos ir�o � prova final considerando que a m�dia para aprova��o � um valor 
qualquer informado pelo usu�rio.
*/
#define nums 4
int main()
{
int cont, contprov;
float med_f, Med_aprov;
contprov=0;
cont=1;
med_f=0;
Med_aprov=0;

printf("Informe a m�dia para aprova��o");
scanf("%f",&Med_aprov);



for(cont=1; (cont<=nums); cont=cont+1)
   {
    printf("Informe a m�dia do aluno");
scanf("%f",&med_f);
if (med_f < Med_aprov)
{
contprov=contprov+1;
}
}
printf("quantos far�o a prova final = %i\n",contprov);
    }

