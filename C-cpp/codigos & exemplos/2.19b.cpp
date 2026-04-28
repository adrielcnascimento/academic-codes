/*COM TRÊS NUMEROS MELHORADOS*/
// Pré-processamento
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int x, y, z, soma, media, produto;/*Declaração das variaveis*/
    
    system ("color 80");
    printf ("Por favor digite 3 numeros\n");
    scanf ("%d %d %d", &x, &y, &z);
    
    /*Comparações para a escolha do maior*/
    if (x > y && x > z)
       printf ("O maior eh %d\n", x);    
    
    if (y > x && y > z)
       printf ("O maior eh %d\n", y);
    
    if (z > y && z > x)
    printf ("O maior eh %d\n", z);
    
    /*Comparações para a escolha do menor */
    
    if (x < y && x < z)
       printf ("O menor eh %d\n", x);

    if (y < x && y < z)
       printf ("O menor eh %d\n", y);     
    
    if (z < y && z < x)
    printf ("O menor eh %d\n", z);
    
    printf ("\n\n");     
    system ("color 1A");
    
    /*operações*/
    
    soma  = x + y + z;
    media = (x + y + z)/ 3;
    produto = x * y * z;
    
    printf ("A soma eh %d\nAmedia eh %d\nO produto eh %d", soma, media, produto);
   
    printf ("\n\n\n");            /*mais eficiente, será?*/
    system ("pause");
    return 0;
}
          
    
