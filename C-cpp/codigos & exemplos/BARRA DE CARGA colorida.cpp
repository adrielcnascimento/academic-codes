/*BARRA DE CARGA*/
#include <stdio.h>
#include <stdlib.h>

#define CARRACTERE_DA_BARRA 220

int main ( ) {
    int cont;
    
    for (cont = 1; cont <= 900; cont +=10){
        
        if (cont > 1 && cont < 300)
           printf ("%c", CARRACTERE_DA_BARRA);
        
        if (cont > 300 && cont < 600){
           system ("color 01");
           printf ("%c", CARRACTERE_DA_BARRA);
        }
        if (cont > 600 && cont < 900){
           system ("color 02");
           printf ("%c", CARRACTERE_DA_BARRA);
        }
}

printf ("\n\n\n");
system ("pause");
return 0;
}
