
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 	 
	 double limite, soma = 0;
	 int fatorial, fator, numerador;
	 
	 printf (" CALCULA A SEQUENCIA E MOSTRA O RESULTADO:\n");
	 printf ("       1   +   2   +   3   +    N         \n"
	         " S =  ---     ---     ---    ------       \n"
             "       0!      1!      2!   (N -1)!       \n");
            
   printf ("\nDigite o valor limite da soma ");
   scanf ("%d", &limite);
   numerador = 1;
   while (soma <= limite) {		 
		 for (fatorial = 1,fator = 1; fator < numerador - 1; fator ++)
            fatorial = fatorial * fator;
						 
		 soma = soma + (float)numerador / fatorial;
		 numerador++;	 
	 }
	 printf ("O valor da sequencia eh: %.2f\n", soma);
	 printf ("\n\n");
	 system ("pause");
	 return 0;
}
