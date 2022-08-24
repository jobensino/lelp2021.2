#include <stdio.h>
/*
	Autor: 1� semestre
	- Dados os tr�s valores a, b, c quaisquer verificar 
	  se os valores representam os lados de um tri�ngulo, 
	  e se essa condi��o for verdadeira informar se 
	  � tri�ngulo ret�ngulo ou n�o.
	  
tipo_dado NOME_SUBPROGRAMA ( PARAMETROS )
{
	c�digo do subprograma
}
tipo_dado: char, int, float, double, void
	  
*/

int ehTriangulo(float x,float y,float z) 
{
	if (y<x+z && x<y+z && z<y+x) {
		return 1; // eh triangulo
	}
	else {
		return 0;
	}
}

int ehRetangulo(float x,float y,float z) 
{
	if (y*y==x*x+z*z || x*x==y*y+z*z || z*z==y*y+x*x) {
		return 1; // eh retangulo
	}
	else {
		return 0;
	}
}

void mostraDados(int istri,int isret)
{		
	if (istri==1) {
		printf("\nos lados formam um triangulo");
		if (isret==1){
			printf("\nos lados formam um triangulo retangulo");			
		}
	}
	else
	{
		printf("\nos lados nao formam um triangulo");		
	}
}

int main()
{
	float a,b,c;
	int ehTri,ehRet;
	
	// entrada de dados - subproblema-1
	printf("Informa lado-1: ");
	scanf("%f",&a);
	printf("Informa lado-2: ");
	scanf("%f",&b);
	printf("Informa lado-3: ");
	scanf("%f",&c);
	
	// verificar se triangulo - subproblema-2
	ehTri = ehTriangulo(a,b,c);
	
	// verificar se triangulo retangulo - subproblema-3
	ehRet = ehRetangulo(a,b,c);
	
	// exibi��o de dados
	mostraDados(ehTri,ehRet);
	
}

