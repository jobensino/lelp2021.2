#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
void main(void)
{
	int n,c,d,u,m;
	char mtxt[30],
		 ctxt[30],
		 dtxt[30],
		 utxt[30],num_extenso[100];
	
	printf("Informe um numero entre 1 e 1000: ");
	scanf("%i",&n);

	for (n=1;n<=300;n++)
    if (n>=1 && n<=1000)
    {
    	m = n / 1000;
    	c = n % 1000 / 100;
		d = n % 100 / 10;
		u = n % 10;
		
		strcpy(utxt,"");
		strcpy(dtxt,"");
		
		if (d==1)
			switch (u)
			{
				case 0: strcpy(dtxt,"dez"); break;
				case 1: strcpy(dtxt,"onze"); break;
				case 2: strcpy(dtxt,"doze"); break;
				case 3: strcpy(dtxt,"treze"); break;
				case 4: strcpy(dtxt,"quatorze"); break;
			    case 5: strcpy(dtxt,"quinze"); break;
				case 6: strcpy(dtxt,"dezesseis"); break;
				case 7: strcpy(dtxt,"dezessete"); break;
				case 8: strcpy(dtxt,"dezoito"); break;
				case 9: strcpy(dtxt,"dezenove"); break;		     
		    }			
		else
			switch (u)
			{
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
		    
		switch (d)
		{
			case 0: strcpy(dtxt,""); break;
			case 2: strcpy(dtxt,"vinte"); break;
			case 3: strcpy(dtxt,"trinta"); break;
			case 4: strcpy(dtxt,"quarenta"); break;
		    case 5: strcpy(dtxt,"cinquenta"); break;
			case 6: strcpy(dtxt,"sessenta"); break;
			case 7: strcpy(dtxt,"setenta"); break;
			case 8: strcpy(dtxt,"oitenta"); break;
			case 9: strcpy(dtxt,"noventa"); break;		     
	    }
		switch (c)
		{
			case 0: strcpy(ctxt,""); break;
			case 1: if (d==0 && u==0) 
			           strcpy(ctxt,"cem"); 
					else 
			           strcpy(ctxt,"cento"); 
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
		switch (m)
		{
			case 0: strcpy(mtxt,""); break;
			case 1: strcpy(mtxt,"mil"); break;
		}
	    strcpy(num_extenso,"");
	    strcat(num_extenso,mtxt);
	    strcat(num_extenso," ");
	    strcat(num_extenso,ctxt);
	    
		if ( strlen(ctxt)>0 && strlen(dtxt)>0)
	    	strcat(num_extenso," e ");
		else if ( strlen(ctxt)>0 && strlen(utxt)>0)
	    	strcat(num_extenso," e");
	    else
	    	strcat(num_extenso," ");
	    
		strcat(num_extenso,dtxt);
	    
		if ( strlen(dtxt)>0 && strlen(utxt)>0)
	    	strcat(num_extenso," e ");
	    else
	    	strcat(num_extenso," ");
	    
		strcat(num_extenso,utxt);
		
		printf("%i = %s\n",n,num_extenso);	    
	}
	else
	   printf("\n%i fora do intervalor [1..1000].\n",n);
}
