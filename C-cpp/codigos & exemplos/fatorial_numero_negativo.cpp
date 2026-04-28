#include <stdio.h>
#include <stdlib.h>
int main ( ) {
	 int fator, num;
    double fatorial;	 
	 
	 printf ("digite um numero e veja o fatorial.\n");
	 scanf ("%d", &num);
	 
	 if (num > 0){
	 	 for (fatorial = 1,fator = 1; fator <= num;fator ++)
            fatorial = fatorial * fator;
		 printf ("O valor de fatorial eh: %.3f \n", fatorial);
	 }
    else printf ("Nao existe fatorial negativo \n");
    
    printf ("\n\n");
    system ("pause");
    return 0;
}
