/* O MAIOR DE 10 NUMERO USANDO O LOOP´'WHILE' */
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cont = 1, num, maior;
    printf ("Entre com o 1 numero: ");
    scanf ("%d", num);
    maior = num;
    
    while (cont <= 10){
          printf ("Entre com o proximo numero: ");
          scanf ("%d", &num);
          cont ++;
          
          if (num > maior)
             maior = num;
          else maior = maior;
    }
    printf ("O maior desse numero eh %d", maior);
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
