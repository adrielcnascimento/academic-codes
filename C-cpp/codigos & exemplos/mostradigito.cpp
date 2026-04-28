/*
  Name: 
  Copyright: 
  Author: 
  Date: 07/04/10 10:45
  Description: 
*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, digito;
     
    
    printf ("Le um numero e mostra os algarismo \n");
    
    printf ("Digite um numero: ");
    scanf  ("%d", &num);
    
    while (num % 10){
          digito = num % 10;
          num /= 10; /* num = num / 10 */
          printf ("%d \t", digito);
    }

    printf ("\n\n\n");
    system ("pause");
    return 0;
}
