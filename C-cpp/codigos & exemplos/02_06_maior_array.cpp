/*
 * Encontra recursivamente o maior elemento de um array de inteiros
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int maiorArray(int[], int);
void leArray(int[], int);

int main() {
    int array[TAM], tam, indice;
    
    printf("Encontra recursivamente o maior dos elementos de um array de inteiros:\n\n");
    printf("Informe o tamanho do array (maximo = %d): ", TAM);
    scanf("%d", &tam);
    leArray(array, tam);
    printf("\nO maior dos elementos do array: %d\n\n", maiorArray(array,tam));
    
    system("pause");
    return 0; 
}

/* Função recursiva que encontra o maior dos elementos de um array de inteiros */
int maiorArray(int array[], int tam) {
    int maior;

    if (tam == 0)
        return array[tam];
    maior = maiorArray(array, tam - 1);
    return array[tam] > maior ? array[tam] : maior;
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

