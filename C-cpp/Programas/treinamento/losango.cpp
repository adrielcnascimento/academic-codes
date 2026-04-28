#include <stdio.h>
#include <stdlib.h>

main(){
  int linha, asterisco, branco, tamanho;
  
  printf("Digite o tamanho da figura\n");
  scanf("%d", &tamanho);
  printf("\n\n");
  for(linha = 1; linha <= tamanho / 2;linha++){
      for(branco = 1; branco <= tamanho / 2 - linha; branco++)
          printf(" ");
      for(asterisco = 1; asterisco <= 2 * linha - 1; asterisco++)
          printf("*");
      printf("\n");
  }
  for(linha = tamanho / 2 - 1; linha >= 1; linha --){
      for(branco = 1; branco <= tamanho / 2 - linha; branco++)
          printf(" ");
      for(asterisco = 1; asterisco <= 2 * linha - 1; asterisco++)
          printf("*");
      printf("\n");
      
  }
  printf("\n\n");
  system("pause");
  return 0;
} 
