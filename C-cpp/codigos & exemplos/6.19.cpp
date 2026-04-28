#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado (void);

int main (void){
    srand (time(NULL));
    int jogadas, i, dado_a, dado_b;
    int ocorrencias  [11] = {0};//Neste array ficará armazenado todas as ocorrencias
    int frequencias_teoricas  [11] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};//Frequencia provavel de cada soma

    printf ("Programa que calcula a frequencia das somas de 2 dados\n");
    for (jogadas = 1; jogadas <= 36000; jogadas ++){
        dado_a  = dado  ();
        dado_b  = dado  ();
        ocorrencias [dado_a + dado_b] ++;
    }
    /* Impressão de cabeçalho da tabela */
    printf ("\n");
    printf ("  Soma\t   Ocorencias\t   percentual\t   freq_esperada\n");

    /* Imprimir  resumos */
    for (i = 2; i <= 12; i++)
        printf ("  %d  \t\t %d   \t%.2f   \t\t %d \n", i, ocorrencias[i] , (float)(ocorrencias [i] * 100)/36000, frequencias_teoricas [i - 2]);
        
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int dado (void){
    return rand( ) % 6 + 1;
}
