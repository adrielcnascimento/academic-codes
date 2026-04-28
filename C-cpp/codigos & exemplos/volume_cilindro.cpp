/*  PROGRAMA PARA CALCULAR O VLOUME DO CILINDRO   */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int raio, altura;
    float pi = 3.14, vol = 0;
    
    printf ("Entre com o raio: ");
    scanf ("%d", &raio);
    printf ("entre com a altura: ");
    scanf ("%d", &altura);
    
    vol = pi * (raio * raio) * altura;
    
    printf ("O valor do volume do cilindro eh : %.3f", vol);
    printf ("\n\n\n\n\n");
    system ("pause");
    return 0;
}
    
