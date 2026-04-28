#include <stdio.h>
#include <stdlib.h>

void quadrado(int, char);
main()
{
      int tamanho;
      char caractere;
      
      printf("Digite o tamanho do lado do quadrado e o caractere: ");
      scanf("%d %c", &tamanho, &caractere);
      
      system("cls");
      quadrado(tamanho, caractere);
      
      printf("\n");
      
      system("pause");
      return 0;
}
void quadrado(int lado, char fillCharacter){
     int linha, coluna;
     for(linha = 1; linha <= lado; linha++){
         for(coluna = 1; coluna <= lado; coluna++)
             printf("%c", fillCharacter);
        printf("\n");
     }
return;
}     
