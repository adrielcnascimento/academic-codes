#include <stdio.h>
#include <stdlib.h>

int jogada (void);

int main ( ) {
    int face, cont, cara = 0, coroa = 0;
    
    printf ("SIMULA O LANCAMENTO DE UMA MOEDA\n");
    
    for (cont = 1; cont <= 100; cont ++){
        face = jogada( );
        printf ("%do.RODADA\t", cont);
        if (face == 1){
              printf ("DEU CARA\n");
              cara += 1;
        }
        else{ 
               printf ("DEU COROA\n");
               coroa += 1;
        }
    }
    printf ("cara = %d  e coroa = %d  ", cara, coroa);
    printf ("\n\n\n");
    system ("pause");
    return 0; 
}
int jogada (void){
    int moeda;
    moeda = rand () % 2;
    if (moeda == 0)
        return 0;
    else return 1;
}
