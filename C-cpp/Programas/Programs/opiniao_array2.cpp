#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_RESPOSTAS 20
#define TAMANHO_FREQUENCIA 11

main()
{
      int opiniao, nivel;
      int respostas[TAMANHO_RESPOSTAS] = {1, 3, 7, 2, 5, 4, 10, 8, 7, 6, 6, 5,
       5, 9, 10, 10, 7, 7, 8, 7};
      int frequencia[TAMANHO_FREQUENCIA] = {0};
      
      for(opiniao = 0; opiniao <= TAMANHO_RESPOSTAS - 1; opiniao++)
          ++frequencia[respostas[opiniao]];
      
      printf("%s%17s\n", "Nivel", "Frequencia");
      for(nivel = 1; nivel <= TAMANHO_FREQUENCIA - 1; nivel++)
          printf("%5d%17d\n", nivel, frequencia[nivel]);
          
      printf("\n\n");
      system("pause");
      return 0;
}
      
