#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pergunta(void)
{
    int n1, n2;
    srand(time(NULL));
    n1 = rand() % 10;
    n2 = rand() % 10;
    
    printf("Quanto e %d vezes %d?\n", n1, n2);
    
    return n1 * n2;
}
int resposta(void)
{
    int resp;
    
    scanf("%d", &resp);
    return resp;
}
void com_resposta_correta(void)
{
     int num;
     num = rand() % 4 + 1;
     switch(num){
         case 1:
              printf("Muito bem!\n");
              break;
         case 2:
              printf("Excelente!\n");
              break;
         case 3:
             printf("Bom trabalho\n");
             break;
         default:
              printf("Certo. Continue assim\n");
              break;
  }
}
void com_resposta_incorreta(void)
{
     int num;
     num = rand() % 4 + 1;
     switch(num){
         case 1:
              printf("Nao. Tente novamente, por favor!\n");
              break;
         case 2:
              printf("Errado. Tente mais uma vez!\n");
              break;
         case 3:
             printf("Nao desista!\n");
             break;
         default:
              printf("Nao. Continue tentando\n");
              break;
  }
}

    
main()
{
      int x, y;
      
      
      
      printf("Programa que gera uma multiplicacao para ser respondida\n");
      
      x = pergunta();
      y = resposta();
      
      while(x == y){
          com_resposta_correta();
          x = pergunta();
          y = resposta();
      }
      while(x != y){
          com_resposta_incorreta();
          y = resposta();
      }
      system("pause");
      return 0;
}
          
              
      
      
