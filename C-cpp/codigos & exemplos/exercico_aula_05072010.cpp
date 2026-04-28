#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void bolha (int [], int, int(*compara) (int, int));
void troca (int *, int *);
int ascendente (int, int);
int descendente (int, int);
void imprime_array (int[], int);
void recebe_array (int);

int main (void){
    int ordem, limite;

    printf ("Organiza array\n");
    printf ("entre com os elementos do array limite de %d\n", MAX);
    scanf ("%d", &limite);
    int array [limite];
    recebe_array (limite);    
    
    printf ("\n\ninforme a ordeancao desejada: \n");
    printf ("1 - Ascendente ou 2 - Descendente: ");
    scanf  ("%d", &ordem);
    
    if (ordem == 1)
       bolha (array, limite, ascendente);
    else bolha (array, limite, descendente);
    
    printf ("\nO array agora lido eh: ");
    imprime_array (array, limite);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

void bolha (int a[], int tam, int (*compara)(int, int)){
     int passada, posicao;
     void troca (int *, int *);
     
     for (passada = 1; passada < tam; passada ++)
         for (posicao = 0; posicao < tam - 1; posicao ++)
             if ((*compara)( a[posicao], a[posicao + 1]))
                troca (&a[posicao], &a[posicao + 1]);
     return ;
}

void troca (int *elem, int *prox){
     int aux;
     
     aux = *elem;
     *elem = *prox;
     *prox = aux;     
     return ;
}

int ascendente (int elem, int prox){
    return elem > prox;
}

int descendente (int elem, int prox){
    return elem < prox;
}

void recebe_array (int lim){
     int array[lim];
     int cont;
     
     printf ("Entre com o 1 elemento ");
     scanf ("%d", array);
     
     for (cont = 1; cont < lim; cont ++){
         printf ("\nentre com mais um elemento ");
         scanf ("%d", &array[cont]);   
     }
     return ;
}

void imprime_array (int array[], int tamanho){
     int ind;
     
     for (ind = 0; ind <= tamanho - 1; ind ++)
          printf ("%d", array[ind]);
     
     return ;
}
