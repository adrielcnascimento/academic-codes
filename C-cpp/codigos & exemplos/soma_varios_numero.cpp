/* SOMA VARIOS NUMEROS USANDO SENTINELA */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	 int num, soma = 0;
	 
	 printf ("Calcula a soma de varios numeros. \n");
	 printf ("digite 1000 para encerar o programa. \n");
	 printf ("digite um numero: \n");
	 scanf ("%d", &num);
	 
	 while (num < 1000){ 	 //enquanto o num for diferente de 1000	 		 					  
	    soma = soma + num;	// o loop se repetira
		 printf ("digite 1000 para encerar o programa. \n");
	    printf ("digite um numero: \n");
       scanf ("%d", &num);
	 }	
	 
	 printf ("\nO valor da soma eh:  %d", soma);
	 printf ("\n\n\n");
	 system ("pause");
	 return 0;
}	 
