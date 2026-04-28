/*
  Programa que lê um número inteiro e o mostra com os dígitos na ordem inversa.
  Para a inversão do número, usa uma função
*/

#include <stdio.h>
#include <stdlib.h>

int num_inv(int);

main() {
    int num;

    printf("inversao dos digitos de um numero inteiro:\n\n");
    printf("Informe um número inteiro: ");
    scanf("%d", &num);
  
    printf("\nO numero %d invertido eh %d\n\n", num, num_inv(num));

    system("pause");
    return 0;
}

/* Função que ativa o processo recursivo - esconde o segundo parâmetro da função recursiva */
int num_inv(int n) {
    int num_inv_aux(int, int);
    
    return num_inv_aux(n, 0);
}

/* Função recursiva auxiliar - usa chamadas sucessivas a si própria */
int num_inv_aux(int n, int n_inv) {
    if (n == 0)
      return n_inv;
    else
      return num_inv_aux(n / 10, 10 * n_inv + n % 10 );
}

/* Função Iterativa - usa repetições
int num_inv(int numero){
    int num_inv;
    
    num_inv = 0;
    while(numero != 0) { 
        num_inv = (num_inv * 10) + numero % 10;
        numero /= 10;
    }
     
    return num_inv;
}
*/

