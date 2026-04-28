/*DESCRIPTOGRAFADOR*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, mil, cent, dez, unid;
    
    printf ("Entre com um numero de quatro digito: ");
    scanf ("%d", &num);
    
    mil  = num / 1000;
    cent = (num % 1000) / 100;
    dez  = (num % 100)/ 10;
    unid = num % 10;
    
    printf ("%d   %d %d %d %d", num, mil, cent, dez, unid);
    
    printf ("\n\n");
    
    mil  =  mil * 10 - 7;
    cent =  cent * 10 - 7;
    dez  =  dez * 10 - 7;
    unid =  unid * 10 - 7;
    
    printf ("%d   %d %d %d %d", num, mil, cent, dez, unid);
    printf ("\n");
    printf ("%d   %d %d %d %d", num, dez, unid, mil, cent);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
