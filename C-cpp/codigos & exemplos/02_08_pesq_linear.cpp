/*
 * Programa para demonstrar o uso de uma pesquisa linear recursiva
 *
 */
 
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pesq_lin_rec(int[], int, int);

int main() {
    int chave, pos, array[TAM] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("Realiza pesquisa linear recursiva num array:\n\n", chave);
    printf("O array foi inicializado com: 10, 20, 30, 40, 50, 60, 70, 80, 90 e 100.\n\n");
    printf("Informe a chave a ser procurada: ");
    scanf("%d", &chave);
    pos = pesq_lin_rec(array, TAM, chave);
    if ( pos == -1)
        printf("\nValor %d nao encontra-se no array!\n", chave);
    else
        printf("\nValor %d encontra-se na posicao %d do array!\n", chave, pos);
    
    printf("\n");
    system("pause");
    return 0;
}

/* Função pesquisa linear recursiva num array de inteiros */
int pesq_lin_rec(int array[], int tam, int chave) {
    
    if (tam == 0)
        return -1;
    if (chave == array[tam - 1])
        return tam - 1;
    return pesq_lin_rec(array, tam - 1, chave);
}
