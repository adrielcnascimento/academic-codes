/*Aviso neste programa não suporta valores de num maiores que 10
 motivo cada vez que o fatorial cresce o valor de 1/fatorial vai ficando menor
 assim chega-se a esse limite*/
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int fatorial, fator, num, cont;
    float e = 1;
    
    printf ("Programa que calcula a exponecial com base na formula\n\n"
            "           1      1      1  \n"
            " e =  1 + ---  + --- +  --- ...\n"
            "           1!     2!     3!     \n");
    
    printf ("\nDigite um numero:  ");
    scanf  ("%d", &num);
    
    for (cont = 1; cont <= num; cont ++){  
         for (fatorial = 1, fator = 1; fator <= cont; fator ++)
            fatorial = fatorial * fator;
          e = e + (float)1/fatorial;
    }
    
    printf ("o melhor valor de e para o numero lido eh: %f", e);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
