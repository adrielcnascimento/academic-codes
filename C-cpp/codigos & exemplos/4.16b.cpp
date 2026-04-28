#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int num, cont, asterisco;
	 
	 printf ("mostra um triangulo dado um valor\n");
	 printf ("digite um numero: ");
	 scanf  ("%d", &num);
	 
	 for (cont = num; cont >= 0;cont --){
	 	  for (asterisco = cont; asterisco > 0; asterisco --)
		  		printf ("*");
		  		printf ("\n");  		
   }
   
   printf ("\n");
   system ("pause");
   return 0;
}
