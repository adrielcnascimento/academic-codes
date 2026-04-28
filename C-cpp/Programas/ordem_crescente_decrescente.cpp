/* Programa que imprime um número limite em ordem crescente e decrescente     */

#include <stdio.h>
#include <stdlib.h>

void ordem_decrescente(int);       /* protótipo da função */
void ordem_crescente(int);         /* protótipo da função */
main()
{
      int numero;
      
      printf("Digite um numero\n");
      scanf("%d", &numero);
      
      ordem_decrescente(numero);
      printf("\n\n");
      ordem_crescente(numero);
      printf("\n\n");
      system("pause");
      return 0;
}
void ordem_decrescente(int valor)   /* definição da função */
{
    printf("%2d", valor);
    if(valor > 0)
        ordem_decrescente(valor - 1);
    return;
}  
void ordem_crescente(int valor) /* definição da função */
{
     if(valor > 0)
         ordem_crescente(valor - 1);
     printf("%2d", valor);
     return;
}
