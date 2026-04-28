/*QUADRADOS E CUBOS*/
#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int num, quadrado, cubo;
    
    printf ("Digite um numero de 0 a 10\n");
    scanf ("%d", &num);
    
    quadrado = num * num;
    cubo = num * num * num;
    
    printf ("numero\t quadrado\t cubo\n"
            " %d\t    %d\t          %d", num, quadrado, cubo);
            
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
