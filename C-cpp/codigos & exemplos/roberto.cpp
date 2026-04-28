#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void recebe_array(int[], int);

void bolha(int [], int, int(*compara) (int, int));
void troca(int *, int *);
int ascendente(int, int);
int descendente(int, int);
void imprime_array(int[], int);

int main (void){
    int ordem, limite;
    int array [MAX];

    printf ("Ordena um array de ate 100 elementos inteiros:\n\n");
    printf ("Entre com a quantidade de elementos do array (maximo de %d):\n", MAX);
    scanf ("%d", &limite);
    recebe_array (array, limite);  
  
    printf ("\nInforme a ordemo desejada (1 - Ascendente ou 2 - Descendente): ");

    scanf  ("%d", &ordem);
  
    if (ordem == 1)
        bolha (array, limite, ascendente);
    else
        bolha (array, limite, descendente);
  
    printf ("\nO array ordenado eh: ");

    imprime_array (array, limite);

    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void recebe_array (int array[], int lim) {
    int cont;
   
    printf ("\nEntre com os %d elementos inteiros do array:\n", lim);
    for (cont = 0; cont < lim; cont++)
        scanf("%d", &array[cont]); 
    
    return ;
}

void bolha(int a[], int tam, int (*compara)(int, int)) {
    int passada, posicao;
    void troca (int *, int *);
   
    for (passada = 1; passada < tam; passada ++)
        for (posicao = 0; posicao < tam - 1; posicao ++)
            if ((*compara)( a[posicao], a[posicao + 1]))
                troca (&a[posicao], &a[posicao + 1]);
    return ;
}

void troca (int *elem, int *prox) {
    int aux;
   
    aux = *elem;
    *elem = *prox;
    *prox = aux;   
    return ;
}

int ascendente(int elem, int prox) {
    return elem > prox;
}

int descendente(int elem, int prox) {
    return elem < prox;
}

void imprime_array(int array[], int tamanho) {
    int ind;
   
    for (ind = 0; ind <= tamanho - 1; ind ++)
        printf ("%d ", array[ind]);
    return ;
}
