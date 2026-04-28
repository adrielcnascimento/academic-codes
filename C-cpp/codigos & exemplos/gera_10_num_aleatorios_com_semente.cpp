#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont, semente;
    
    printf ("GERA 10 NUMEROS ALEATORIOS COM SEMENTE\n");
    printf ("informe o valor da semente\n");
    scanf  ("%d", &semente);
    
    for (cont = 1; cont <= 10; cont ++)
        printf ("%do. O valor gerado = %d\n", cont, rand ( ));
    system ("pause");
    return 0;
}
