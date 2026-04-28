#include<stdio.h>
#include<stdlib.h>

int main()
{
   int cont, linhAtual, linhasTot;
   printf("informe o tamanho do losango\n");
   scanf("%d", &linhasTot);
   /* imprimir parte superior do losango */ 
   /* pega tamanho da parte superior */
   linhasTot = linhasTot/2 + 1;
   for(linhAtual = 1; linhAtual <= linhasTot; linhAtual++)
   {
      for(cont = 1; cont <= (linhasTot - linhAtual); cont ++) /* imprimir espaços */
         printf(" ");
      for(cont = 1; cont <= (2*linhAtual - 1); cont++) /* imprime asteriscos */ 
         printf("*");
      printf("\n"); /* passa para próxima linha a ser impressa */
   }
   
   /*imprimir base do losango
   pega tamanho da base*/
   
   linhasTot -= 1;
   for(linhAtual = 1; linhAtual <= linhasTot; linhAtual++)
   {
      for(cont = 1; cont <= linhAtual; cont++) /* imprime espaços */
         printf(" ");
      for(cont = 1; cont <= ((linhasTot - linhAtual)*2 +1); cont++) /* imprime asteriscos */
         printf("*");
      printf("\n"); /* pula para próxima linha a ser impressa */
   }
   
   system("pause");
   return 0;
}
