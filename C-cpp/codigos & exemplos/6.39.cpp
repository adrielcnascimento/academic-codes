#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int minirecursivo (int [], int);

int main (void){
    int conjunto [MAX], tam, indice;
    
    printf ("programa que mostra o menor numero de um conjuto de numero lido\n");
    printf ("digite o tamanho do conjunto: \n");
    scanf  ("%d", &tam);
    printf ("Agora digite os numeros");
    for (indice =  0; indice < tam; indice ++)
         scanf ("%d ", conjunto [indice]);
    printf ("O menor elemento desse conjunto eh:  %d", minirecursivo(conjunto , tam));   
    
    printf ("\n\n\n");
    system ("pause");
    return  0;
}

int minirecursivo (int array [], int tamanho){
    int ind = 0, menor;
    menor = array ;
    
    if (array [ind] < menor)
       menor = array [ind];
    else return minirecursivo (array, tamanho - 1);
}
