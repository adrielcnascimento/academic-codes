/*
  Name: NUMERO DE PITAGORAS
  Copyright: ADRIEL CASSIMIRO DO NASCIMENTO 
  Author: 20921156
  Date: 06/03/10 19:04
  Description: */

#include <stdio.h>
#include <stdlib.h>

int main ( ) {
    int cateto1, cateto2, hipo;
    system ("color 80");
    printf ("mostra todas as combinaçoes para um triangulo retangulo \n\n");
    
    for (cateto1 = 1; cateto1 <= 500; cateto1 ++){
        for (cateto2 = 1; cateto2 <=500; cateto2 ++){
            for(hipo = 1; hipo <=500; hipo ++){
               if (hipo * hipo == cateto1 * cateto1 + cateto2 * cateto2)
                  printf ("cateto 1 = %d, cateto 2 = %d, hipotenusa = %d\n", cateto1, cateto2, hipo);
               }
        }
    }
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}
    
