#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int mes,dia;
	
	printf("informe dia: ");
	scanf("%i",&dia);

	printf("informe mes: ");
	scanf("%i",&mes);
	
	switch (mes){
		case 1: if (dia>=1 && dia<=21) {
					printf("Capricornio");
				} else if (dia>=22 && dia<=31)		
					printf("Aquario"); 
				else {
					printf("Dia invalido")
				}
									
				break;
				
	}
	
}
