#include<stdio.h>
#include<math.h>
/* Autores: Brenda Oliveira, Bruno Sales, Géssica Lima, Marco Silva e Marta Santos
Desenvolva um programa que receba as médias finais de vinte alunos e exiba 
quantos irão à prova final considerando que a média para aprovação é um valor 
qualquer informado pelo usuário.
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

printf("Informe a média para aprovação");
scanf("%f",&Med_aprov);



for(cont=1; (cont<=nums); cont=cont+1)
   {
    printf("Informe a média do aluno");
scanf("%f",&med_f);
if (med_f < Med_aprov)
{
contprov=contprov+1;
}
}
printf("quantos farão a prova final = %i\n",contprov);
    }

