#include <stdio.h>
#include <stdlib.h>

int main (void){
    int fatorial, fator, num;
    
    printf ("Programa que calcula um fatorial\n");
    printf ("Digite um numero \n");
    scanf  ("%d", &num);
    
    for (fatorial = 1, fator = 1; fator <= num; fator ++)
        fatorial = fatorial * fator;
    
    printf ("O fatorial do numero lido eh: %d", fatorial);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
