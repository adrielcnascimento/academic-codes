#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero(int);

int main ( ){
    int num, resultado, produto;
        
        
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
           
           if (produto == resultado){
              printf ("Parabens, Voce acertou!!!\n");
              break;
              }
           else printf ("Nao, tente novamente, por favor\n");
    }while (resultado != produto);
    
    printf ("\n\n\n");
    system ("pause");
    return 0;
}

int numero (int valor){
    valor = rand( ) % 9 + 1;    
    return valor;
}
