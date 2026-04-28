/* Os arrays static são inicializados com zeros */
#include <stdio.h>
#include <stdlib.h>

void staticArrayInit();
void automaticArrayInit();

main()
{
      printf("Primeira chamada de cada funcao:\n");
      staticArrayInit();
      automaticArrayInit();
      printf("\n\nSegunda chamada de cada funcao:\n");
      staticArrayInit();
      automaticArrayInit();
      printf("\n\n");
      system("pause");
      return 0;
}
/* função para demonstrar um array local static */
void staticArrayInit()
{
     static int a[3];
     int i;
     
     printf("\nValores de staticArrayInit ao entrar:\n");
     
     for(i = 0; i <= 2; i++)
         printf("array[%d] = %d ", i, a[i]);
     
     printf("\nValores de staticArrayInit ao sair:\n");
     
     for(i = 0; i <= 2; i++)
         printf("array[%d] = %d ", i, a[i] += 5);
     
}
/* função para demonstrar um array local automatic */
void automaticArrayInit()
{
     int a[3] = {1, 2, 3};
     int i;
     
     printf("\nValores de automaticArrayInit ao entrar:\n");
     
     for(i = 0; i <= 2; i++)
         printf("array[%d] = %d ", i, a[i]);
     
     printf("\nValores de automaticArrayInit ao sair:\n");
     
     for(i = 0; i <= 2; i++)
         printf("array[%d] = %d ", i, a[i] += 5);
     
     }
     
