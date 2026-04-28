/*
  Name: 
  Copyright: 
  Author: 
  Date: 07/04/10 10:00
  Description: 
*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, cont = 0;
    system ("color 0d");
    printf ("le um numero e mostra quantos algarismo "
            "significativos ele tem\n\n");
    
    printf ("digite um numero: ");
    scanf  ("%d", &num);
    
    while (num % 10){
          num /= 10;
          cont ++; 
    }
    
    printf ("%d ", cont);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
