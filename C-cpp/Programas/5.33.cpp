#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
   
   int inteiro1, inteiro2, produto, valor, comentario;
   
   srand(time(NULL));
   
       inteiro1 = rand() % 10;
       inteiro2 = rand() % 10;
       produto = inteiro1 * inteiro2;
       
       printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
       scanf("%d", &valor);
       
       while(valor != produto){
       comentario = rand() % 4 + 1;
           switch(comentario){
               case 1:
                   printf("Nao. Tente novamente, por favor\n");
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
           printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
           scanf("%d", &valor);         
       } 
       comentario = rand() % 4 + 1; 
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
                printf("Certo. Continue assim!\n");
                break;
           }
   
   system("pause");
   return 0;
}
