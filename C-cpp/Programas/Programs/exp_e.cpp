#include <stdio.h>
#include <stdlib.h>

main()
{
      int fator, fatorial, termos, n, vezes, expoente;
      float soma, potencia, x;
      
      printf("Este programa calcula o valor de e elevado a x:\n"
              "atraves da serie S = 1 + x / 1! + x^2 / 2!+ ... + x^n / n!\n");
      printf("Digite respectivamente o numero de termos da serie\n"
              "e o valor do expoente:\n");
      scanf("%d %f", &n, &x);
      
      termos = 1;
      expoente = 0;
      soma = 0;
      while(termos <= n){
          potencia = 1;
          vezes = 1;
          while(vezes <= expoente){
              potencia *= x;
              vezes++;
          }
          fator = 1;
          fatorial = 1;
          while(fator <= expoente){
              fatorial *= fator;
              fator++;
          }
          soma += (float) potencia / fatorial;
          expoente++;
          termos++;
      }
      printf("O valor de e^x para %d termos e %f\n", n, soma);
      
      system("pause");
      return 0;
}
              
