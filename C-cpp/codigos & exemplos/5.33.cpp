#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int);

int main ( ){
    int num, resultado, produto, resposta;
      
    printf ("Programa de multiplicacao\n"); 
    srand(time(NULL));
    produto = numero(num);
    printf ("Quanto eh %d ", numero(num));
    srand  (time(NULL));
    printf ("vezes %d ?", numero(num));
    produto *= numero(num);       

    do{
           printf ("\nDigite o resultado: ");
           scanf  ("%d", &resultado);
           
           resposta = rand () % 4 + 1;
           
           if (produto == resultado){
               switch (resposta){
                  case 1:
                     printf ("Muito bem!\n");
                  break;
                     
                  case 2:
                     printf ("Excelente!\n");
                  break;
                     
                  case 3:
                     printf ("Bom trabalho!\n");
                  break;
                     
                  case 4:
                     printf ("Certo. Continue assim!\n");
                  break;
               }
           }
           else switch (resposta){
                  case 1:
                     printf ("Nao. Tente novamente, por favor.\n");
                  break;
                     
                  case 2:
                     printf ("Errado.\n");
                  break;
                     
                  case 3:
                     printf ("Tente mais uma vez. Nao desista!\n");
                  break;
                     
                  case 4:
                     printf ("Nao. Continue tentando.\n");
                  break;
               }
    }while (resultado != produto);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int numero (int valor){
    valor = rand( ) % 9 + 1;    
    return valor;
}
