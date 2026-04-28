/*MDC recursivo*/
#include <stdio.h>
#include <stdlib.h>

int mdc (int, int);

int main ( ) {
    int valor1, valor2;
    
    printf ("mostra o MDC de dois valores\n");
    printf ("Digite dois numeros inteiros positivos: ");
    scanf  ("%d %d", &valor1, &valor2);
    while  (valor1 > 0 && valor2 > 0){
           printf ("\nMDC = %d", mdc (valor1, valor2));
           printf ("Digite dois numeros inteiros positivos: ");
           scanf  ("%d %d", &valor1, &valor2);
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int mdc (int x, int y){
    int (x % y == 0){
        return y;
    return mdc(y, x % y);
}
