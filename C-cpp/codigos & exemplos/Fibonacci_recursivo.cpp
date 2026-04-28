#include <stdio.h>
#include <stdlib.h> 
#include <math.h>    

int fibonacci (int);

int main ( ) {
    int posicao;

    printf("Calculo da sequencia de fibonacci:\n\n");
    printf("Informe um numero inteiros positivos.\n");
    scanf ("%d ", &posicao);
    printf("O valor eh = %d", fibonacci(posicao));
    printf("\n");
    system("pause");
    return 0;
}

int fibonacci (int pos){
    if (pos > 1)
       return fibonacci (pos - 2) + fibonacci (pos - 1);
    return pos;
}
