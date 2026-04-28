#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( ) {
    float X;
    
    while (X != 9999){
        printf ("\nARREDONDA VARIOS NUMEROS\n");
        printf ("digite o numero (9999 - para terminar)\n");
        scanf  ("%f", &X);
        printf ("%f\t %.2f\n", X, floor (X + .5));
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
