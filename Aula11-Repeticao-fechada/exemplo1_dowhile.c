#include <stdio.h>

/*
Autor: Josildo 	   Data: 21/07/2022
- Mostrar os n�meros da sequencia 1,2,3,4...n 
*/

int main()
{
	int n;
	int cont;
	
	printf("Informe n: ");
	scanf("%i",&n);

    // inicializacao da contagem
    cont = 1;
    
    do
	{   
	    if (n>=cont) {
	    	printf("%i \t",cont);
		}	
    	
		// avan�o da contagem
    	cont = cont + 1;
	} while (cont<=n); // condi��o de parada
	printf("\nPrograma encerrado!!\n");	
}

/*
    do
    {
    
	} while ( condicional );
*/
