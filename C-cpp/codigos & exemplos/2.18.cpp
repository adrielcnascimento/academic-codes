
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num1, num2;
    
    printf ("Digite dois numeros\n");
    scanf ("%d %d", &num1, &num2);
    
    if (num1 > num2)
    printf ("%d eh o maior\n" , num1);
    
    if (num2 > num1)
    printf ("%d eh o maior\n" , num2);
    
    if (num1 == num2)
    printf ("estes numeros sao iguais\n");
    
    printf ("\n\n");
    system ("pause");
    return 0;
}
    
