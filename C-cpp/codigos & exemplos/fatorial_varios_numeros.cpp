#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, fator, vezes, cont;
    long int fatorial;
    printf ("Programa que recebe e calcula o fatorial de N "
            "numeros interios \n");
    printf ("\nDigite quantas vezes voce quer calcular o fatorial:");
    scanf ("%d", &vezes);
    
    for (cont = 1;cont <= vezes; cont ++){
        printf ("Entre com o numero: ");
        scanf ("%d", &num);
        
        for (fatorial = 1,fator = 1; fator <= num;fator ++)
            fatorial = fatorial * fator;
        printf ("O fatorial de %d eh: %d\n\n", num, fatorial);
        
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
            
