/*programa que le 10 numero interos e mostra 
os numero que forem menor que os ultimos*/
#include <stdio.h>
#include <stdlib.h>


int main (void) {
    int numero [10];
    int indice;
    
    printf ("programa que le 10 numero interos e mostra " 
            "os numero que forem menor que os ultimos\n");
    
    
    for (indice = 0; indice < 10; indice ++){
        printf ("digite um numero");
        scanf  ("%d", &numero[indice]);
    }
    printf ("numero menores que o ultimo");
    
    for (indice = 0; indice < 9; indice ++)     
        if (numero[indice] < numero [9])
           printf ("\n %d ", numero[indice]);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
