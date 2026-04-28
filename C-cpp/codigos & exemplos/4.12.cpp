/* A SOMA DE NUMEROS PARES */

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont = 2, soma = 0;
    
    while (cont <= 30){
          soma = soma + cont;
          cont += 2;
    }
    
    printf (" valor da soma dos pares eh: %d", soma);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
