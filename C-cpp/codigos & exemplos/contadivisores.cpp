#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, divisor, contador = 0;
    
    printf ("Digite um numero: ");
    
    scanf ("%d", &num);
    
    printf ("O numero de  divisores eh: ");
    for (divisor = 1; divisor <= num ; divisor++){
        if (num % divisor == 0)
           contador ++;
    }
    
    printf ("%d", contador);
    printf ("\n\n\n");
    system ("pause");
}
