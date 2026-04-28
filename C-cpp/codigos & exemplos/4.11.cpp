/*  O MENOR DE VARIOS INTEIROS    */

#include <stdio.h>
#include <stdlib.h>

int main ( ) { 
    int num, menor, cont;
    
    printf ("Entre com o primeiro inteiro: ");
    scanf ("%d", &cont);
    
    menor == cont;
    
    while (cont >= 1){
          
          printf ("Entre com o proximo inteiro: ");
          scanf ("%d", &num);
          cont --;    //CONDIÇÃO PARA REDUZIR CONT EM 1 A CADA LOOP
          
          if (num < menor)
             menor = num;
    }
    
    printf ("O menor desses inteiros eh o numero: %d \n", menor);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
} 
          
