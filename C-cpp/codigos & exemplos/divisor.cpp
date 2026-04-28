#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, divisor;
    
    printf ("Mostra os divisores: \n");
    printf ("Digite um numero: ");
    
    scanf ("%d", &num);
    
    printf ("Os divisores sao: ");
    for (divisor = 1; divisor <= num ; divisor++){
        if (num % divisor == 0)
        printf ("%d, ", divisor);
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
