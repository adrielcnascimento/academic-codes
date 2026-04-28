#include <stdio.h>
#include <stdlib.h>

double pi(int n)
{
      int termos = 1, denominador = 1;
      double pi = 0;
      
      for(termos = 1; termos <= n; termos++){
          pi += (double) 4 / denominador;
          if(denominador > 0)
              denominador += 2;
          else
              denominador -= 2;
          denominador *= -1;
      }
      
      return pi;
}
      
main()
{
      int n;

      printf("Digite o numero de termos da serie:\n");
      scanf("%d", &n);
      
      printf("\nO valor de pi para %d termos e %f\n", n, pi(n));

      system("pause");
      return 0;
}
