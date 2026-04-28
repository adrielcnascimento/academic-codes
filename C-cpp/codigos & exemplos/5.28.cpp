#include <stdio.h>
#include <stdlib.h>

int inverte_numero (int);

int main ( ) {
    int valor;
    
    printf ("Mostra o valor do numero digitado invertido:\n");
    printf ("digite um numero:\n");
    scanf  ("%d", &valor);
    
    printf ("%d", inverte_numero (valor));

    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int inverte_numero (int numero){
    int novo_numero = 0;
    
    while (numero % 10){
          novo_numero = novo_numero * 10 + numero % 10;
          numero /= 10;
     }
     
     return novo_numero;
}
