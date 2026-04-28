#include <stdio.h>
#include <stdlib.h>
#define N 1000

void peneira_eratostenes (void);

int main (void){
      peneira_eratostenes();
      printf("\n\n\n");
      system("pause");
      return 0;
}

void peneira_eratostenes (void){
     int primos[N], ind, multiplo, conta_primos = 0;
     
     printf("Primos entre 1 e 999\n\n");
     
     for(ind = 0; ind < 1000; ind ++)//array que inicializa todos os elementos com 1
         primos[ind] ++; 
         
     for(ind = 2; ind < 1000; ind ++)
         if(primos[ind] == 1)
            for(multiplo = ind * ind ; multiplo < 1000; multiplo++)
                if(primos[ind] % primos[multiplo] == 0)
                   primos [ind] = 0;
                         
     for(ind = 2; ind < 1001; ind ++)
         if(primos[ind] % multiplo == 0){
             printf("%d  ", ind);
             conta_primos ++;
         }
     printf("\n\nExistem %d primos entre 1 e 999\n\n");
     return ;
}
