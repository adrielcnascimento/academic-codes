#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int  X, limite, potencia, cont, fatorial, fator;
    float soma = 0;
    printf (" calcula a sequencia       \n\n");
    printf ("      X1    X2    X3       \n\n"
            " S = --- + --- + ---  ...  \n\n"
            "      0!    1!    2!       \n\n");
            
    printf ("defina um valor para X e um limite\n");
    scanf  ("%d %d", &X, &limite);
    
    for (potencia = 1,cont = 1; cont <= limite; cont ++){
          potencia *= X;
          
          for (fatorial = 1, fator = 1;fator <= cont - 1; fator ++)
               fatorial = fatorial * fator;
    
          soma = soma + (float)potencia / fatorial;
    }
    
    printf ("O valor da soma eh: %f final", soma);
    printf ("\n\n\n");
    system ("pause>>null");
    return 0;
}

    
    
