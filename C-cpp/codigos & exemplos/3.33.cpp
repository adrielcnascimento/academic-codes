/*DESENHA QUADRADOS*/   
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, lin = 1, col = 1;
        
    printf ("Digite um numero de 1 a 20: ");
    scanf ("%d", &num);
    
    while (lin <= num) {         
          while (col <= num){
             printf ("*");
             col ++;
          }
          col = 1; 
          printf ("\n");        
          lin ++;
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}     
