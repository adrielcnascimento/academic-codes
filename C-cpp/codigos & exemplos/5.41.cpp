/* Funcao recursiva para fatoriais */
#include <stdio.h>
#include <stdlib.h>

long fatorial(long) ;
int main ( ) {
    int cont ;
    
    for (cont = 1; cont <= 5; cont++)
    printf("%2d! = %ld\n", i, fatorial(i));
    printf ("\n\n\n");
    system ("pause"); 
    return 0;
}
long fatorial(long numero){
     if (numero <= 1)
        return 1;
     else 
     printf ("\tnumero = %ld e fatorial = %ld\n", numero - 1, fatorial(numero -1 ));
     return (numero * fatorial(numero - 1));
}
