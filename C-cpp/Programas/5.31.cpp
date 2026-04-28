#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogada(); /* protótipo da função */

main()
{
      int lancamento, face, cara = 0, coroa = 0;
      
      srand(time(NULL));
      for(lancamento = 1; lancamento <= 100; lancamento++){
          face = jogada();
          if(face == 1){
              printf("Coroa no lance %d\n", lancamento);
              coroa++;
          }
          else if(face == 0){
              printf("Cara no lance %d\n", lancamento);
              cara++;
          }
      }
      printf("%d cara %d coroa\n", cara, coroa);
      system("pause");
      return 0;
}
int jogada() /* definição da função */
{
    int lado;
    lado = rand() % 2;
    if(lado == 0)
        return 0;
    else
        return 1;
}

      
      
