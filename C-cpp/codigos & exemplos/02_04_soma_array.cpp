/*
 * Executa recursivamente o somatorio dos elementos de um array de inteiros
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int somaArray(int[], int);
void leArray(int[], int);

int main() {
    int array[TAM], tam, indice;
    
    printf("Calculo recursivo da soma dos elementos de um array de inteiros:\n\n");
    printf("Informe o tamanho do array (maximo = %d): ", TAM);
    scanf("%d", &tam);
    leArray(array, tam);
    printf("\nSoma dos elementos do array: %d\n\n", somaArray(array,tam));
    system("pause");
    return 0; 
}

/* Função recursiva que calcula a soma dos elementos de um array de inteiros */
int somaArray(int array[], int tam) {

    if (tam == 0)
        return 0;
    return array[tam - 1] + somaArray(array, tam - 1);
}

/* Função recursiva que realiza a leitura dos elementos de um array de inteiros */
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

