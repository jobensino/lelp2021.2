#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* Equipe 5: Cl�udio Crisostomo, Eveny Neves, Ronald Nepomuceno, Vilmar Pereira
   e Wesley Luiz Data de entrega: 08/08/2022

    Construa um programa que receba oitenta n�meros inteiros quaisquer e exiba a
quantidade de n�meros primos inteiros positivos digitados.
    */

int main(){
     
     //variaveis 
    int op=0, i=0, num, cont, isPrimo;
  
    // entrada de dados
        while(i<80){
          i=i+1;
          isPrimo = 0; 
          printf("digite 0 numero(%i): ",i);
          scanf("%i", &num);
        

            //computa��o
            for(cont = 1; cont < num; cont ++)
                if(num % cont == 0)
                    isPrimo++;
                    
                if(isPrimo == 1){
                  
                   op=op+1;}
                   
        }
           //exibi��o
           printf("\ntotal de primos: [ %i ]\n",op);
                  
    
    system("pause");
    return 0;
}

