/*  SEM COMENTÁRIOS   */
#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int cont = 1, produto = 1;
    
    for (; cont <= 15; cont +=2)
        produto = produto * cont;
        
    printf ("O valor dos produtos dos impares de 1 a 15 sera de: %d", produto);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
