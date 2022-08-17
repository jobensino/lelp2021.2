#include <stdio.h>

/*
Autor: Josildo 	   Data: 21/07/2022
- Mostrar os múltiplos de 3 da sequencia 1,2,3,4...n 
*/

int main()
{
	int n;
	int cont;
	
	printf("Informe n: ");
	scanf("%i",&n);

    for (cont=1; cont<=n; cont=cont+1 ) // cont++
	{    	
	    if (cont%3==0) {
	    	printf("%i \t",cont);    
		}
	}
	printf("\nPrograma encerrado!!\n");	
}

/*
    for ( inicializaco; condicional; avanço contador )
    {
    
	}
*/
