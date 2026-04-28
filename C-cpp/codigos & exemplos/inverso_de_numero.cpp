#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num, digito, novo_numero = 0;
  
    printf ("Le um numero e mostra um algarismo inverso \n");
    printf ("Digite um numero: ");
    scanf  ("%d", &num);
    
    while (num % 10){
          
          novo_numero = novo_numero * 10 + num % 10;
          num /= 10;
    }
    
    printf ("\n\nO novo numero sera : %d", novo_numero);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
