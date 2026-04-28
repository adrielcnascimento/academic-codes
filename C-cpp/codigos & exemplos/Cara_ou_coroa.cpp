#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( ) {
    int moeda;
    srand (time(NULL));
    
    printf ("lanca moeda\n");
    
    moeda = rand ( ) % 2;
    
    printf ("%d", moeda);
    if (moeda == 1)
       printf ("deu Cara\n");
    else printf ("Deu corroa\n");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
