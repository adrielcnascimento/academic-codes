#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int num, cont, asterisco;
	 
	 printf ("mostra um triangulo dado um valor\n");
	 printf ("digite um numero: ");
	 scanf  ("%d", &num);
	 
	 printf ("\n");
	 for (cont = 1; cont <= num;cont ++){
	 	  for (asterisco = 1; asterisco <= cont; asterisco ++)
		  		printf ("*");
		  		printf ("\n");  		
   }
   
   printf ("\n\n\n");
   system ("pause");
   return 0;
}
