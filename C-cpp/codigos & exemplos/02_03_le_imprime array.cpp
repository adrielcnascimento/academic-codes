/*
 * Programa que lê e imprime um array de inteiros recursivamente
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void leArray(int[], int);
void imprimeArray(int[], int);

int main() {
    int array[TAM], tam, indice;
    
    /* apresentação da finalidade do programa */
    printf("Le e imprime array de inteiros recursivamente:\n\n");
    /* definição do tamanho do array */
    printf("Informe o numero de elementos do array (maximo = %d): ", TAM);
    scanf("%d", &tam);
    /* leitura do array */
    leArray(array, tam);
    /* impressão dos elementos lidos */
    printf("\nElementos lidos do array:\n");
    imprimeArray(array, tam);
    
    printf("\n");
    system("pause");
    return 0; 
}

/* Função recursiva que realiza a leitura dos elementos de um array de inteiros*/
void leArray(int array[], int tamanho) {

    if (tamanho == 0) {
        printf("\nEntre com os valores inteiros do array:\n");
        return;
    }
    leArray(array, tamanho - 1);
    printf("Entre com o %do. elemento: ", tamanho);
    scanf("%d", &array[tamanho - 1]);
    return;
}

/* Função recursiva que realiza a impressão dos elementos de um array de inteiros */
void imprimeArray(int array[], int tam) {

    if (tam == 0)
        return;
    imprimeArray(array, tam - 1);
    printf("%d\n", array[tam - 1]);
    return;
}

