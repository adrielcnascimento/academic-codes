/*
 * Encontra recursivamente o menor elemento de um array de inteiros
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int menorArray(int[], int);
void leArray(int[], int);

int main() {
    int array[TAM], tam, indice;
    
    printf("Encontra recursivamente o menor dos elementos de um array de inteiros:\n\n");
    printf("Informe o tamanho do array (maximo = %d): ", TAM);
    scanf("%d", &tam);
    leArray(array, tam);
    printf("\nO menor dos elementos do array: %d\n\n", menorArray(array,tam));
    
    system("pause");
    return 0; 
}

/* Função recursiva que encontra o menor dos elementos de um array de inteiros */
int menorArray(int array[], int tam) {
    int menor;

    if (tam == 0)
        return array[tam];
    menor = menorArray(array, tam - 1);
    return array[tam] < menor ? array[tam] : menor;
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

