/****                         Conceitos Físicos                             ***/
/*** Escolha um conceito e este programa define o significado do respectivo
conceito físico.                                                            ***/
/*** Digite um, para definir Força;
/*** Digite dois para definir Trabalho;                                     ***/
/*** Digite três para definir Energia;                                      ***/
/*** Digite quatro para definir Momento;                                    ***/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
   int conceito;
   
   printf("Digite um conceito para obter seu significado\n");
   printf("\t\tDigite um, para Força\n");
   printf("\t\tDigite dois, para Trabalho\n");
   printf("\t\tDigite tres, para Energia\n");
   printf("\t\tDigite quatro, para Momento\n\n");
   
   printf("Digite um conceito\n");
      
   while((conceito = getchar()) != EOF){
       switch (conceito){
           case 'um':
               printf("\t\tConceito de Forca:\n");
               printf("Agente que altera o movimento de um corpo\n");
               break;
           case 'dois':
               printf("\t\tConceito de Trabalho:\n");
               printf("Grandeza fisca que nao tem conceito fisico\n");
               printf("e que em termos matematicos eh a derivada da forca em relacao\n");
               printf("ao deslocamento no ponto de aplicacao dessa forca\n"); 
               break;
           case 'tres':
               printf("\t\tConceito de Energia:\n");
               printf("Agente fisico relacionado a movimento\n");
               break;
           case 'quatro':
               printf("\t\tConceito de Momento:\n");
               printf("Dificuldade de um corpo em alterar o seu estado de movimento\n");
               break;
           default:
               printf("Conceito invalido! Digite um conceito correto.\n");
       }
       printf("Digite um conceito fisico\n");
       scanf("%d", &conceito);
   }
   system("pause");
   return 0;
}
   
