/* Questão 5.34 ==> Deitel                                                    */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main()
{
      int inteiro1, inteiro2, valor, produto, opcao, operacao, grau,
      comentario, respostas, acertos = 0, erros = 0;
      
      float porcentagem;
      
      printf("Digite o grau dos inteiros:\n");
      scanf("%d", &grau);
      printf("Digite a opcao:\n"
             "\t1, para adicao\n"
             "\t2, para subtracao\n"
             "\t3, para multiplicao\n"
             "\t4, para divisao\n"
             "\te 5, para uma operacao aleatoria\n");
      scanf("%d", &opcao);
      
      switch(opcao){
          case 1:
             operacao = inteiro1 + inteiro2;
             break;
          case 2:
              operacao = inteiro1 * inteiro2;
              break;
      }
      
      for(respostas = 1; respostas <= 10; respostas++){
          srand(time(NULL));
          inteiro1 = rand() % (int)(pow(10, grau));
          inteiro2 =  rand() % (int)(pow(10, grau));
          operacao;
          comentario = rand() % 4 + 1;
          
      
          printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
          scanf("%d", &valor);
          
          if(valor == operacao){
              switch(comentario){
                  case 1:
                      printf("Muito bem!\n");
                      break;
                  case 2:
                      printf("Excelente!\n");
                      break;
                  case 3:
                      printf("Bom trabalho!\n");
                      break;
                  default:
                      printf("Continue assim!\n");
                      break;
              }
              system("pause");
              system("cls");
              acertos++;
          }
          else{
              switch(comentario){
                  case 1:
                      printf("Nao. Tente novamente, por favor.\n");
                      break;
                  case 2:
                      printf("Errado. Tente mais uma vez.\n");
                      break;
                  case 3:
                      printf("Nao desista!\n");
                      break;
                  default:
                      printf("Nao. Continue tentando.\n");
                      break;
              }
              system("pause");
              system("cls");
              erros++;
          }
          
      }
      porcentagem = (float) acertos * 10;
      printf("Voce obteve  %.0f %% de acertos\n", porcentagem);
      if(porcentagem < 75)
          printf("Por favor, solicite ajuda extra ao professor\n\n");
      system("pause");
      return 0;
      }
          
