#include <stdio.h>
#include <stdlib.h>

int calcula_fatorial (int);

int main ( ) {
    int valor1, valor2;
    
    printf ("calcula e soma 2 fatoriais\n");
    printf ("digite os numeros: ");
    scanf  ("%d %d", &valor1, &valor2);
    
    printf ("O valor da soma foi %d", calcula_fatorial (valor1) + calcula_fatorial (valor2));
    
    printf ("\n\n\n");
    system ("pause");
    
    return 0;
}

int calcula_fatorial (int numero) {
    int fator, fatorial;
    
    for (fatorial = 1, fator = 1; fator <= numero; fator ++)
    fatorial *= fator;
    
    return fatorial;
}
    
