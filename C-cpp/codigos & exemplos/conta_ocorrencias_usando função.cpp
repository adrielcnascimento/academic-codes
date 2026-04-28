/*Faca um programa que lance N vezes
o numero de ocorrencias das faces do dado
e imprime o histograma*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostra_resultado (int []);
int lanca_dado(void);

int main (void){
    int n, vezes, ocorrencias[7] = {0}, indice;
    srand (time(NULL));
    
    printf ("lanca dados e mostra quantas vezes cada "
            "face do dado ocorre\n");
    printf ("Digite quantas vezes lancara o dado: ");
    scanf  ("%d", &n);  
    for (vezes = 1; vezes <= n; vezes ++)
          ocorrencias[lanca_dado ( )] ++;
    mostra_resultado (ocorrencias);
    
    printf ("\n\n\n");
    system ("pause>>null");    
    return 0;   
}
int lanca_dado (void){
    int dado1;
    return dado1 = rand ( ) % 6 + 1;
}
void mostra_resultado (int array []){
    int indice, vezes;
    printf ("o numero de ocorrencias de cada face eh: \n\n");
    printf ("Face\t Quant \t Histograma\n");
    for (indice = 0; indice <= 6; indice ++){    
       printf ("face %d = %d\t",indice +1,  array[indice]);
       for (vezes = 1; vezes <= array[indice]; vezes ++)
        printf ("*");
        printf ("\n");
    }
    return;
}
