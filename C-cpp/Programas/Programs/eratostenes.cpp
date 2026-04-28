#include <stdio.h>
#include <stdlib.h>
#define N 1000

void eratostenes (void);

main()
{
      eratostenes();
      printf("\n");
      system("pause");
      return 0;
}
void eratostenes (void){
     int primos[N], indice, multiplo, conta_primos = 0;
     
     printf("Primos entre 1 e 999\n\n");
     
     for(indice = 0; indice < 1000; indice++)
         primos[indice] = 1;
         
     for(indice = 2; indice < 1000; indice++)
         if(primos[indice] == 1)
             for(multiplo = indice + 1; multiplo < 1000; multiplo++)
                 if(multiplo % indice == 0)
                     primos[multiplo] = 0;
                     
     for(indice = 2; indice < 1000; indice++)
         if(primos[indice] == 1){
             printf("%3d ", indice);
             conta_primos++;
         }
     printf("\n\nExistem %d primos entre 1 e 999\n\n");
     return;
}                
