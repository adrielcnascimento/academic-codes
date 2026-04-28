 /*HORAS EXTRAS*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int horas,  horas_extras = 0;
    float pagamento, salario;
    
    printf ("Entre com o numero de horas trabalhadas (-1 para finalizar):   ");
    scanf ("%d", &horas);
    
    while (horas != -1){
          printf ("Entre com o valor da hora normal do trabalhador (R$ 00.00):   ");
          scanf ("%f", &pagamento);
          
          if (horas > 40){
             horas_extras = horas - 40;
             salario = (horas * pagamento) + ( horas_extras * pagamento / 2 );             
          }
          else salario = horas * pagamento + horas_extras;          
          printf ("Salario: R$ %.2f", salario);
          
          printf ("\n\n");
          
          printf ("Entre com o numero de horas trabalhadas (-1 para finalizar):   ");
          scanf ("%d", &horas);
    }
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
