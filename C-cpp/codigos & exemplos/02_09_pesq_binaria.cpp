/*
 * Programa para demonstrar o uso de uma pesquisa binária recursiva num array de inteiros
 *
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pesq_bin_rec(int[], int, int, int);

int main() {
    int chave, pos, array[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("Realiza pesquisa binaria recursiva num array de inteiros:\n\n", chave);
    printf("O array foi inicializado com: 10, 20, 30, 40, 50, 60, 70, 80, 90 e 100.\n\n");
    printf("Informe a chave a ser procurada: ");
    scanf("%d", &chave);
    pos = pesq_bin_rec(array, 0, TAM - 1, chave);
    if ( pos == -1)
        printf("\nValor %d nao encontra-se no array!\n", chave);
    else
        printf("\nValor %d encontra-se na posicao %d do array!\n", chave, pos);
    
    printf("\n");
    system("pause");
    return 0;
}

/* Função pesquisa binaria recursiva num array de inteiros */
int pesq_bin_rec(int array[], int inicio, int fim, int chave) {
    int medio;
    
    if (inicio > fim)
        return -1;
    medio = (inicio + fim) / 2;    
    if (chave == array[medio])
        return medio;
    if (chave < array[medio])
        return pesq_bin_rec(array, inicio, medio - 1, chave);
    else
        return pesq_bin_rec(array, medio + 1, fim, chave);
}
