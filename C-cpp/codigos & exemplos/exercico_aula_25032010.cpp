#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int n, cont = 1;
    
    printf ("Entre com um numero: ");
    scanf ("%d", &n);
    
    for (; cont < n; cont ++){
        if (cont % 2 == 0)
           printf ("%d\t", cont);        
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
