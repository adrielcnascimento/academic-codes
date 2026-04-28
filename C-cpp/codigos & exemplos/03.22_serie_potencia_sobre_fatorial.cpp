/* Programa que imprime o somatorio de N termos da serie: 1 + X^1/1! + X^2/2! + X^3/3! ... */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial, fator, n, cont, denominador;
    float soma, termo, x, potencia;
    
    printf("Imprime somatorio de N termos da serie: 1 + X^1/1! + X^2/2! + X^3/3! .....\n\n");
    
    /* Leitura do numero de termos da serie */
    printf("\nQual a quantidade de termos da serie? ");    
    scanf("%d", &n);
    /* Leitura do valor de X */
    printf("\nQual o valor de X? ");
    scanf("%d", &x);
   
    cont  = 1;
    soma  = 0;    
    termo = 1; 
    denominador = 0;
    fatorial = 1;        
    potencia = 1; 
    while (cont <= n) { 
        soma +=  termo;    /*acumula o termo na soma*?
        /* calculo do próximo termo */        
        denominador++;    /* denominador do próximo termo*/
        potencia *= x;    /* num^n = num^(n-1) * n */
        fatorial *= denominador;    /* num! = (num - 1)! * num */      
        termo = 1 / (float)fatorial;    /* novo termo a ser somado*/
        cont++;
    }    
    
    /* Impressao do somatorio da serie */
    printf("\nO somatorio de %d termos da serie eh %.5f.", n, soma);
   
    printf("\n\n");
    system("pause");
    return 0;
}
