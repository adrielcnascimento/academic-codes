#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont;
    
    printf ("GERA 10 VALORES ALEATORIOS\n");
    
    for (cont = 1; cont <= 10; cont ++)
        printf ("%dO. valor gerado = %d\n", cont, rand());
        
    system ("pause");
    return 0;
}
