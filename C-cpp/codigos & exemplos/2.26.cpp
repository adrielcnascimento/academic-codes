/* MULTIPLOS */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num1, num2;
    
    printf ("Digite 2 numeros e veja se ele sao multiplos\n");
    scanf ("%d %d", &num1, &num2);
    
    if (num1 % num2 == 0 || num2 % num1 == 0)
    printf ("eles sao multiplos \n");
    
    if (num1 % num2 != 0 && num2 % num1 != 0)
    printf ("Eles nao sao multiplos \n");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
