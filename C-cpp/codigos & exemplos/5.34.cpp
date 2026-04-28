#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int);

int main ( ){
    int num, resultado, produto, resposta, cont, tentativas = 1, acertos = 0, acertos_totais = 0;
    float percentual_de_acertos = 0;
    printf ("Programa de multiplicacao\n"); 
    
    for (cont = 1; cont <= 10; cont ++){
       srand(time(NULL));
    
       produto = numero(num);    
       printf ("Quanto eh %d ", numero(num));
       srand  (time(NULL));
       printf ("vezes %d ?", numero(num));
       produto *= numero(num);       
       tentativas = 1;
       acertos = 0;
       
       do{
           printf ("\nDigite o resultado: ");
           scanf  ("%d", &resultado);
           
           resposta = rand () % 4 + 1;
           tentativas ++;
           
           if (produto == resultado){
               acertos ++;              
               switch (resposta){
                  case 1:
                     printf ("\nMuito bem!\n");
                  break;
                     
                  case 2:
                     printf ("\nExcelente!\n");
                  break;
                     
                  case 3:
                     printf ("\nBom trabalho!\n");
                  break;
                     
                  case 4:
                     printf ("\nCerto. Continue assim!\n");
                  break;
               }
           }
           else switch (resposta){
                  case 1:
                     printf ("\nNao. Tente novamente, por favor.\n");
                  break;
                     
                  case 2:
                     printf ("\nErrado.\n");
                  break;
                     
                  case 3:
                     printf ("\nTente mais uma vez. Nao desista!\n");
                  break;
                     
                  case 4:
                     printf ("\nNao. Continue tentando.\n");
                  break;
               }
               
       }while (resultado != produto && tentativas <= 10);
       acertos_totais = acertos;
    }
    percentual_de_acertos = acertos_totais / 100;
    if (percentual_de_acertos < 0.75)
       printf ("peca ajuda a seu professor\n");
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int numero (int valor){
    valor = rand( ) % 9 + 1;    
    return valor;
}
