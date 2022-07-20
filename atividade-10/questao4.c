#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int n,m,c,d,u;
	char mtxt[30],ctxt[30],dtxt[30],utxt[30];
	char num_extenso[100];
	
	// Entrada de dados
	printf("Informe um numero inteiro: ");
	scanf("%i",&n);

    if (n>=1 && n<=1000) {
    	m = n / 1000;
    	c = n % 1000 / 100;
    	d = n % 100 / 10;
    	u = n % 10;
    	
    	switch (m) {
    		case 0: strcpy(mtxt,""); break;
			case 1: strcpy(mtxt,"mil"); break;
		}
		
		switch (c){
			case 0: strcpy(ctxt,""); break;
			case 1: if (d==0 && u==0) {
						strcpy(ctxt,"cem");
					}
					else {
					   strcpy(ctxt,"cento"); 
					}
			        break;			
			case 2: strcpy(ctxt,"duzentos"); break;
			case 3: strcpy(ctxt,"trezentos"); break;
			case 4: strcpy(ctxt,"quatrocentos"); break;
			case 5: strcpy(ctxt,"quinhentos"); break;
			case 6: strcpy(ctxt,"seiscentos"); break;
			case 7: strcpy(ctxt,"setecentos"); break;
			case 8: strcpy(ctxt,"oitocentos"); break;
			case 9: strcpy(ctxt,"novecentos"); break;
		}
		
		switch (d) {
			case 0: strcpy(dtxt,""); break;
		}		

		switch (u) {
			case 0: strcpy(utxt,""); break;
			case 1: strcpy(utxt,"um"); break;
			case 2: strcpy(utxt,"dois"); break;
			case 3: strcpy(utxt,"tres"); break;
			case 4: strcpy(utxt,"quatro"); break;
			case 5: strcpy(utxt,"cinco"); break;
			case 6: strcpy(utxt,"seis"); break;
			case 7: strcpy(utxt,"sete"); break;
			case 8: strcpy(utxt,"oito"); break;
			case 9: strcpy(utxt,"nove"); break;
		}		
		
		strcpy(num_extenso,mtxt);
		strcat(num_extenso," ");
		strcat(num_extenso,ctxt);
		strcat(num_extenso," ");
		strcat(num_extenso,dtxt);
		strcat(num_extenso," ");
		strcat(num_extenso,utxt);
		
		printf("\n %i = %s",n,num_extenso);
	}
	else printf("O numero esta fora do intervalo 1..1000.");
}
