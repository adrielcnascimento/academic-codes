/*
 * Programa que mostra recursivamente um array de inteiros na ordem inversa,
 * do maior para o menor indice
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void mostraArray_inversa(int[], int);

int main() {
    int tam, indice, array[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    /* apresentação da finalidade do programa */
    printf("Mostra recursivamente os elementos de um array de inteiros,\n"
           "na ordem inversa - do menor para o maior indice:\n\n");
    /* impressão dos elementos do array */
    printf("Elementos do array:\n");
    mostraArray_inversa(array, TAM);
    
    printf("\n");
    system("pause");
    return 0; 
}

/* Função recursiva que realiza a impressão de um array na ordem inversa
 * do maior para o menor indice */
void mostraArray_inversa(int array[], int tam) {
    if (tam == 0)
        return;
    printf("%d\n", array[tam - 1]); /* a impresão antes da chamada recursiva */
    mostraArray_inversa(array, tam - 1);
    return;
}

