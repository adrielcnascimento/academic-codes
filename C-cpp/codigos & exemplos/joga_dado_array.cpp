/*Faca um programa que lance N vezes
o numero de ocorrencias das faces do dado*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ELEM 6
int lanca_dado(void);

int main (void){
    int n, cont, jogada [NUM_ELEM], face, indice;
    srand (time(NULL));
    
    printf ("lanca dados e mostra quantas vezes cada"
            "face do dado ocorre\n");
    printf ("Digite quantas vezes lancara o dado: ");
    scanf  ("%d", &n);
    
    for (indice = 0; indice < 6; indice ++)
        jogada[indice] = 0;
    for (cont = 1; cont <= n; cont ++){
        face = lanca_dado ( );
        switch (face){
               case 1 : jogada [0] ++;
                    break;
               case 2 : jogada [1] ++;
                    break;
               case 3: jogada  [2] ++;
                    break;
               case 4: jogada  [3] ++;
                    break;
               case 5:  jogada [4] ++;
                    break;
               case 6:  jogada [5] ++;
                    break;
        }
    }
    
    printf ("o numero de ocorrencias de cada face eh: ");
    printf ("face 1 = %d\n", jogada [0]);
    printf ("face 2 = %d\n", jogada [1]);
    printf ("face 3 = %d\n", jogada [2]);
    printf ("face 4 = %d\n", jogada [3]);
    printf ("face 5 = %d\n", jogada [4]);
    printf ("face 6 = %d\n", jogada [5]);
    
    printf ("\n\n\n");
    system ("pause");    
    return 0;   
}
int lanca_dado (void){
    int dado1;
    return dado1 = rand ( ) % 6 + 1;
}
