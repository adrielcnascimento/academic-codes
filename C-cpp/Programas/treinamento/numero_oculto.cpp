/*Número Oculto*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
   
   int numero_oculto, palpite, conta_chutes = 1;

   srand(time(NULL));
   numero_oculto = rand() % 50 + 1;   
   printf("Digite seu palpite e tente descobrir o numero oculto\n");
   scanf("%d", &palpite);
   while(palpite != numero_oculto){        
       if(palpite > numero_oculto){
           printf("O numero e menor\n");
           printf("Digite de novo\n");
           scanf("%d", &palpite);
       }
       else if(palpite < numero_oculto){
           printf("O numero e maior\n");
           printf("Digite de novo\n");
           scanf("%d", &palpite);
       }
       conta_chutes++;
   }
   if(palpite == numero_oculto)
       printf("Voce acertou com %d chute(s)\n", conta_chutes);
   system("pause");
   return 0;
}
