#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int lado1, lado2, lado3;
    
    printf ("Programa que recebe 3 numeros e mostra se eles podem formar um triangulo\n");
    printf ("Digite 3 numeros : \n");
    scanf  ("%d %d %d", &lado1, &lado2, &lado3);
    
    if (lado1 && lado2 != 0){
       if (lado1 && lado3 != 0){
           if (lado1 + lado2 >= lado3)
              printf ("eles formam um triangulo");
           else if (lado1 + lado3 >= lado2)
              printf ("eles formam um triangulo");
           else if (lado2 + lado3 >= lado1)
              printf ("eles formam um triangulo");
           else printf ("eles nao formam um triangulo");
       }
    } 
    else printf ("nao existe triangulos com lados iguais a 0");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
