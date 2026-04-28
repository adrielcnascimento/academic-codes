/*LOOP FOR CALCULANDO A MEDIA USANDO SENTINELA */
#include <stdio.h>
#include <stdlib.h>

int main  ( ) {
    int num, aux, vez, media, total= 0;
    
    printf ("Entre com um numero: ");
    scanf ("%d", &aux);
    
    num == aux;
    
    total = total + num;
      while (num != 9999){
        printf ("Entre com um numero: ");
        scanf ("%d", &num);
        if (num != 9999)
        total = total + num;
        }
    
    media = total / aux;
    
    printf ("O valor da media eh: %d", media);
    
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}     
    
