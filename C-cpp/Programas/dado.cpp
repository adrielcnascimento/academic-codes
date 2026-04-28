#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 7

main()
{
      int face, jogada, frequencia[TAMANHO] = {0};
      
      srand(time(NULL));
      
      printf("%s%17s\n", "Face", "Frequencia");
      for(jogada = 1; jogada <= 6000; jogada++){
          face = rand() % 6 + 1;
          ++frequencia[face];
      }
      for(face = 1; face <= TAMANHO - 1; face++)
          printf("%4d%17d\n", face, frequencia[face]);
          
      printf("\n\n");
      system("pause");
      return 0;
}
