#include <stdio.h>
#include <stdlib.h>
//bonus de cliente
int main ( ) {
    float valor;
    int cod, cont;
    
    printf ("Loja compre tudo\n");
    cont = 1;
    
    while (cont <= 5){
          printf ("codigo do cliente\n");
          scanf ("%d", &cod);
          printf ("Digite o valor da compra R$: \n");
          scanf ("%d", &valor);
          
          if (valor < 5000)
             printf ("valor do bonus R$: %.2f\n", valor * 0.1);
          else printf ("valor do bonus R$: %2.f", valor * 0.15);
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
