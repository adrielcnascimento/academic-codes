#include <stdio.h>
#include <stdlib.h>

main()
{
      int fator, fatorial, termos = 0, n;
      float e = 0;
      
      printf("Digite o numero de termos da serie:\n");
      scanf("%d", &n);
      
      while(termos < n){
          fator = 1;
          fatorial = 1;
          while(fator <= termos){
              fatorial *= fator;
              fator++;
          }
          e += (float) 1 / fatorial;
          termos++;
      }
      
      printf("O valor de e para %d termos  e %f\n", n, e);
      system("pause");
      return 0;
}
