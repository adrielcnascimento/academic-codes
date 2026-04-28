/*
 * Programa que demonstra ordenação em ordem crescente de um array de inteiros
 * com um processo recursivo
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void lerArray(int[], int);
void imprimirArray(int[], int);
void ordena_bolha(int[], int);

int main() {
    int array[TAM], tam, indice;
    
    /* apresentação da finalidade do programa */
    printf("Ordenação crescente dos elementos de um array:\n\n");
    /* definição do tamanho do array */
    printf("Informe o tamanho do array (maximo = %d): ", TAM);
    scanf("%d", &tam);
    /* leitura do array */
    lerArray(array, tam);
    /* impressão dos elementos lidos */
    printf("\nElementos lidos do array:\n");
    imprimirArray(array, tam);
    /* ordenação crescente do array */
    ordena_bolha(array, tam);
    /* impressão do array ordenado */
    printf("\nElementos do array em ordem crescente:\n");
    imprimirArray(array, tam);
    
    printf("\n");
    system("pause");
    return 0; 
}

/* Função recursiva que realiza a leitura dos elementos do array */
void lerArray(int array[], int tamanho) {
    if (tamanho == 0) {
        printf("Entre com os valores inteiros do array:\n");
        return;
    }
    lerArray(array, tamanho - 1);
    printf("Entre com o %do. elemento: ", tamanho);
    scanf("%d", &array[tamanho - 1]);
    return;
}

/* Função recursiva que realiza a impressão de um array */
void imprimirArray(int array[], int tam) {
    if (tam == 0)
        return;
    imprimirArray(array, tam - 1);
    printf("%d\n", array[tam - 1]);
    return;
}

/* Função recursiva para executar as n - 1 passadas do sort da bolha */
void ordena_bolha(int array[], int tam) {
    void passada(int[], int);

    if (tam == 1)
        return;
    passada(array, tam - 1);
    ordena_bolha(array, tam - 1);
    return;
}

/* Função recursiva que realiza uma passada do sort da bolha
 * trocando as posições dos pares vizinhos fora de ordem */
void passada(int array[], int pos) {
    int aux;
    
    if (pos == 0)
        return;
    passada(array, pos - 1);
    if (array[pos - 1] > array[pos]) {
        aux = array[pos - 1];
        array[pos - 1] = array[pos];
        array[pos] = aux;
    }
    return;
}

