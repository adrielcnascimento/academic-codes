/*PROGRAMA PARA O CALCULO DE PORCENTAGEM*/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    float num, porcent, valor;
    
    printf ("****************************************\n"
            "*PROGRAMA PARA O CALCULO DE PORCENTAGEM*\n"
            "****************************************\n\n");
    
    printf ("Entre com o numero: ");
    scanf ("%f", &num);
    
    printf ("Entre com o valor da porcentagem:");
    scanf ("%f", &porcent);
    
    valor = num * ( porcent/100 );
    num = num - valor;
    
    printf ("O valor da porcentagem sera de: %.3f\n", valor);
    printf ("O valor final sera de: %.3f", num);
    /*finalização*/
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
