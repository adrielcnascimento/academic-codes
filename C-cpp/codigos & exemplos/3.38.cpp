#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont = 0;
    while (cont < 100){
          cont ++;
          printf ("*");
          if (cont % 10 == 0)
          printf ("\n");
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
