#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
main()
{
      int opcao, tamanho, linha, asterisco, branco;
      
      do{
          do{
              system("cls");
              printf("\t\t*** Escolha uma opcao para uma figura: ***\n");
              printf("\t\t*** 1 - para Triangulo Padrao 1 ***\n");
              printf("\t\t*** 2 - para Triangulo Padrao 2 ***\n");
              printf("\t\t*** 3 - para Triangulo Padrao 3 ***\n");
              printf("\t\t*** 4 - para Triangulo Padrao 4 ***\n");
              printf("\t\t*** 5 - para Losango ***\n");
              printf("\t\t*** 6 - para Quadrado Marcado ***\n");
              printf("\t\t*** 7 - para Tabuleiro de Xadrez ***\n");
              printf("\t\t*** 8 - para Sair ***\n");
              printf("\t\Digite uma opcao: ");
              scanf("%d", &opcao);
              
              if(opcao < 1 || opcao > 8){
                  printf("Opcao invalida!!!\n");
                  system("pause");
              }
          }while(opcao < 1 || opcao > 8);
          
          if(opcao != 8){
              printf("\n\nDigite o tamanho da figura: ");
              scanf("%d",&tamanho);
              system("cls");
          }
          switch(opcao){  
            case 1: 
                printf("\n\nTriangulo Padrao 1:\n\n");
                for (linha = 1; linha <= tamanho; linha++){ 
                    for (asterisco = 1; asterisco <= linha; asterisco++){
                        printf("*");   
                        Sleep(100);
                    }
                    printf("\n");
                }
                break;
            case 2: 
                printf("\n\nTriangulo Padrao 2:\n\n");
                for (linha = 1; linha <= tamanho; linha++){ 
                    for (asterisco = tamanho; asterisco >=  linha; asterisco--)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 3: 
                printf("\n\nTriangulo Padrao 3:\n\n");
                for (linha = 1; linha <= tamanho; linha++){      
                    for (branco = 1; branco < linha; branco++)
                        printf(" ");       
                    for (asterisco = 1; asterisco <= tamanho + 1 - linha ; asterisco++)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 4:
                printf("\n\nTriangulo Padrao 4:\n\n");
                for (linha = 1; linha <= tamanho; linha++){      
                    for (branco = 1; branco <= tamanho - linha; branco++)
                        printf(" ");       
                    for (asterisco = 1; asterisco <= linha; asterisco++)
                        printf("*");   
                    printf("\n");
                }
                break;
            case 5: 
                printf("\n\nLosango:\n\n");
                tamanho = tamanho / 2 + 1;
                for (linha = 1; linha <= tamanho; linha++) {
                    for (branco = 1; branco <= tamanho - linha; branco++)
                        printf(" ");
                    for (asterisco = 1; asterisco <= 2 * linha - 1; asterisco++)
                        printf("*"); 
                    printf("\n");           
                }
                tamanho -= 1;
                for (linha = tamanho; linha >= 1; linha --) {
                    for (branco = 1; branco <= tamanho + 1 - linha; branco++)
                        printf(" ");
                    for (asterisco = 1; asterisco <= 2 * linha - 1; asterisco++)
                        printf("*"); 
                    printf("\n");           
                }
                break;
            case 6:
                printf("\n\nQuadrado Marcado:\n\n");
                for (linha = 1; linha <= tamanho; linha ++) {
                    for (asterisco = 1; asterisco <= tamanho; asterisco ++)
                        if(asterisco == 1 || asterisco == tamanho || linha == 1
                        || linha == tamanho || asterisco == linha
                        || (asterisco + linha == tamanho + 1)){
                            printf("*");
                        }
                        else
                            printf(" ");
                        printf("\n");
                }
                break;
            case 7:
                printf("\n\nTabuleiro de Xadrez:\n\n");
                for(linha = 1; linha <= tamanho; linha++){
                    for(asterisco = 1; asterisco <= tamanho; asterisco++)
                        if(linha % 2 != 0 && asterisco % 2 != 0)
                            printf("* ");
                        else if(linha % 2 != 0 && asterisco % 2 == 0)
                            printf(" ");
                        else if(linha % 2 == 0 && asterisco % 2 != 0)
                            printf(" ");
                        else
                            printf("* ");
                        printf("\n");
                }
                break;
      }
      printf("\n\n");
      system("pause");
}while(opcao != 8);
      
return 0;
}
