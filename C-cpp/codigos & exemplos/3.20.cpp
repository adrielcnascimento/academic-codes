/*JUROS SIMPLES*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int dias;
    float juros, taxa, capital;
    
    printf ("Entre com o valor do emprestimo (-1 para finalizar):   R$");
    scanf("%f", &capital);
    
    while (capital != -1){
          printf ("\nEntre com a taxa de juros:   ");
          scanf ("%f", &taxa);
          
          printf ("\nEntre com o periodo do emprestimo em dias:   ");
          scanf ("%d", &dias);
          
          juros = capital * taxa * dias / 365;
          
          printf ("O valor dos juros e:   R$%.2f", juros);
          
          printf ("\n\n");
          printf ("Entre com o valor do emprestimo (-1 para finalizar):   R$");
          scanf("%f", &capital);
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
