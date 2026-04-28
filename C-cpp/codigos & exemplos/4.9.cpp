/*CALCULA E IMPRIME A MEDIA DE VARIOS INTEIROS*/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int vez, num, total= 0;
    
    system ("color 0d");
    printf ("Entre com o primeiro inteiro: ");
    scanf ("%d", &vez);
    
    total = vez + total;
    
    while (vez >= 1){  // comando de repetição 
       printf ("Entre com o proximo inteiro: ");
       scanf ("%d", &num);
       total = total +num;
       vez --;
    }
    
    printf ("O valor da soma total eh: %d", total);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
          
          
