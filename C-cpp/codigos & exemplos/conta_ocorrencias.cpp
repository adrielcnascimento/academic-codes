/*Faca um programa que lance N vezes
o numero de ocorrencias das faces do dado*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanca_dado(void);

int main (void){
    int n, vezes, ocorrencias[7] = {0}, indice;
    srand (time(NULL));
    
    printf ("lanca dados e mostra quantas vezes cada"
            "face do dado ocorre\n");
    printf ("Digite quantas vezes lancara o dado: ");
    scanf  ("%d", &n);
    
    
    for (vezes = 1; vezes <= n; vezes ++)
          ocorrencias[lanca_dado ( )] ++;
    printf ("o numero de ocorrencias de cada face eh: \n");
    for(indice = 0; indice <= 6; indice ++)    
       printf ("face %d = %d\n",indice +1,  ocorrencias[indice]);
    
    printf ("\n\n\n");
    system ("pause");    
    return 0;   
}
int lanca_dado (void){
    int dado1;
    return dado1 = rand ( ) % 6 + 1;
}
