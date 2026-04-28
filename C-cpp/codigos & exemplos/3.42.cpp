// O circulo
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float raio, diametro, area, circunferencia;
    float pi = 3.14159;
    
    printf ("Programa para calcular o diametro,a area e o valor da circunferencia dado o raio\n");
    printf ("digite o valor do raio : ");
    scanf  ("%f", &raio);
    
    diametro = raio + raio;
    area = 2 * pi * raio;
    circunferencia = pi * raio * raio;
    
    printf ("O valor da area eh: %.3f, da circunferencia eh: %.3f e do diametro eh: %.3f", area, circunferencia, diametro);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
