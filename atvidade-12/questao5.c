#include <stdio.h>

/* Autor; Gabriel Conrado
A s�rie de Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,...
Escreva um programa que receba um conjunto de n�meros e informe se o n�mero
pertence ou n�o a s�rie de Fibonacci. A digita��o dos n�meros finaliza com a
entrada do valor �999.*/


int main ()
{
    int pt0,pt1,pt2,pt3,n;
    int i,achou;    
    pt0=0;
    pt1=1;
    pt2=0;
    pt3=0;

	do {
		printf("Informe o numero  ser comparado: ");
	    scanf("%i", &n);

	    pt0=0;
	    pt1=1;
	    pt2=0;
	    pt3=0;
		achou=0;
		for (i=0;i<n;i++)
    	{    
        	pt2 = pt0 + pt1;
        	if(pt2 == n)
        	{
        		achou = 1;
            	break;
        	}
        
        	pt0 = pt1;
        	pt1 = pt2;
    	}
    	
    	if (achou==1) {
    		printf("\n %i pertence a Fibonacci\n", n);  
		}
		else
		{
    		printf("\n %i nao pertence a Fibonacci\n", n);  
		}
				    
	} while(n!=-999);	
        
}

