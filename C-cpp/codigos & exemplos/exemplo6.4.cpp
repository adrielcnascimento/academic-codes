/* Inicializando um array com uma declaração */
#include <stdio.h>
#include <stdlib.h>
int main ( ){

 int i, n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    printf("%s%13s\n", "Elemento", "Valor");

    for(i = 0; i <= 9; i++)
    printf("%7d%13d\n", i, n[i]);
    
    
    printf ("\n\n\n");
    system ("pause");
    return 0;

}
