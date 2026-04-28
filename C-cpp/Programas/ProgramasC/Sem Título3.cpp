#include <stdio.h>
#include <stdlib.h>
main()
{
      int matriz[2][2], linha, coluna;
      
      for(linha = 0; linha < 2; linha++){
          for(coluna = 0; coluna < 2; coluna++){
              printf("Digite o elemento [%d][%d]\n", linha, coluna);
              scanf("%d", &matriz[linha][coluna]);
          }
          printf("\n");
      }
      for(linha = 0; linha < 2; linha++){
          for(coluna = 0; coluna < 2; coluna++)
              printf("%3d", matriz[linha][coluna]);
          printf("\n");
      }
      system("pause");
      
      return 0;
}
