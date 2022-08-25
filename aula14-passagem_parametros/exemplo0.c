#include <stdio.h>
/*
	Autor: 1º semestre
	- Prática de passagem de parametros.	  
*/

void sub1(int a,int b) 
{
	printf("\n[sub1-antes]: a=%i,b=%i",a,b);
	a = a + 2;
	b = b + 2;
	printf("\n[sub1-depois]: a=%i,b=%i",a,b);
}

void sub1ref(int *a,int *b) 
{
	printf("\n[sub1-antes]: a=%i,b=%i",*a,*b);
	*a = *a + 2;
	*b = *b + 2;
	printf("\n[sub1-depois]: a=%i,b=%i",*a,*b);
}

int main()
{
	int a,b;
	
	a = 5;
	b = 10;
	
	printf("\n[main-antes]: a=%i,b=%i",a,b);
	
	sub1ref(&a,&b);

	printf("\n[main-depois-1]: a=%i,b=%i",a,b);
	
	sub1ref(&a,&b);

	printf("\n[main-depois-2]: a=%i,b=%i",a,b);
}

