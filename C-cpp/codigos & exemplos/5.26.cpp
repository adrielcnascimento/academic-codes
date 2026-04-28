#include <stdio.h>
#include <stdlib.h>

int num_perf (int);

int main ( ) {
    int numero;
    
    printf ("mostra se o numero lido eh perfeito ou nao\n");
    printf ("informe um numero: ");
    scanf  ("%d", &numero);
    
    if (num_perf (numero))
       printf ("O numero %d eh perfeito\n", numero, num_perf (numero));
    else
       printf ("%d nao eh perfeito\n", numero, num_perf (numero));
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int num_perf (int num){
    int cont = 1;
    int soma_cont = 0;
    
    while (num != cont){
          if (num % cont == 0)
              soma_cont += cont;
          cont ++;  
   
    }
    if (soma_cont == num)
          return 1;
    else return 0;
}
