#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 4


void le_matriz (int [LIN][COL], int, int);
void mostra_matriz (int [][COL], int, int);

void soma_matriz (int [][COL], int [][COL], int [][COL]);

int main (void){
    int mat_A[LIN][COL], mat_B[LIN][COL], mat_SOMA[LIN][COL];
    
    printf ("Execulta a soma de duas matrizes\n");
    printf ("Informe a primeira matriz: \n");
    le_matriz (mat_A , LIN, COL);
    printf ("Mostra a matriz A: \n");
    mostra_matriz (mat_A, LIN, COL);
    printf ("Informe a segunda matriz: \n");
    le_matriz (mat_B, LIN, COL);
    printf ("Mostra a matriz B: \n");
    mostra_matriz (mat_B, LIN, COL);
    printf ("Mostra matriz soma: \n");
    mostra_matriz (mat_SOMA, LIN, COL); 
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
void le_matriz (int matriz [][COL], int num_lin, int num_col){
     int lin, col;
     for (lin = 0; lin < num_lin; lin ++)
         for (col = 0; col < num_col; col ++)
             scanf ("%d ", &matriz [lin][col]);
     return ;
}

void mostra_matriz (int matriz [][COL], int num_lin, int num_col){
     int lin, col;
     for (lin = 0; lin < num_lin; lin ++){
         for (col = 0; col < num_col; col ++)
             printf ("%d ", matriz [lin][col]);
         printf ("\n");
     }
     return ;
}
void soma_matriz (int mat_A [][COL], int mat_B [][COL], int mat_SOMA [][COL]){
     int lin, col;
     for (lin = 0; lin < LIN; lin ++)
         for (col = 0; col < COL; col ++)
             mat_SOMA [lin][col] = mat_A [lin][col] + mat_B [lin][col];
     return ;
}
