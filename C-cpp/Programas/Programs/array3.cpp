/* inicializando os elementos do array com os inteiros pares de 2 a 20 */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

main()
{
      int s[TAMANHO], j;
      
      for(j = 0; j <= TAMANHO - 1; j++)       /* define os valores */
          s[j] = 2 + 2 * j;       
          
      printf("%s%13s\n", "Elemento", "Valor");
      
      for(j = 0; j <= TAMANHO - 1; j++)          /* imprime os valores */
          printf("%8d%13d\n", j, s[j]);
          
      system("pause");
      return 0;
}    
      
