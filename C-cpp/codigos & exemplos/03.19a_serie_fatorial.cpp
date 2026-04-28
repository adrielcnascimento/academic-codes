/* Programa que imprime o somatorio de N termos da serie: 1 + 1/1! + 1/2! + 1/3! .....\n\n */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fatorial, fator, n, cont = 1, denominador = 0;
    float soma = 0;
    
    printf("Imprime somatorio de N termos da serie: 1 + 1/1! + 1/2! + 1/3! .....\n\n");
    
    /* Leitura do numero de termos da serie */
    printf("\nQuantos termos tera a serie? ");
    scanf("%d", &n);
  
    while (cont <= n){ 
        /* calculo do fatorial de denominador */        
        fatorial = 1;
        fator = 1;
        while (fator <= denominador)
            fatorial *= fator++;     /* multiplica o fatorial por fator e, depois,
                                        incrementa fator */
        /* acumula o termo na soma */
        soma += (1 / (float)fatorial);
        denominador++;    /* denominador do próximo termo*/
        cont++;    /* incrementa contador */
    }    
    
    /* Impressao do somatório dos termos da serie */
    printf("\nO somatorio de %d termos da serie eh %.5f.", n, soma);
   
    printf("\n\n");
    system("pause");
    return 0;
}
