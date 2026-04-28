#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int num, cont, branco, asterisco = 1;
	 
	 printf ("Digite um numero e veja um triangulo: ");
	 scanf  ("%d", &num);
	 
	 for (cont = 1; cont <= num; cont ++){
	 	  for (branco = num; branco > asterisco; branco --)
	 	  		printf (" ");
	 	  for (asterisco = 1;asterisco <= cont;asterisco ++)
	 	  		printf ("*");
	  		printf ("\n");
     }
     
     printf ("\n\n");
     system ("pause");
     return 0;
}
