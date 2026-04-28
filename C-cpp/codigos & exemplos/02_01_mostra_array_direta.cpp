/*
 * Programa que mostra recursivamente um array de inteiros na ordem direta
 * do menor indice para o maior indice
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void mostraArray_direta(int[], int);

int main() {
    int tam, indice, array[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    /* apresentação da finalidade do programa */
    printf("Mostra recursivamente os elementos de um array de inteiros,\n"
           "na ordem direta - do menor para o maior indice:\n\n");
    /* impressão dos elementos do array */
    printf("Elementos do array:\n");
    mostraArray_direta(array, TAM);
    
    printf("\n");
    system("pause");
    return 0; 
}

/* Função recursiva que realiza a impressão de um array na ordem direta
 * do menor para o maior indice */
void mostraArray_direta(int array[], int tam) {
    if (tam == 0)
        return;
    mostraArray_direta(array, tam - 1);
    printf("%d\n", array[tam - 1]); /* a impresão depois da chamada recursiva */
    return;
}

