/*DESENHA QUADRADOS VAADOS*/   
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, lin = 1, col = 1, branco = 1;
        
    printf ("Digite um numero de 1 a 20: ");
    scanf ("%d", &num);
    
    while (lin <= num -2) {         
          while (col <= num){
             printf ("*");
             col ++;
          }          
          printf ("\n");        
          printf ("*");
          
          while (branco <= num -2){
          printf ("#");
          branco ++;
          }
          
          printf ("*");          
          branco = 1;
          lin ++;          
    }
    printf ("\n");
    
    col = 1;
    while (col <= num){
    printf ("*");
    col ++;
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}     
