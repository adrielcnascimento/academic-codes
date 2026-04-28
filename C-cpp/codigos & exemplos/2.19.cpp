#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int x, y, z, soma, media, produto;/*Declaração das variaveis*/
    
    printf ("programa que le 3 numeros e mostra o maior e o menor deles\n");
    printf ("Por favor digite 3 numeros\n");
    scanf ("%d %d %d", &x, &y, &z);
    /*Comparações para a escolha do maior*/
    if (x > y){
          if (x > z)
          printf ("O maior eh %d\n", x);
    }    
    if (y > x){
          if (y > z)
          printf ("O maior eh %d\n", y);
    }
    if (z > y){
          if (z > x)
          printf ("O maior eh %d\n", z);
    }
    /*Comparações para a escolha do menor*/
    
    if (x < y){
          if (x < z)
          printf ("O menor eh %d\n", x);
    }
    if (y < x){
          if (y < z)
          printf ("O menor eh %d\n", y);
    }     
    if (z < y){
          if (z < x)
          printf ("O menor eh %d\n", z);
    }
       
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
          
    
