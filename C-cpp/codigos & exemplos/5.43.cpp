/* FUNCÃO MAIN RECURSIVA */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ( ) {
    static int contagem = 1;
    
    contagem ++;
    printf ("Funcao main recursiva\n\n");
    printf ("%d\n", main(contagem));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
