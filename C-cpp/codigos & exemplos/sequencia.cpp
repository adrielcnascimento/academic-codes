#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int vezes;
	 double soma = 0, num, fatorial, fator, divisao;
	 
	 printf (" CALCULA A SEQUENCIA E MOSTRA O RESULTADO:\n");
	 printf ("       1   +   2   +   3   +    N         \n"
	         " S =  ---     ---     ---    ------       \n"
             "       0!      1!      2!   (N -1)!       \n");
            
   printf ("\nDigite o valor de N: ");
   scanf ("%d", &vezes);
   
   for (num = 1;num <= vezes;num ++){
		 
		 for (fatorial = 1,fator = 1; fator <= num;fator ++)
            fatorial = fatorial * fator;
		 
		 soma = soma + ((num + 1) / fatorial);
		 
	 }
	 printf ("O valor da sequencia eh: %f\n", soma);
	 printf ("\n\n");
	 system ("pause");
	 return 0;
}
