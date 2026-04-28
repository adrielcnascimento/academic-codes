#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hipotenusa (double, double);

int main ( ) {
    double X, Y;
    
    printf ("Calcula o comprimento da hipotenusa quando fornescido os catetos\n");
    printf ("digite os falores para os catetos\n");
    scanf  ("%lf %lf", &X, &Y);
    
    printf ("O valor da hipotenusa eh = %.2lf", hipotenusa(X, Y));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

double hipotenusa (double b, double c){
       double hipo;
       
       hipo = b * b + c * c;
       
       return sqrt (hipo);
}
       
