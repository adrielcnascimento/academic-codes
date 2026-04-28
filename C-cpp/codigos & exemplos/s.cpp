#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int main (void){
    int array [TAM], ind;
    
    printf ("Recebe ate %d e mostra na ordem inversa a de leitura\n", TAM);
    printf ("Entre com os numeros: \n");
    
    for (ind = 0;ind < TAM - 1; ind ++)
          scanf ("%d", &array [ind]);
    printf ("O array eh: \n");
    
    for (ind = 0; ind <= TAM - 1; ind ++)
        printf ("%d ", array[ind]);
    
    printf ("O array na ordem inversa eh: \n");
    for (ind = TAM - 1;ind >= 0 ; ind --)
        printf ("%d ", array[ind]);
        
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
