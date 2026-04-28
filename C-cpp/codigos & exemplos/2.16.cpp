/*PROGRAMA DE OPERAÇÕES COM INTEIROS*/

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int X, Y, soma, diferenca, quociente, resto;
    
    printf ("Digite dois numeros\n");
    scanf ("%d %d", &X, &Y);
    
    soma = X + Y;
    diferenca = X - Y;
    quociente = X / Y;
    resto = X % Y;
    
    printf ("O valor da soma de %d com %d eh %d, a diferença eh %d," 
            "o quociente eh %d, e o resto da divisão de %d por %d eh %d",
            X, Y, soma, diferenca, quociente, X, Y, resto);
            printf ("\n\n\n");
            system ("pause");
            return 0;
}
    
    
    
