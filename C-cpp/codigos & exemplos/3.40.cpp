/*PADRÃO QUADRICULADO*/
#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int vez = 1, cont = 1;
    
    while ( vez <= 8){
       
       while (cont <= 8){
          printf ("* ");
          cont ++;
       }
       
       printf ("\n");
       if (vez % 2)
          printf (" ");
      
    cont = 1;
    vez ++;
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}      
          
          
          
