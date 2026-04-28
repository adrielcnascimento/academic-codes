/*programa que le 10 numero interos e mostra 
os numero que forem menor que os ultimos*/
#include <stdio.h>
#include <stdlib.h>
#define NUM_ELEM 10

int main (void) {
    int numero [10];
    int indice;
    
    printf ("programa que le %d numero interos e mostra \n" 
            "os numero que forem menor que os ultimos\n\n", NUM_ELEM);
    
    
    for (indice = 0; indice < NUM_ELEM; indice ++){
        printf ("digite um numero:");
        scanf  ("%d", &numero[indice]);
    }
    printf ("numero menores que o ultimo");
    for (indice = 0; indice < NUM_ELEM - 1; indice ++)     
        if (numero[indice] < numero [NUM_ELEM - 1])
           printf ("\n%d ", numero[indice]);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
