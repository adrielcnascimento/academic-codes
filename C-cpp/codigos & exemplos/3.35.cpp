/*PALIDROMO*/
#include <stdio.h>
#include <stdlib.h>
int main ( ) {
    int num, dez_milhar, unid_milhar, dezena, unidade;
    printf ("Digite um numero de 5 digitose veja se ele eh palidromo: \n");
    scanf ("%d", &num);
    
    dez_milhar = num / 10000;
    unid_milhar = (num % 10000) / 1000;
    dezena = (num % 100) / 10;
    unidade = num % 10;
    
    if (dez_milhar == unidade && unid_milhar == dezena)
       printf ("Ele eh palidromo ");
    else printf ("Nao eh palidromo ");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
