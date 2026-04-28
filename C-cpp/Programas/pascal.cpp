/* Programa que imprime o Triângulo de Pascal                                 */

#include <stdio.h>
#include <stdlib.h>

int triangulo_pascal(int, int); /* protótipo da função */
main()
{
      int tamanho, linha, coluna;
      
      printf("Digite o tamanho do Triangulo de Pascal\n");
      scanf("%d", &tamanho);
      
      printf("\n\n");
      for(linha = 1; linha <= tamanho; linha++){
          for(coluna = 1; coluna <= tamanho; coluna++){
              if(triangulo_pascal(linha, coluna) == 0)
                  printf(" ");
              else
                  printf("%d ", triangulo_pascal(linha, coluna));
          }
          printf("\n");
      }
      printf("\n\n");
      system("pause");
      return 0;
}
int triangulo_pascal(int linha, int coluna)   /* definição da função */
{
    if((linha == coluna) || (coluna == 1))
        return 1;
    else if(linha < coluna)
        return 0;
    else
        return triangulo_pascal(linha - 1, coluna - 1) + 
        triangulo_pascal(linha - 1, coluna);
        
}  
