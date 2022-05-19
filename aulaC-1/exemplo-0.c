#include <stdio.h>
#include <math.h>

int main()
{
	int a,r;
	
	// entrada de dados
	printf("Informe um inteiro qualquer: ");
	scanf("%i",&a);
	
	// computação
	r = pow(a,2);
	
	//resultados
	printf("\n\n %i ao quadrado = %i \n\n ",a,r);
}
