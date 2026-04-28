#include <stdio.h>
#include <stdlib.h>

int main (void){
    int tamanho, lin, branco, asterisco;
    
    printf("Imprime um Losango:\n\n");
    printf ("digite o tamanho:\n");
    scanf  ("%d", &tamanho);
    
    
    for (lin = 1; lin <= tamanho / 2; lin++) {
        for (branco = 1; branco <= tamanho / 2 - lin; branco++)
            printf(" ");
        
        for (asterisco = 1; asterisco <= 2 * lin - 1; asterisco++)
             printf("*"); 
             
             printf("\n");           
    }
    
    for (lin = tamanho /2  - 1; lin >= 1; lin --) {
        
        for (branco = 1; branco < tamanho / 2 + 1 - lin; branco++)
            printf(" ");
        
        for (asterisco = 1; asterisco <= 2 * lin - 1; asterisco++)
            printf("*"); 
            
            printf("\n");
    }
    printf ("\n\n\n");
    system ("pause>>null");
    return 0;
}
     
