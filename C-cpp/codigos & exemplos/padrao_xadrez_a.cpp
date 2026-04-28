#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int vezes = 1, cont = 1;
    
    printf ("IMPRIME UM PADRAO XADREZ \n\n");
    
    while (vezes <= 10){
          if (vezes % 2)
             printf (" ");
             
          while (cont <= 10){
             if (cont % 2 == 0)
                printf ("*");
             else printf (" ");
          cont ++;
          }
          printf ("\n");
          cont = 1;
          vezes ++;    
    }
    printf ("\n\n\n");
    system ("pause>>null");
    return 0;
}
