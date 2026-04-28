/*Faca um programa que lance N vezes
o numero de ocorrencias das faces do dado*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_ELEM 6
int lanca_dado(void);

int main (void){
    int n, cont, jogada [NUM_ELEM], indice;
    srand (time(NULL));
    
    printf ("lanca dados e mostra quantas vezes cada"
            "face do dado ocorre\n");
    printf ("Digite quantas vezes lancara o dado: ");
    scanf  ("%d", &n);
    
    for (indice = 0; indice < 7; indice ++)
        jogada[indice] = 0;
    for (cont = 1; cont <= n; cont ++)
          jogada[lanca_dado ( )] ++;
    printf ("o numero de ocorrencias de cada face eh: ");
    for(indice = 0; indice < 6; indice ++)    
       printf ("face %d = %d\n",indice +1,  jogada [indice]);
    
    printf ("\n\n\n");
    system ("pause");    
    return 0;   
}
int lanca_dado (void){
    int dado1;
    return dado1 = rand ( ) % 6 + 1;
}
