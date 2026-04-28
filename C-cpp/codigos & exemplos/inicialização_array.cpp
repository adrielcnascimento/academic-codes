#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int indice, array [] = {10, 20, 30 ,40, 50};
    
    printf ("Inicializacao de array\n");
    
    for (indice = 0; indice < 5; indice ++)
        printf ("%d\n", array[indice]);
        
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
