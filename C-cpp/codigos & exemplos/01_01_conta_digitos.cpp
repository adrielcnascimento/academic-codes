/*
   Disciplina: Introdução à Programação
   Professor: Roberto Medeiros de Faria
   Programa: Calcula a quantidade de dígitos de um número inteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quantidadeDeDigitos(long);

int main() {
    long numero;

    printf("Este programa conta a quantidade de digitos de um numero inteiro:\n\n");
    printf("Informe o numero: ");
    scanf("%ld", &numero);
    printf("\nA quantidade de digitos do numero %ld = %d\n", numero, quantidadeDeDigitos(numero));
    printf("\n\n\n");
    system("pause");
}

/* Função recursiva que conta recursivamente quantidade de dígitos de um numero inteiro */
int quantidadeDeDigitos(long numero) {
    if (abs(numero) <= 9)
        return 1;
    else
        return 1 + quantidadeDeDigitos(abs(numero) / 10);
}




