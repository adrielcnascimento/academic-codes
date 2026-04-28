/*  SEPARADOR DE DIGITOS    */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, dez_milhar, unid_milhar, centena, dezena, unidade;
    
    printf ("Digite um numero de 5 digitos\n");
    scanf ("%d", &num);
    
    dez_milhar = num / 10000;
    unid_milhar = (num % 10000) / 1000;
    centena = (num % 1000) / 100;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    
    printf ("\n%d\t %d\t %d\t %d\t %d\t", dez_milhar, unid_milhar, centena, dezena, unidade);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
