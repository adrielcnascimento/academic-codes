#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int num, cont = 1, asterisco, vezes;
	 
	 printf ("Desenha graficos de barras \n");
	 
	 for (vezes = 1; vezes <= 5; vezes ++){
	 	  printf ("digite um numero entre 0 e 30: \n");
	 	  scanf  ("%d", &num);
	 	  
     	  for (asterisco = 1; asterisco <= num; asterisco ++)
 	          printf ("*");
             printf ("\n");
	      }
  
	printf ("\n\n\n");
	system ("pause");
	return 0;
}	 
