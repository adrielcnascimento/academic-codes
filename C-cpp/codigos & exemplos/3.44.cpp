/*LADOS DE UM TRIANGULO */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float x, y, z;
    
    printf ("Entre com os valores dos lados do triangulo: \n");
    scanf ("%f %f %f", &x, &y, &z);
    
    if (x >= y + z)
    printf ("Eles formam um triangulo \n");
    
    if (y >= x +z)
    printf ("Eles formam um triangulo \n");
    
    if (z >= x + y);
    printf ("Eles formam um triangulo \n");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}   
