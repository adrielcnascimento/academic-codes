#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int vezes, cont;
    
    printf ("EXIBE UM PADRAO DO TIPO XADREZ \n\n");
    
    for (vezes = 1; vezes <= 10; vezes ++){
        if (vezes % 2)
            printf (" ");
        for (cont = 1; cont <= 10; cont ++){
            if (cont % 2 != 0)
               printf ("*");
            else   printf (" ");
        }
        printf ("\n");
        cont = 1;
    }
    
    printf ("\n\n\n\n");
    system ("pause");
    return 0;
}
            
