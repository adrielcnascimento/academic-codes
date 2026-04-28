/*PROGRAMA PARA O CALCULO DE JUROS SIMPLES*/
#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int t;
    float J, C, i;
    
    printf ("**************************************\n"
            "*programa para calcular juros simples*\n"
            "**************************************\n\n");
    
    printf ("Entre com o capital inicial R$: ");
    scanf ("%f", &C);
    
    printf ("Entre com a taxa de juros: ");
    scanf ("%f", &i);
    
    printf ("entre com o tempo do investimento em anos: ");
    scanf ("%d", &t);
    
    J = C * i * t;
    C = C + J;
    
    printf ("\nO valor do juros sera de: R$ %.3f", J);
    printf ("\nO valor do capital no final de %d anos eh R$ %.3f", t, C);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
