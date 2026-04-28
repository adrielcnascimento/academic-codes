/*CONTAS BANCARIAS*/
#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int num_conta;
    float saldo_inicial, creditos, cobracas, saldo_final, limite;
    
    printf ("Entre com o numero da conta (-1 para finalizar):");
    scanf ("%d", &num_conta);
    
    while (num_conta != -1){
          
          printf ("Entre com o saldo inicial:   ");
          scanf("%f", &saldo_inicial);
          
          printf ("Entre com o total de cobracas:   ");
          scanf("%f", &cobracas);
          
          printf ("Entre com o total de creditos:   ");
          scanf("%f", &creditos);
          
          printf ("Entre com o limite de creditos:   ");
          scanf ("%f", &limite);
          
          saldo_final = saldo_inicial + cobracas - creditos;
          
          printf ("Conta   %d \n", num_conta);
          printf ("limite de creditos   %.2f \n", limite);
          printf ("Saldo   %.2f \n", saldo_final);
          
          if (saldo_final > limite)
          printf ("Limite de credito Excedido! \n\n");
          
          printf ("\nEntre com o numero da conta (-1 para finalizar):   ");
          scanf ("%d", &num_conta);
          
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
