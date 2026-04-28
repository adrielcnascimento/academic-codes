#include <stdio.h>
#include <stdlib.h>

int even (int);

int main ( ) {
    int numero;
    
    printf ("mostra se o numero digitado eh par ou não\n");
    printf ("digite um numero: ");
    scanf  ("%d", &numero);
    
    if (even(numero) != 0)
         printf ("ele eh par\n");
    else printf ("ele nao eh par\n");
    
    printf ("\n\n\n");em
    system ("pause");
    return 0;
}

int even (int num) {
    if (num % 2 == 0)
       return 1;       
    else return 0;
}
