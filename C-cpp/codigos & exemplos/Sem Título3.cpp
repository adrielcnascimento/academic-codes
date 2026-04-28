#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int cont = 1;
    
    while ( cont < 3000000){
    cont ++;
    if (cont % 1000000 == 0)
    printf ("%d", cont );
    printf ("\n");
}
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
