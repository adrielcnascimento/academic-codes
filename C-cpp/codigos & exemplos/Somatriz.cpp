/*
 * Programa para demonstrar soma de matrizes
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_L 3
#define MAX_C 4

void le_matriz(int[][MAX_C], int);
void mostra_matriz(int[][MAX_C], int);
void soma_matriz(int[][MAX_C], int[][MAX_C], int[][MAX_C], int);

/* Função principal */
int main() {
   int matriz1[MAX_L][MAX_C], matriz2[MAX_L][MAX_C], matriz3[MAX_L][MAX_C], i, j;

   printf("Leitura, soma  e impressao de matrizes\n");
   printf("Leitura da primeira matriz\n");
   le_matriz(matriz1, MAX_L);
   printf("Leitura da segunda matriz\n");
   le_matriz(matriz2, MAX_L);
   soma_matriz(matriz1, matriz2, matriz3 , MAX_L);
   printf("Impressao da primeira matriz\n");
   mostra_matriz(matriz1, MAX_L);
   printf("Impressao da segunda matriz\n");
   mostra_matriz(matriz2, MAX_L);
   printf("Impressao da matriz soma\n");
   mostra_matriz(matriz3, MAX_L);

   system("pause");
   return 0;
}

/* Função para ler uma matriz */
void le_matriz(int matriz[][MAX_C], int numlin) {
   int i, j;

   for(i = 0; i <= numlin - 1; i++)
      for(j = 0; j <= MAX_C - 1; j++)
	     scanf("%d", &matriz[i][j]);
   return;
}

/* Função para mostrar uma matriz */
void mostra_matriz(int matriz[][MAX_C], int numlin) {
   int i, j;

   for(i = 0; i <= numlin - 1; i++) {
      for(j = 0; j <= MAX_C - 1; j++)
	     printf("%4d", matriz[i][j]);
      printf("\n");
   }
   return;
}

/* Função para somar duas matrizes */
void soma_matriz(int matriz1[][MAX_C], int matriz2[][MAX_C], int matriz3[][MAX_C],
                 int numlin) {
   int i, j;

   for(i = 0; i <= numlin - 1; i++)
      for(j = 0; j <= MAX_C - 1; j++)
	     matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
   return;
}
