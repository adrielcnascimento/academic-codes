#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rola_dados (void);

main(){
   
   int placar, soma, ponto;
   
   srand(time(NULL));
   soma = rola_dados(); /* primeiro lançamento dos dados */
   switch(soma){
       case 7: case 11:
           placar = 1; /* ganha na primeira rodada */
           break;
       case 2: case 3: case 12:
            placar = 2; /* perde na primeira rodada */
            break;
       default:
           placar = 0; /* armazena ponto */
           ponto = soma;
           printf("O total de pontos eh %d\n", ponto);
           break; 
   }
   while(placar == 0){ /* continua jogando */
       soma = rola_dados();
       if(soma == ponto) /* vence fazendo ponto */
           placar = 1;
       else
           if(soma == 7) /* perde obtendo o valor 7 */
               placar = 2;
   }
   if(placar == 1)
       printf("Jogador venceu!\n");
   else
       printf("Jogador perdeu!\n");
       
   system("pause");
   return 0;
}
int rola_dados(void){

   int dado1, dado2, soma;
   
   dado1 = 1 + rand() % 6;
   dado2 = 1 + rand() % 6;
   soma = dado1 + dado2;
   printf("O jogador lancou %d + %d = %d vezes\n", dado1, dado2, soma);
   return soma;
}
