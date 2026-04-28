#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, digito, cont = 0;
    
    printf ("programa que le um numero de mostra quantos digitos sao iguais a 7\n");
    printf ("Entre com um numero: ");
    scanf  ("%d", &num);
    
    while (num != 0){
          digito = num % 10;
          num = num / 10;
          if (digito == 7)
             cont ++;
    }
    
    printf ("Este algarismo tem %d numeros  = 7\n\n", cont);
    system ("pause");
    return 0;
}
