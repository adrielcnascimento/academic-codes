/* SERÁ PAR OU IMPAR? */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num;
    
    system ("color 80");
    
    printf ("Digite um numero e veja se ele eh par ou impar\n");
    scanf ("%d", &num);
    
    if (num % 2 == 0)  // se o resto da divisão for 0 ele é par.
    printf ("Ele e par!\n"); 
    
    if (num % 2 != 0)       // se o resto da divisão não for 0 ele não é par.
    printf ("Ele nao eh par!\n");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;    
}
