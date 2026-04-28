#include <stdio.h>
#include <stdlib.h>

main()
{
      int n, termos, denominador = 1, intervalo = 1;
      float pi = 0;
      
      while(true){
          n = 1;
          for(termos = 1; termos <= n; termos++){
              pi += 4 / denominador;
              if(denominador > 0)
                  denominador += 2;
              else
                  denominador -= 2;
              denominador *= -1;
          }
          if(314 == int (pi * 100) && intervalo == 1){
              printf("pi vale 3.14 para %d termos\n", n);
              intervalo++;
          }
          if(3141 == int (pi * 1000)  && intervalo == 2){
              printf("pi vale 3.14 para %d termos\n", n);
              break;
          }
          n++;
      }
      system("pause");
      return 0;
}
