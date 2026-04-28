#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
   
   int inteiro1, inteiro2, produto, valor;
   inteiro1 = rand() % 10;
           inteiro2 = rand() % 10;
           produto = inteiro1 * inteiro2;
           
   srand(time(NULL));
   printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
   scanf("%d", &valor);
   do {
       while(valor != produto){
           
           inteiro1 = rand() % 10;
           inteiro2 = rand() % 10;
           produto = inteiro1 * inteiro2;
           
           printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
           scanf("%d", &valor);
           
           printf("Nao. Tente novamente, por favor\n");
           system("pause");
           system("cls");
           
           printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
           scanf("%d", &valor);
       }  
       printf("Muito bem!\n\n");
       system("pause");
       system("cls");
       
       inteiro1 = rand() % 10;
       inteiro2 = rand() % 10;
       produto = inteiro1 * inteiro2;
       
       printf("Quanto e %d vezes %d?\n", inteiro1, inteiro2);
       scanf("%d", &valor);
   } while(valor >= 0);
   
   system("pause");
   return 0;
}
