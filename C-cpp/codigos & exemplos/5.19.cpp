#include <stdio.h>
#include <stdlib.h>

void imprime_quadrado (int); 
int main ( ) {
    int lado;
    
    printf ("mostra um quadrado\n");
    printf ("Digite o valor do lado: ");
    scanf  ("%d", &lado);
    
    imprime_quadrado (lado);    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void imprime_quadrado (int num){
  int lin;
  int col;
  while (lin <= num) {         
          while (col <= num){
             printf ("*");
             col ++;
          }
          col = 1; 
          printf ("\n");        
          lin ++;
    }
}
