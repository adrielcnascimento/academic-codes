#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int  numerador, denominador = 1, contador;
    float limite, soma = 0;
    
    printf ("mostra a soma da seguinte sequencia:                  \n\n"
            "            4       4       4       4       4         \n\n"     
            " S = 4  -  ---  +  ---  -  ---  +  ---  -  ---  +  ...\n\n"
            "            3       5       7       9       11        \n\n");
            
    printf ("defina um limite para a soma: ");
    scanf  ("%d", &limite);
    
    for (contador = 1,numerador = 4; soma <= limite; denominador +=2, contador ++){
          soma = (float)numerador/denominador;
          denominador = denominador * -1;
    }
    
    printf ("O numero de temos para dar o valor de %f eh: %d", limite, contador);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
