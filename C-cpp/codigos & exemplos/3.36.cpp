#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num;
    
    printf ("Converte numero decimal para binario \n\n");
    printf ("Entre com um numero ");
    scanf  ("%d", &num);
    
    while (num > 0){
          printf ("%d", num % 2);
          num /= 2;
    }
    
    printf ("\n\n");
    system ("pause");
    return 0;
}
