/*
   Disciplina: Introdução à Programacao
   Professor: Roberto Medeiros de Faria
   Programa: Escreve um numero decimal lido convertido em binario.
*/

#include <stdio.h>
#include <stdlib.h>

void decimalParaBinario(long);

int main() {
    long decimal;
    
    printf("Este programa converte um numero decimal em binario:\n\n");
    printf("Informe o numero decimal: ");
    scanf("%ld", &decimal);
    printf("\nNumero em binario: ");
    decimalParaBinario(decimal);
    printf("\n\n\n");
    system("pause");
}

/* Função recursiva que imprime um numero decimal convertido em binario */
void decimalParaBinario(long numero) {
    if (numero <= 1)
        printf("%d", numero);
    else {
        decimalParaBinario(numero / 2);
        printf("%d", numero % 2);
    }
    return;
}
