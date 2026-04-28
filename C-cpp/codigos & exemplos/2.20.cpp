/*O CIRCULO */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int raio, diametro;
    float pi = 3.14159, area, circuferencia;
    
    system ("color 80");
    printf ("\t\nDigite o valor do raio:\n");
    scanf ("%d", &raio);
    
    diametro = raio + raio;
    area = pi * diametro;
    circuferencia = 2 * pi * raio;
    
    printf ("O circulo de raio %d tem :\n"
            "%d de diamentro, %f de area, e circuferencia de %f", raio, diametro, area, circuferencia);
    
    printf ("\n\n\n");
    system ("pause");
    system ("color 09");
    return 0;
}
