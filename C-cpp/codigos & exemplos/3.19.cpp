/*COMPANHIA QUIMICA*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int salario = 200;
    float vendas, pagamento;
    
    printf ("Entre com a venda em reais ( -1 para finalizar):   ");
    scanf ("%f", &vendas);
    
    while (vendas != -1){
      pagamento = (salario + ( (vendas * 9) / 100) );
      
      printf ("\nSalario:   %.2f", pagamento);
      
      printf ("\n\n");
      
      printf ("Entre com a venda em reais ( -1 para finalizar):   ");
      scanf ("%f", &vendas);
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
