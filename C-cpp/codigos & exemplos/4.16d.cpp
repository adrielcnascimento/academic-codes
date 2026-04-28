#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int num, cont, asterisco, branco;
	 
	 printf ("mostra um triangulo dado um valor\n");
	 printf ("digite um numero: ");
	 scanf  ("%d", &num);
	 
	 for (cont = num; cont >= 1;cont --){
	 	  for (asterisco = 1; asterisco < cont; asterisco ++)
		  		printf (" ");
           for (branco = num; branco > cont; branco --)
		  		printf ("*");
		  		  
		  		printf ("\n");  		
   }
   
   printf ("\n");
   system ("pause");
   return 0;
}
