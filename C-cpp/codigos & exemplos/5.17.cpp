#include <stdio.h>
#include <stdlib.h>

int multiplo (int, int);

int main ( ) {
    int num1, num2;
    
    printf ("DIGITE DOIS NUMEROS E VEJA SE ELES SAO MULTIPLOS\n");
    scanf  ("%d %d", &num1, &num2);
    
    if (multiplo (num1, num2) != 0)
       printf ("Eles sao multiplos\n");
       
    else printf ("Eles nao sao multiplos\n");
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int multiplo (int n1, int n2){
    
    if (n1 % n2 == 0 || n2 % n1 == 0)
       return 1;
    else if (n1 % n2 != 0 && n2 % n1 != 0)
         return 0;
}
