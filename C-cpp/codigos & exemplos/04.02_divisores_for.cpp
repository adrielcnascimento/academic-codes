/* Programa que imprime os divisores de um numero utilizando o comando for */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, divisor;
    
    printf("Impressao dos divisores de um numero:\n\n");

    printf("Qual o valor do numero:\n");
    scanf("%d", &numero);
    
    printf("\nLista dos divisores de %d:\n", numero);
    for (divisor = 1; divisor <= numero; divisor++)
        if(numero % divisor == 0)
            printf("%d\n", divisor);
    
    printf("\n\n");
    system("pause");
    return 0;
}
