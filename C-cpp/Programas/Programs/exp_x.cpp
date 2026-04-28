#include <stdio.h>
#include <stdlib.h>

main()
{
      int termos, n, expoente, fator, fatorial, vezes;
      float x, potencia, soma;
      
      printf("Digite o numero de termos:\n");
      scanf("%d", &n);
      
      printf("Digite o valor de x:\n");
      scanf("%f", &x);
      
      termos = 1;
      expoente = 0;
      soma = 0;
      while(termos <= n){
          potencia = 1;
          vezes = 1;
          while(vezes <= expoente){
              potencia *= x;
              vezes++;
              //printf("%d ", potencia);
          }
          fator = 1;
          fatorial = 1;
          while(fator <= expoente){
              fatorial *= fator;
              fator++;
          }
          soma += (float) potencia / expoente;
          expoente++;
          termos++;
      }
      printf("O valor de e^x para %d termos e %f\n", n, soma);
      
      system("pause");
      return 0;
      }
