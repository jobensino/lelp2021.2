#include <stdio.h>

/*
Autor: Josildo 	   Data: 21/07/2022
- Mostrar o somatório dos números da sequencia 1,2,3,4...n 
*/

int main()
{
	int n;
	int cont,s;
	
	printf("Informe n: ");
	scanf("%i",&n);

    s = 0; //inicializacao do somatorio
    for (cont=1; cont<=n; cont=cont+1 ) // cont++
	{    
	    s = s + cont; // acumulando cont	
	}
	printf("\no somatorio = %i \n",s);    
	printf("\nPrograma encerrado!!\n");	
}

/*
    for ( inicializaco; condicional; avanço contador )
    {
    
	}
*/
