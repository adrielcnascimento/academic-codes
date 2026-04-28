/*
   Disciplina: Introdução à Programacao
   Professor: Roberto Medeiros de Faria
   Programa: Calcula a potência de um numero inteiro x elevado a um numero inteiro y
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double potencia(long, long);

int main() {

    long base, expoente;

    printf("Este Programa calcula a potencia de um numero inteiro elevado a outro inteiro:\n\n");

    printf("Informe a base da potencia: ");
    scanf("%ld", &base);
    printf("Informe o expoente da potencia: ");
    scanf("%ld", &expoente);
    printf("\nA potencia de %ld elevado a %ld = %f", base, expoente, potencia(base,expoente));
    printf("\n\n\n");
    system("pause");
    return 0;
}

/* Função recursiva que calcula a potencia de um numero inteiro elevado a outro */
double potencia(long base, long expoente) {

     if (expoente == 0)
        return 1;
     if (expoente < 0)
        return 1 / potencia(base, abs(expoente));
     return base * potencia(base, expoente - 1);
}
